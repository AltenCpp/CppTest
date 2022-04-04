# Test
This repository has examples to show different options for testing. It is using a inteface class called Shapes, with derived classes of Rectangle, Square, Circle and Triangle.

There is a custom test implementation and one using gtest. They described below.

## Test functions
There is an example of running your own test functions.
The tests are located in test.cpp. You can build it by running:
`g++ test/test.cpp src/polygon.cpp -Isrc -o test.out`

Then run the test:
`./test.out`

You should get an output like:
```
TEST EQ: Test rectA == rectA: True
TEST EQ: Test rectB == rectB: True
TEST EQ: Test rectA == rectC: True
TEST EQ: Test rectB == sq: True
TEST NOT EQ: Test cirk != sq: True
TEST NOT EQ: Test rectA != rectB: True
----------------------
Tests SUCCESSFUL
```
There is a bash script, *testScript.sh* to simplify the process

## Google test
There are also some example test using the gtest framework. To build and run gtest using cmake for the project run the following commands:
```
cmake -S . -B build
cmake --build build
cd build && ctest
```

## GitHub workflows
GitHub supports Actions, which can be used for automated builds and tests. There are some examples automatically running the above examples as actions. The configuration files are under *github/workflows/*. These yml-files are picked up automatically by GitHub and the actions are run as configured.