#!/bin/bash

if (g++ test/test.cpp src/polygon.cpp -Isrc -o test.out && ./test.out)
then
  echo "----------------------"
  echo "Tests SUCCESSFUL"
else
  echo "----------------------"
  echo "Tests FAILED"
fi