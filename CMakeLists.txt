cmake_minimum_required(VERSION 3.13)
project(C__Practice)

set(CMAKE_CXX_STANDARD 17)
ADD_LIBRARY(GuessMyNumber guessmynumber.cpp)

add_executable(C__Practice main.cpp)
target_link_libraries(C__Practice GuessMyNumber)