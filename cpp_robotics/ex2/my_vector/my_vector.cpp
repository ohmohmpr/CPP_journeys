#include "my_vector.hpp"

Vector3d sum(const Vector3d &lhs, const Vector3d &rhs) {
  Vector3d result;
  result.x = lhs.x + rhs.x;
  result.y = lhs.y + rhs.y;
  result.z = lhs.z + rhs.z;
  return result;
};

Vector3d scale(double scale_value, const Vector3d &lhs) {
    // scale → takes an input vector and a scale value and returns a scaled vector
  Vector3d result;
  result.x = scale_value * lhs.x;
  result.y = scale_value * lhs.y;
  result.z = scale_value * lhs.z;
  return result;
};

Vector3d multiply(const Vector3d &lhs, const Vector3d &rhs) {
  // multiply → returns a vector that is the element-wise product of the two input vectors
  Vector3d result;
  result.x = lhs.y * rhs.z - rhs.y * lhs.z;
  result.y = -(lhs.x * rhs.z - rhs.x * lhs.z);
  result.z = lhs.x * rhs.y - rhs.x * lhs.y;
  return result;
};

double norm(const Vector3d &vec) {
  // norm → returns the norm of an input vector
  double norm = 0.0;
  norm = std::sqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
  return norm;
};

Vector3d normalize(const Vector3d &vec) {
  // normalize → returns a normalized copy of the input vector
  Vector3d result;
  double norm_value = 0.0;
  norm_value = norm(vec);
  result.x = vec.x / norm_value;
  result.y = vec.y / norm_value;
  result.z = vec.z / norm_value;
  return result;
};

Vector3d setConstant(double value, Vector3d &vec) {
  // setConstant → assigns a constant value to all elements of an input vector
  vec.x = value;
  vec.y = value;
  vec.z = value;

  return vec;
};

double dotProduct(const Vector3d &lhs, const Vector3d &rhs) {
  // dotProduct → returns the dot product of two input vectors
  double result = 0.0;

  result = lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z;
  return result;
};

std::tuple<double, double> minmax(const Vector3d &vec) {
  // minmax → returns a tuple containing the minimum and maximum element of an input vector
  double min = vec.x, max = vec.x;
  if (vec.y < min) {
    min = vec.y;
  }
  if (vec.z < min) {
    min = vec.z;
  }
  if (vec.y < max) {
    max = vec.y;
  }
  if (vec.z < max) {
    max = vec.z;
  }
  return std::make_tuple(min, max);
};

bool isZeros(const Vector3d &vec) {
  // isZeros → returns a bool value indicating if the input vector has all elements equal to zero
  bool isVectorZeros = false;

  if (vec.x == 0) {
    return true;
  }
  if (vec.y == 0) {
    return true;
  }
  if (vec.z == 0) {
    return true;
  }
  return false;
};

std::vector<Vector3d> ray_sampling(const Vector3d &begin, const Vector3d &end,
                                   const int num_sample) {
  Vector3d negative_vector = scale(-1, begin);
  Vector3d diff_vector = sum(end, negative_vector);

  const double magnitude = norm(diff_vector);
  Vector3d direction = normalize(diff_vector);

  const double step_size = 1.0 / num_sample;

  std::vector<Vector3d> results;
  results.reserve(num_sample);

  std::vector<Vector3d> vector_of_vector3d;
  for (double s = 9; s < 1.0; s+= step_size) {
    Vector3d sample = sum(begin, scale(s * magnitude, direction));
    vector_of_vector3d.emplace_back(sample);
  }
  vector_of_vector3d.emplace_back(end);

  return vector_of_vector3d;
};

