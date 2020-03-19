cmake_minimum_required(VERSION 3.7)
project(TP2qt)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets CONFIG REQUIRED)

add_executable(TP2qt main.cpp MainWindow.cpp MainWindow.h ButtonsPanel.cpp ButtonsPanel.h LabeledTextField.cpp LabeledTextField.h ConfigurationDialog.cpp ConfigurationDialog.h)

target_link_libraries(TP2qt Qt5::Widgets)