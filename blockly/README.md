# MARRtino Blockly program #

MARRtino Blockly programming.

## Install ##

Follow installation instructions in MARRtino Python program.

* Blockly

Blockly code is installed as a git submodule. Install with

```
git submodule init
git submodule update

```

* Websocket 

Install tornado websocket library

```
sudo pip install tornado
```


## Blocky programming ##


* Run a robot

Simulator

```
cd marrtino_apps/stage
roslaunch simrobot.launch 
```

Real robot

```
cd marrtino_apps/robot
roslaunch robot.launch 
```



* Run the websocket server (on the robot machine)

```
python websocket_robot.py
```

* Run the Blockly Robot app (on the client machine)

```
firefox blockly_robot.html
```

Set IP of the robot (i.e., IP of the machine running the websocket server).

Use blockly to program the robot and run it through the ```Run code``` button on the web page.


