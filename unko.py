import vdtools
import numpy as np
import pickle
import cv2
import glob
import matplotlib.image as mpimg

def generate_window_cppcode():
	windows_list = pickle.load( open( "./cache/windows_list.p", "rb" ) )
	print("{")
	for window in windows_list:
		print("{{", window[0][1] ,",", window[1][1], "},{", window[0][0], ",", window[1][0], "}},")
	print("};")
def generate_window_candidate():
	windows_list = pickle.load( open( "./cache/windows_list.p", "rb" ) )
	# image = cv2.imread('./image_0133.png')
	image = cv2.imread('./video/outtest4/image_0220.png')
	for i, window in enumerate(windows_list):
		crop = image[window[0][1]: window[1][1], window[0][0]:window[1][0]]
		name = 'crop_test2/crop/image' + str(i) + '.png'
		cv2.imwrite(name, crop)

		imcopy = np.copy(image)
		cv2.rectangle(imcopy, window[0], window[1], (0, 0, 255), 3)
		cv2.imwrite('crop_test2/window/image' + str(i) + '.png', imcopy)

def test_one_resized_image():
	image_paths = glob.glob('./data/red/*')
	finder = vdtools.WindowFinder()
	# print(image_paths)
	# path = image_paths[0]	
	# for path in image_paths:
	path = 'resized87.png'
	# test_img = mpimg.imread(path)#cv2.imread(path)
	test_img = cv2.imread(path)
	clf = pickle.load( open( "./cache/clf.p", "rb" ))
	scaler = pickle.load(open( "./cache/scaler.p", "rb"))

	features = finder.singleimgfeatures(test_img)
	# for i in range(len(features)):
	# 	print(features[i])
	test_features = scaler.transform(np.array(features).reshape(1, -1))
	# print(test_features.shape)
	preds = clf.predict_proba(test_features)[:,1]
	print(path, preds)

def test_one_image():
	pass

def show_importances():
	clf = pickle.load( open( "./cache/clf.p", "rb" ))
	importances = clf.feature_importances_
	# print(importances)
	spatial_hsv = importances[0:192]
	spatial_rgb = importances[192:384]
	hist_hsv = importances[384:384+36]
	hist_rgb = importances[384+36:384+72]
	hog = importances[384+72:]
	print('spatial_hsv', np.sum(np.array(spatial_hsv)))
	print('spatial_rgb', np.sum(np.array(spatial_rgb)))
	print('hist_hsv', np.sum(np.array(hist_hsv)))
	print('hist_rgb', np.sum(np.array(hist_rgb)))
	print('hog', np.sum(np.array(hog)))


# test_one_resized_image()
show_importances()
# generate_window_candidate()
# generate_window_cppcode()
# unko = vdtools.WindowFinder()
