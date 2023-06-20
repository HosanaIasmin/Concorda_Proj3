cmake_minimum_required(VERSION 3.26.2)
project(Concord VERSION 1.0 LANGUAGES CXX)

include_directories(include)

add_executable(program src/main.cpp src/Usuario.cpp)