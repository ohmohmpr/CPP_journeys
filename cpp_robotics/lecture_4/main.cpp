#include <iostream>
#include <memory>
#include <stdexcept>

// struct Thing {
//   Thing(const std::string &name) {
//     std::cout << name << std::endl;
//   }
//   double a = 1.0;
//   int b = 32;
//   unsigned long long int c = 171277123;
// };

struct Robot {
  std::unique_ptr<Actuators> act;
  std::unique_ptr<SensorRig> sens;
};
// Thing *doSomething() {
//   Thing *garbage = new Thing();
//   std::cout << "do not optimize" << std::endl;
//   garbage->a = 32.f; // -> ??
//   return garbage;
// }

int main() {
  Thing *p = new Thing("jack");
  std::unique_ptr<Thing> unico = std::make_unique<Thing>("jack");
  std::shared_ptr<Thing> comune = std::make_shared<Thing>("jack");

  return 0;
}




// heap -> very extensive
// https://stackoverflow.com/questions/2264969/why-is-memory-allocation-on-heap-much-slower-than-on-stack

// pointer -> address in memory
// double b = 10;
// double *pointer = new double;
// double *pointer = &b;

// segmentation fault and core dumped
// https://stackoverflow.com/questions/2346806/what-is-a-segmentation-fault

// How to ask for memory?
// memory leak

// https://en.cppreference.com/book/intro/smart_pointers

// take smart point and std::move.


  // Thing *p = new Thing;
  // std::unique_ptr<Thing> unico = std::make_unique<Thing>(); // nullptr
  // there two are the same;



// share pointer ->>>>>>>>>>>>>>>>>>>>>>

// struct Thing {
//   Thing(const std::string &name) {
//     std::cout << name << std::endl;
//   }
//   double a = 1.0;
//   int b = 32;
//   unsigned long long int c = 171277123;
// };

// // Thing *doSomething() {
// //   Thing *garbage = new Thing();
// //   std::cout << "do not optimize" << std::endl;
// //   garbage->a = 32.f; // -> ??
// //   return garbage;
// // }

// int main() {
//   Thing *p = new Thing("jack");
//   std::unique_ptr<Thing> unico = std::make_unique<Thing>("jack");
//   std::shared_ptr<Thing> comune = std::make_shared<Thing>("jack");

//   return 0;
// }


// shared_point -> send data
// allocator
// https://en.cppreference.com/w/cpp/memory/shared_ptr#:~:text=A%20shared_ptr%20can%20share%20ownership,dereference%20and%20the%20comparison%20operators.
