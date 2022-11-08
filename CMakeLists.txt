#https://cmake.org/cmake-tutorial/

cmake_minimum_required(VERSION 2.8.9)
project(aritmetica)

#Bring the headers, such SumaApplication.h into the project 
#include_directories(interface)
#Can manually add the sources using the set command as follows:
#set(SOURCES source/main.c source/suma.c source/resta.c source/suma_2.c)
#However, the file(GLOB..)allows for wildcard additions:


SET(CMAKE_C_FLAGS "-g -fprofile-arcs -ftest-coverage -fPIC ")
add_executable(${PROJECT_NAME} main.c)

add_subdirectory(cuadrados)
add_subdirectory(operaciones)

target_link_libraries(${PROJECT_NAME} Cuadrados operaciones)
