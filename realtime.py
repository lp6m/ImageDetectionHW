# -*- coding: utf-8 -*-
import cv2
import numpy as np
from road_sensor import RoadSensor
import matplotlib.image as mpimg
import matplotlib.pyplot as plt
import glob

fmt = cv2.VideoWriter_fourcc('m', 'p', '4', 'v')
fps = 1.0
size = (640, 480)
writer = cv2.VideoWriter('realtime.m4v', fmt, fps, size)
cap = cv2.VideoCapture(1)
obj = RoadSensor()
obj = RoadSensor()
while True:
    _, frame = cap.read()
    frame = cv2.resize(frame, size)
    # print('cvimage', frame.dtype)
    # cv2.imwrite('frame.png', frame)
    # mpimage = frame[:, :, ::-1].copy()
    # mpimg.imsave('mpimg.png', mpimage)
    # mpimage = mpimg.imread('frame.png')
    # print('mpimg', mpimage.dtype)
    res = obj.test_one_image(frame)

    # cvimage = res[:, :, ::-1].copy()
    # cv2.imwrite('cvimage.png', cvimage)
    
    # cvimage2 = cv2.cvtColor(cvimage, cv2.COLOR_BGR2GRAY)
    # cvimage = (cvimage * 255).round().astype(np.uint8)
    cv2.imshow('result', res)
    writer.write(res)
    if cv2.waitKey(1) == 13:
        break

writer.release()
cap.release()
cv2.destroyAllWindows()