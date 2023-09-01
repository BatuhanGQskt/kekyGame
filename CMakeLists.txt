cmake_minimum_required(VERSION 3.20)

project(out VERSION 0.1.1)
set(CMAKE_CXX_STANDARD 11)

add_executable(out ../helpers/warriors.cpp ../helpers/knight.cpp ../main.cpp )
