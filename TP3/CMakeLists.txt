cmake_minimum_required(VERSION 3.7)
project(TP3Qt)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets CONFIG REQUIRED)
add_executable(TP3Qt main.cpp IHM1.cpp IHM1.h IHM2.cpp IHM2.h)



target_link_libraries(TP3Qt Qt5::Widgets)




