cmake_minimum_required(VERSION 3.3)

project(HelloWorld)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
add_executable(${PROJECT_NAME} src/HelloWorld.c)
