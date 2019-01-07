cmake_minimum_required(VERSION 3.13)
project(C__Practice)

set(CMAKE_CXX_STANDARD 17)
# Below is how you link libraries or files with a custom name
# then add line 10 to link them together
#ADD_LIBRARY(GuessMyNumber guessmynumber.cpp)

add_executable(C__Practice main.cpp functions.cpp guessmynumber.cpp functions.h print.cpp print.h)
#target_link_libraries(C__Practice GuessMyNumber)