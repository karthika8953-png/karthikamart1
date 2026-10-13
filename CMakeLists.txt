
cmake_minimum_required(VERSION 3.20)

project(KarthikaMart LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(KarthikaMart
    src/main.cpp
    src/filter/AuthFilter.cpp
)

target_include_directories(KarthikaMart PRIVATE
    src/filter
)
