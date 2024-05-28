// #include <iostream>
// #include <cmath>

// // class Point {
// // private:
// //   double x = 0.0;
// //   double y = 0.0;
// //   double z = 0.0;
// // };

// struct Point {
//   // Point(); // the first funtion that get called.
//   // ALL or nothing
//   // 3 constructor defined by a compiler;
//   // 1. Point ();
//   // 2. Point(const Point& other): x(other.x), y(other.y), z(other.z) {}; copy
//   // constructor Point p Point px(p)
//   // copy by value or reference
//   // copy assignment operator <-> copy operator
//   // 3. Move constructor

//   Point(const double x_, const double y_, const double z_)
//       : x(x_), y(y_), z(z_) {}

//   Point(Point &&other) {
//     x = std::move(other.x);
//     y = std::move(other.y);
//     z = std::move(other.z);
//   };
//   // https://www.geeksforgeeks.org/move-constructors-in-c-with-examples/
//   // is done with r value
//   // move is more efficiency

//   // Point &operator=(const Point &other) = default;
//   Point &operator=(const Point &other) {
//     x = other.x;
//     y = other.y;
//     z = other.z;
//     return *this;
//   };
//   // return refernce to itself


//   Point &operator=(Point &&other) = default;
//   // tell compiler to create default things.
//   // Point &operator=(Point &&other) = delete;
//   // common impletation is to delete copy constructor for huge object
//   // https://stackoverflow.com/questions/13654927/why-explicitly-delete-the-constructor-instead-of-making-it-private

  
  
//   ~Point() { std::cout << "Point die" << std::endl; };
  
//   double norm() {return std::sqrt(x*x+y*y+z*z);};

//   double x = 0.0; // lhs -< in memory, rhs -> not exist R value
//   // https://stackoverflow.com/questions/9406121/what-exactly-is-an-r-value-in-c

//   double y = 0.0;
//   double z = 0.0;

// };

// int main() {
//   Point p(0, 0, 0);
//   Point px(0.0, 0.0, 0.0);
//   std::cout << p.y << std::endl;
//   return 0;
// }