import numpy as np
import cv2, pickle, glob, os
import matplotlib.pyplot as plt
import matplotlib.image as mpimg
# import lftools
import vdtools
import time

from moviepy.editor import VideoFileClip
from IPython.display import HTML

class RoadSensor(object):
    def __init__(self):
        
        self.windFinder    = vdtools.WindowFinder()

    def __image_pipeline(self, img):
        """The pipeline for processing images. Globals g are added to functions that need
        access to global variables.
        """
        
        ##### Lane finding pipeline #######
        # resized     = self.__resize_image(img)
        # undistorted = self.__correct_distortion(resized)
        # warped      = self.__warp_image_to_biv(undistorted)
        # thresholded = self.__threshold_image(warped)
        # lines       = self.__get_lane_lines(thresholded)
        # lane_img    = self.__draw_lane_lines(undistorted, thresholded, include_stats=True)


        # Convert matlab RGB image to CSV BGR image 
        # cv_image = np.array(img)[:, :, ::-1].copy() 
        # mpimg.imsave('original.png', img)
        # cv2.imwrite('original_cv.png', cv_image)
        hot_windows, probas = self.windFinder.get_hot_windows(img)
        result   = self.__draw_results(img, hot_windows, probas)

        # cv2.waitKey(1)
        return result

    def __draw_results(self, img, hot_windows, probas):
        imcopy = np.copy(img)
        for bbox, proba in zip(hot_windows, probas):
            cv2.rectangle(imcopy, bbox[0], bbox[1], (0, 0, 255), 2)
            cv2.putText(imcopy,str(proba),(bbox[0][0]+2, bbox[0][1]+2),cv2.FONT_HERSHEY_PLAIN, 2,(255,255,0))
        return imcopy

    def __draw_boxes(self, img, bboxes, color=(0, 0, 255), thick=2):
        """Draws boxes on image from a list of windows"""

        # Make a copy of the image
        imcopy = np.copy(img)
        # Iterate through the bounding boxes
        for bbox in bboxes:
            # Draw a rectangle given bbox coordinates
            cv2.rectangle(imcopy, bbox[0], bbox[1], color, thick)
        # Return the image copy with boxes drawn
        return imcopy

    def run(self, vid_input_path='project_video.mp4'):
        """
        Run code on the assigned project video.
        """
        vid_output_path = self.g.output_movie_path +  vid_input_path
        print('Finding lanes for:', vid_input_path)        

        # Load the Video
        # video_clip = VideoFileClip(video_filename).subclip(10, 11)
        clip1 = VideoFileClip(vid_input_path)

        # Feed the video, clip by clip into the pipeline.
        test_clip = clip1.fl_image(self.__image_pipeline)  
        test_clip.write_videofile(vid_output_path, audio=False)

        return True

    def test_one_image(self, img):
        """
        Tests the pipeline on one image
        """
        return self.__image_pipeline(img)


if __name__ == '__main__':
    obj = LaneFinder()
    # obj.run()
    obj.test(save=False)



