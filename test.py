from road_sensor import RoadSensor
import matplotlib.image as mpimg
import matplotlib.pyplot as plt
import cv2
import glob

def test_one_image(imgname):
	obj = RoadSensor()
	res = obj.test_one_image(mpimg.imread(imgname))
	mpimg.imsave('result.png', res)

def test_images():
	obj = RoadSensor()
	image_paths = glob.glob('./iphone/cropped/*')
	image_paths.sort()
	for i, path in enumerate(image_paths):
		res = obj.test_one_image(cv2.imread(path))
		print(res.shape)
		cv2.imwrite('iphone_ans/ans_' + str(i) + '.png', res)
# obj.run('input.mp4')
# test_images()

obj = RoadSensor()
