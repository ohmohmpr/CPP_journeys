#include <my_vector.hpp>
#include <iostream>
#include <vector>

int main() {
  Vector3d start_vec;
  Vector3d end_vec;

  end_vec.x = 10.0;

  std::vector<Vector3d> rays = ray_sampling(start_vec, end_vec, 10);

  std::cout << rays[0].x << ' ';
  std::cout << rays[1].x << ' ';
  std::cout << rays[2].x << ' ';

  std::cout << rays[3].x << ' ';
  std::cout << rays[4].x << ' ';
  std::cout << rays[5].x << ' ';

  std::cout << rays[6].x << ' ';
  std::cout << rays[7].x << ' ';
  std::cout << rays[8].x << ' ';
  
  std::cout << rays[9].x << ' ';

  return 0;
};