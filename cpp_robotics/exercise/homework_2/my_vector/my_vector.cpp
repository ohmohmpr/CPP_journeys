#include "my_vector.hpp"

#include <cmath>
#include <iostream>
#include <tuple>

// This is how to create a variable of struct type Vector3d
Vector3d sample_point{0, 0, 0};

void printVector(const Vector3d &vec) {
    std::cout << vec.x << ", " << vec.y << ", " << vec.z << std::endl;
}