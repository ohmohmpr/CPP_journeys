#include <iostream>
#include <cmath>


struct Point {
  double x = 0.0;
  double y = 0.0;
  double z = 0.0;
  double norm() { return std::sqrt(x * x + y * y + z * z); };
  void Print() { std::cout << x << " " << y << " " << z << std::endl; }
};

struct PointWithColor {
  // PointWithColor have a point (type of point)
  // composition over inheritance
  Point coordinates;
  u_int8_t color = 255;
  void Print() {
    coordinates.Print();
    std::cout << color << std::endl; }
};

Point shiftPoint(const Point &p) {
  Point copy = p;
  copy.Print();
  copy.z += 3.0;
  copy.Print();
  return copy;
}

int main() {
  PointWithColor p;

  shiftPoint(p.coordinates);
  return 0; }


// const cast - you cannot modify. except contatnate
// static cast - compile time cast
// dynamics -> sometimes give us a null pointer. -> segmentation fault.
// C-style cast -> randomly try casting you do not what you get.
// reinterpret_cast
// sequence of bits -> 32 bits 0 and 1. -> good when you know binary data.