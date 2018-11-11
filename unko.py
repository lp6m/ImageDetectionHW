import vdtools
import numpy as np
import pickle
import cv2
import glob
import matplotlib.image as mpimg

def generate_window_candidate():
	windows_list = pickle.load( open( "./cache/windows_list.p", "rb" ) )
	print(windows_list)
	image = cv2.imread('image_0299.png')
	for i, window in enumerate(windows_list):
		crop = image[window[0][1]: window[1][1], window[0][0]:window[1][0]]
		name = 'crop_test/crop/image' + str(i) + '.png'
		cv2.imwrite(name, crop)

		imcopy = np.copy(image)
		cv2.rectangle(imcopy, window[0], window[1], (0, 0, 255), 3)
		cv2.imwrite('crop_test/window/image' + str(i) + '.png', imcopy)

def test_one_resized_image():
	image_paths = glob.glob('./data/red/*')
	finder = vdtools.WindowFinder()
	# print(image_paths)
	# path = image_paths[0]	
	# for path in image_paths:
	path = 'resized87.png'
	test_img = mpimg.imread(path)#cv2.imread(path)
	clf = pickle.load( open( "./cache/clf.p", "rb" ))
	scaler = pickle.load(open( "./cache/scaler.p", "rb"))

	features = finder.singleimgfeatures(test_img)
	test_features = scaler.transform(np.array(features).reshape(1, -1))
	print(test_features.shape)
	preds = clf.predict_proba(test_features)
	print(path, preds)

def test_one_image():
	pass



# test_one_resized_image()
generate_window_candidate()
# unko = vdtools.WindowFinder()
