#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/lp6m/Desktop/imagedDetectionHW/hls/color_hist/solution1/.autopilot/db/a.g.bc ${1+"$@"}
