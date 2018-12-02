import cv2
import numpy as np
import myhog
import math

w = 100
result_width = w * 8
result_height = w * 4

# file = 'data/red/image_0001.png'
file = './resized87.png'
img = cv2.imread(file)
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
hog = myhog.myhog(gray)

zoom_gray = cv2.resize(gray, (result_width, result_height), cv2.INTER_LINEAR)
result_canvas = cv2.cvtColor(zoom_gray, cv2.COLOR_GRAY2BGR)
# mask = np.zeros((100, 100, 3), dtype=np.uint8)

for y in range(4):
    for x in range(8):
        cx = w/2 + x * w
        cy = w/2 + y * w
        for i in range(9):
            mag = hog[(y*8+x)*9+i]
            length = mag*w/409

            degree = (i + 1) * 20
            rad = math.radians(degree)
            sx = int(cx + length * math.cos(rad) / 2)
            sy = int(cy + length * math.sin(rad) / 2)
            ex = int(cx - length * math.cos(rad) / 2)
            ey = int(cy - length * math.sin(rad) / 2)
            if(length > 0):
                cv2.line(result_canvas,(sx,sy),(ex,ey),(0,255,0),2)


cv2.imshow('result', result_canvas)
cv2.waitKey(0)
