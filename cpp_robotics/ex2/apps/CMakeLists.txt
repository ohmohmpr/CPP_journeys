add_executable(main main.cpp)
# this always search for main function -> binary generate with main function inside.
target_link_libraries(main PRIVATE my_vector)
target_compile_features(my_vector PRIVATE cxx_std_17)