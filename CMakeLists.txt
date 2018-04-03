cmake_minimum_required (VERSION 3.1)
project (VIO CXX C)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_BUILD_TYPE Release)

find_package(OpenCV 3.3.1 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

include_directories("./")

add_executable(mesh_visualizer ./mesh_visualizer.cpp)
target_link_libraries(mesh_visualizer ${OpenCV_LIBS})
