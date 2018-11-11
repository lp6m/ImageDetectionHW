import cv2
import numpy as np
import glob

def check_red_ratio(imgpath):
	image = cv2.imread(imgpath)
	hsv = cv2.cvtColor(image, cv2.COLOR_BGR2HSV_FULL)
	h = hsv[:, :, 0]
	s = hsv[:, :, 1]
	mask = np.zeros(h.shape, dtype=np.bool)
	mask[((h < 20) | (h > 200)) & (s > 128)] = True

	redgaso = np.count_nonzero(mask == True)
	ratio = round(float(redgaso*100.0/mask.size), 3)
	return ratio

print('red')
image_paths = glob.glob('./data/red/*')
image_paths.sort()
reslist = []
for path in image_paths:
	reslist.append(check_red_ratio(path))

print('average:', np.average(np.array(reslist)))
print('min:', np.min(np.array(reslist)))
print('max:', np.max(np.array(reslist)))

print('not_red')
image_paths = glob.glob('./data/not_red/*')
image_paths.sort()
reslist = []
for path in image_paths:
	reslist.append(check_red_ratio(path))

print('average:', np.average(np.array(reslist)))
print('min:', np.min(np.array(reslist)))
print('max:', np.max(np.array(reslist)))