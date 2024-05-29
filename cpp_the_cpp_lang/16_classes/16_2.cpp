#include "iostream"

class X {
private:
  int m;

public:
  X(int i = 0) : m{i} {} // a constructor - not understand

  int mf(int i) {
    int old = m;
    m = i;
    return old;         // nothing special
  }
};

X var{7}; // initialized

int user(X var, X *ptr) {
  int x = var.mf(7); // access using . (dot) denn members
  int y = ptr->mf(9); // access using -> (arrow) because this is a pointer.
  // INTERESTING HERE
  std::cout << x << std::endl;
  std::cout << y << std::endl;
  // int z = var.m; // error private member
  return 0;
};

int main() {
  user(var, &var);
}