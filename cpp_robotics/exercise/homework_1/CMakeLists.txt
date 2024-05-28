cmake_minimum_required(VERSION 3.16)

project(link_my_library)

# Locate Open3D Library dependency
find_package(Open3D REQUIRED HINTS ${PROJECT_SOURCE_DIR}/open3d/lib/cmake)

# Your Build System Code starts here
# ${CMAKE_CURRENT_SOURCE_DIR} -> where this cmakefile is
# ${PROJECT_SOURCE_DIR} -> current directory 
add_library(my_viewer SHARED ${CMAKE_CURRENT_SOURCE_DIR}/my_viewer/my_viewer.cpp)
target_include_directories(my_viewer PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/my_viewer)
target_link_libraries(my_viewer PUBLIC Open3D::Open3D)

add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/app/main.cpp)
target_link_libraries(main PRIVATE my_viewer)
target_include_directories(main PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
