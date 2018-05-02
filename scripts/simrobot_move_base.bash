#!/bin/bash
SESSION=$USER

tmux -2 new-session -d -s $SESSION

# window 0
tmux rename-window 'Robot'

tmux split-window -v
tmux select-pane -t 0
tmux split-window -h
tmux select-pane -t 2
tmux split-window -h

tmux select-pane -t 0
tmux send-keys "cd $HOME/src/marrtino_apps/stage" C-m
tmux send-keys "roslaunch simrobot.launch" C-m
sleep 1

tmux select-pane -t 1
tmux send-keys "cd $HOME/src/marrtino_apps/navigation" C-m
tmux send-keys "rosrun rviz rviz -d nav.rviz" C-m
sleep 1

tmux select-pane -t 2
tmux send-keys "cd $HOME/src/marrtino_apps/navigation" C-m
tmux send-keys "roslaunch amcl.launch map_name:=my_map" C-m
sleep 1

tmux select-pane -t 3
tmux send-keys "cd $HOME/src/marrtino_apps/navigation" C-m
tmux send-keys "roslaunch move_base.launch" C-m
sleep 1


# Attach to session
tmux -2 attach-session -t $SESSION

