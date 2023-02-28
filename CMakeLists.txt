cmake_minimum_required(VERSION 3.0.0)
project(CMakeTest VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(CMakeTest main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(CMAKE_PREFIX_PATH "C:/Apps/qt5.9.2/5.9.2/mingw53_32") # Qt Kit Dir
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(Qt5 COMPONENTS Widgets REQUIRED) # Qt COMPONENTS
include(CPack)
#include("E:\ThirdPart\QT\include")
