g++ -std=c++11 -lm -g -fsigned-char -fpermissive -Wint-to-pointer-cast realtime.cpp xcalc_hog.c xcalc_hog_linux.c  xcalc_hog_sinit.c  xcolor_hist.c xcolor_hist_linux.c xcolor_hist_sinit.c linuxmisc.cpp linuxmmap.cpp -O3 -I/usr/local/include/opencv2 -I/usr/local/include/opencv -L/usr/local/lib -lopencv_core -lopencv_imgcodecs -lopencv_highgui -L/usr/local/lib -lopencv_shape -lopencv_stitching -lopencv_objdetect -lopencv_superres -lopencv_videostab -lopencv_calib3d -lopencv_features2d -lopencv_highgui -lopencv_videoio -lopencv_imgcodecs -lopencv_video -lopencv_photo -lopencv_ml -lopencv_imgproc -lopencv_flann -lopencv_core
