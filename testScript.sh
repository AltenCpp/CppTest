#!/bin/bash

if (g++ src/test.cpp src/polygon.cpp -o test.out && ./test.out)
then
  echo "----------------------"
  echo "Tests SUCCESSFUL"
else
  echo "----------------------"
  echo "Tests FAILED"
fi