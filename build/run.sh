#! /bin/sh -

while [ 1 ]
do
  cmake ..
  make
  ./helloworld;
done
