include "include/hokuyo.inc"

define robottype model (
  name "robot"
  size [ 0.01 0.01 0.01 ]
  pose [ 0 0 -0.1 0 ]
  color "white"
)

define segway position
(
  size [0.50 0.50 0.750]
  
  # This block approximates a circular shape of a Robot
  block( points 16
        point[0] [ 0.225 0.000 ]
        point[1] [ 0.208 0.086 ]
        point[2] [ 0.159 0.159 ]
        point[3] [ 0.086 0.208 ]
        point[4] [ 0.000 0.225 ]
        point[5] [ -0.086 0.208 ]
        point[6] [ -0.159 0.159 ]
        point[7] [ -0.208 0.086 ]
        point[8] [ -0.225 0.000 ]
        point[9] [ -0.208 -0.086 ]
        point[10] [ -0.159 -0.159 ]
        point[11] [ -0.086 -0.208 ]
        point[12] [ -0.000 -0.225 ]
        point[13] [ 0.086 -0.208 ]
        point[14] [ 0.159 -0.159 ]
        point[15] [ 0.208 -0.086 ]
        z [0 1]
  )
    
  origin [0 0 0 0]
  gui_nose 1
  drive "diff"
  localization "odom"
  odom_error [ 0.01 0.01 0.0 0.01 ]
  utm30(pose [ 0.25 0 -0.4 0 ])
  #urg04(pose [ -0.050 0 -0.2 180 ])
  robottype()

)

