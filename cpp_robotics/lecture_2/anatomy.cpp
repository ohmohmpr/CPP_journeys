#include <iostream>


// [[nodiscard("you are stupid")]] double sum(
//     double param, double param2) {
//   return param + param2;
// }

// autoticallly figure out the return type of the function
// auto == static word -> don't use if possible -> you have your onw type is
// fine. something complex type for readability
// However, can not be used in parameter.
// auto& sturctor binary
// const double& --> cannot be modifed not sure if it change or not

// static variable -> gonna be reserverd everytime it called; break local scope
// 64 bit use pass by refernce
// overload same name but different type of parameters;

auto sum(
    double param, double param2) {
  return param + param2;
}


int main() {
  double c = sum(1.0, 2.0);
  const auto& [a1, a2, a3, a4] = 
  std::cout << "Ciao people" << std::endl;
}