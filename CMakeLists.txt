cmake_minimum_required(VERSION 4.2.0)

project(HwProject)


set(CMAKE_CXX_STANDARD 17)


add_executable(App)



target_sources(App PRIVATE src/Main.cpp)
    