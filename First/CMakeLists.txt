cmake_minimum_required(VERSION 2.8)
project(first)
add_executable(firstapp first.cpp)
install(TARGETS firstapp DESTINATION bin)