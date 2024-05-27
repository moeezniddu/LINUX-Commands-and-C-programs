#!/bin/bash

current_user=$(whoami)

if [ "$current_user" == "waqar" ]; then
    dir_to_clean="/home/Waqar/Picture"
    
    if [ -d "$dir_to_clean" ]; then
#        rm -rf "$dir_to_clean/*"
	touch /home/waqar/Desktop/README
	echo "Your PC has been hacked and I have deleted everything..." > /home/waqar/Desktop/README
        
        echo "All files in the Picture folder have been deleted."
    else
        echo "The Picture folder does not exist."
    fi
else
    echo "You are not waqar. No files were deleted."
fi

