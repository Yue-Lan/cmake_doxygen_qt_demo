cmake_minimum_required(VERSION 3.8)

project(demo)

find_package(Qt5 ${QT_MINIMUM_VERSION} REQUIRED COMPONENTS Core Widgets)

set(CMAKE_AUTOMOC TRUE)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_subdirectory(src)

