# Docker images

## orazio

* build

    docker build -t orazio -f Dockerfile.orazio .

* run

    docker run -it --privileged -v /dev:/dev --net host orazio tmux


From the container:

* flash firmware (connect Arduino with USB)

    cd ~/src/srrg/srrg2_orazio/srrg2_orazio/firmware_build/atmega2560/
    make
    make orazio.hex

* run orazio web server

    cd ~/src/marrtino_apps/config
    ./run_orazio2_web.bash

* launch robot node

    cd ~/src/marrtino_apps/robot
    roslaunch robot.launch


## orazio (version 2018)

* build

    docker build -t orazio:2018 -f Dockerfile.orazio2018 .

* run

    docker run -it --privileged -v /dev:/dev --net host orazio:2018 tmux
