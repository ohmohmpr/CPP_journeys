#include <iostream>

struct HugeObject {
  inline void print() const { std::cout << "caiociao" << std::endl; }
  // const here menaing not changing any value of object.
  // for optimization
  // [[nodiscard]] ignore return value
  static int count;
  // next you can increase the int and the value is still there.
  // one attribute for all objects.
  // static methos = function exists before it runs
  // AgentLLBla(); 

  double kakka;
  int francol;
  std::string ciaociao;
};

int main() {
  HugeObject object{4.5, 1, "ciao"};
  return 0;
}