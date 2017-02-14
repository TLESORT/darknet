#!/bin/bash

#this script makes it possible to change size of input automatically for yolo2
# you will be able to run the new network using 
#make && ./darknet detect cfg/deploy.cfg yolo.weights ../PathToVideo

lenght=$1

cd cfg/

input="yolo.cfg" 
output="deploy.cfg"

cp $input $output

sed -i 's/width=416'/'width='$lenght'/' $output
sed -i 's/height=416'/'height='$lenght'/' $output

cd ..


