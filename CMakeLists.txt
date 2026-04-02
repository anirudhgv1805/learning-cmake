cmake_minimum_required(VERSION 4.2.0)

project(HwProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(App src/Main.cpp)

add_subdirectory(libs/MyLibrary)
target_link_libraries(App PRIVATE MyLibrary)