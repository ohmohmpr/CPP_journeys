#pragma once
// copy file one time
#include <math.h>
#include <tuple>
#include <vector>

struct Vector3d {
  double x = 0.0;
  double y = 0.0;
  double z = 0.0;
};

Vector3d sum(const Vector3d &lhs, const Vector3d &rhs);

// for compiler it is differnet. 
inline Vector3d operator+(const Vector3d &lhs, const Vector3d &rhs) {
  return sum(lhs, rhs);
};

Vector3d scale(double scale_value, const Vector3d &vec);
Vector3d multiply(const Vector3d &lhs, const Vector3d &rhs);
double norm(const Vector3d &vec);
Vector3d normalize(const Vector3d &vec);
Vector3d setConstant(double value, Vector3d &vec);
double dotProduct(const Vector3d &lhs, const Vector3d &rhs);
std::tuple<double, double> minmax(const Vector3d &vec);
bool isZeros(const Vector3d &vec);

std::vector<Vector3d> ray_sampling(const Vector3d &begin, const Vector3d &end,
                                   const int num_sample);

// void random_stuff() {
//   std::vector<Vector3d> vector_of_vector3d;
//   vector_of_vector3d.emplace_back(Vector3d());
//   vector_of_vector3d.emplace_back(Vector3d());
//   vector_of_vector3d.emplace_back(Vector3d());
//   vector_of_vector3d.emplace_back(Vector3d());
//   vector_of_vector3d.emplace_back(Vector3d());
//   vector_of_vector3d.emplace_back(Vector3d());
//   vector_of_vector3d.emplace_back(Vector3d());

//   const auto &
// }