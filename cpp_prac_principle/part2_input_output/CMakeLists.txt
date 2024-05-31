
# cmake_minimum_required(VERSION 3.15)

# project(hello)

# set(FLTK_DIR FLTK_DIR=./fltk-1.3.9/build
#     CACHE FILEPATH "FLTK installation or build directory")

# find_package(FLTK REQUIRED CONFIG)
# include_directories(${CMAKE_CURRENT_SOURCE_DIR}/fltk-1.3.9)

# add_executable(hello WIN32 MACOSX_BUNDLE hello.cpp)
# if (APPLE)
#   target_link_libraries (hello PRIVATE "-framework cocoa")
# endif (APPLE)

# target_include_directories (hello PRIVATE ${FLTK_INCLUDE_DIRS})

# target_link_libraries (hello PRIVATE fltk)