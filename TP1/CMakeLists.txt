cmake_minimum_required(VERSION 3.7)
project(TP1qt)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets CONFIG REQUIRED)

add_executable(TP1qt main.cpp MainWindow.cpp MainWindow.h)

target_link_libraries(TP1qt Qt5::Widgets)