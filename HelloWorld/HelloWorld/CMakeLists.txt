cmake_minimum_required(VERSION 3.1)

# Project
project(HelloWorld VERSION 1.0.0)
find_package(Switch REQUIRED)
set(SOURCES
src/Point.h
src/Point.c
src/Size.h
src/Size.c
src/HelloWorld.c
)
source_group(src FILES ${SOURCES})

# Options
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# Application properties
add_executable(${PROJECT_NAME} ${SOURCES})
