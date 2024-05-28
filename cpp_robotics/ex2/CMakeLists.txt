cmake_minimum_required(VERSION 3.16)
project(my_vector)

add_subdirectory(my_vector)
# move to the folder, search for cmakelists.txt
# we want to separate, everything is organized.
add_subdirectory(apps)

