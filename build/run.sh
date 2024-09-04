#! /bin/sh -

while [ 1 ]
do
  make clean;
  cmake ..;
  make;
  ./helloworld;
done
