# this get copy into in parent cmakelists
add_library(my_vector STATIC my_vector.cpp)
# my_vector = name of library
# np linkage but need to provide include file
# PUBLIC, people need to know where the header is.
target_include_directories(my_vector PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
# which version you want to run.
target_compile_features(my_vector PRIVATE cxx_std_17)
# for our machine, it is just binary, so it fine if their version are different.
# cmake - meta build  -> generate build system cmake -Bbuild .
# cmake --build build -> build
