#pragma once

// This is a custom type called Vector3d
struct Vector3d {
    double x;
    double y;
    double z;
};

void printVector(const Vector3d &vec);

/*--- Declare and Define functions that perform the following operations on Vector3d ---*/

// return the sum of two input vectors

// multiply the input vector by a scalar value

// return the elementwise multiplication of two vectors

// compute the norm/length of an input vector

// return a normalized (norm/length = 1.0) copy of the input vector

// modify the input vector by setting it to a constant input value

// return the dot product of two input vectors

// return the minimum and maximum elements of the input vector

// check whether all the elements of the input vector are zeros
