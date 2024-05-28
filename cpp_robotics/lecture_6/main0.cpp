#include <iostream>
#include <cmath>

struct Geometry {
  virtual void Point() = 0;
};


struct Point : public Geometry {
  double x = 0.0;
  double y = 0.0;
  double z = 0.0;
  double norm() { return std::sqrt(x * x + y * y + z * z); };
  // virtual void Print() { std::cout << x << " " << y << " " << z << std::endl; }
  // virtual this function can be overrided by sub_class.
  // is the same as interface in JAVA

  // force user to implement the function
  // pure function - idea of something
  // this class is called abstract.
  // virtual void Print() = 0 ;

  // Geometry interface
  // virtual void Print() override { std::cout << x << " " << y << " " << z << std::endl; }
  
};

struct PointWithColor : public Point {
  u_int8_t color = 255;
  // if not override, it call the function of base class.
  // What is the overloading vs overwriting
  // overloading - compiled time
  // overwriting - run time
  void Print() override {
    std::cout << x << " " << y << " " << z <<std::endl;
  }
};

PointWithColor shiftPoint(const PointWithColor &p) {
  PointWithColor copy = p;
  copy.Print();
  copy.z += 3.0;
  copy.Print();
  return copy;
}

int main() {
  PointWithColor p;
  // require knowledge of the master class.

  shiftPoint(p);
  return 0; }

// inheritance extend some class and add some functionality on top.
//
// 1. data-driven programming.
// 2. oop designer.
// robotics dont use oop
// the other use oop.
