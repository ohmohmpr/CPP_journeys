#include <iostream>
#include <algorithm>
#include <vector>

class Vector {
  int sz;
  double *elem;
  int space;

public:
  // default constructor
  explicit Vector(int s)
    :sz{s}, elem{new double[sz]} {
    for (int i = 0; i<sz; ++i) elem[i]=0.0;
  }

  // Constructor from one or more arguments.
  Vector(std::initializer_list<double> lst)
    : sz{static_cast<int>(lst.size())}, elem{new double[sz]} {
      std::copy(lst.begin(), lst.end(), elem);
    }

  Vector(const Vector &); // copy initialization
  Vector& operator=(const Vector &);
  Vector(Vector &&a); // move constructor
  Vector& operator=(Vector &&a); // move assignment.
  double& operator[](int n) { return elem[n]; };
  double  operator[](int n) const { return elem[n];}; 
  
  ~Vector() {
    delete[] elem;
  }
  int size() const { return sz; }

  double get(int n) const { return elem[n]; }
  void set(int n, double v) { elem[n] = v; }

  void push_back(double d);
  void reserve(int newalloc);
};

Vector::Vector(const Vector &arg)
    : sz{arg.sz}, elem{new double[arg.sz]} {
  std::copy(arg.elem,arg.elem+arg.sz,elem);
}

Vector& Vector::operator=(const Vector &a) {
  double *p = new double(a.sz);
  std::copy(a.elem,a.elem+a.sz,p);
  delete[] elem;
  elem = p;
  sz = a.sz;
  return *this;
}

Vector::Vector(Vector &&a) : sz{a.sz}, elem(a.elem) {
  // move constructor
  a.sz = 0;
  a.elem = nullptr;
}

Vector &Vector::operator=(Vector &&a) {
  // move operator
  delete[] elem;

  elem = a.elem;
  sz = a.sz;
  a.elem = nullptr;
  a.sz = 0;
  
  return *this;
}

void Vector::reserve(int newalloc) {
  if (newalloc<=space) return;
  double* p = new double[newalloc];
  for (int i=0; i<sz; ++i) p[i] = elem[i];
  delete[] elem;
  elem = p;
  space = newalloc;
}

void Vector::push_back(double d) {
    if (space==0)
      reserve(8); 
    else if (sz==space)
      reserve(2*space); 
    elem[sz] = d; 
    ++sz;
}

Vector fill(std::istream &is) {
  // I took push_bacn and reserve from chapter 19
  Vector res{0};

  for (double x; is >> x;) {
    res.push_back(x);
    std::cout << "Read value: " << x << std::endl;  // Debugging output
  }
  return res;
}

// void f(const Vector &cv, Vector& v) {
//   double d = cv[1];
//   // cv[1] = 2.0; // error cause no const
//   double dv = v[1];
//   v[1] = 2.0;
// }

int main() {

  // Vector v2(3);
  // Vector v3{1, 2, 3};
  // v2.set(2, 2);
  // v3 = v2;

  // for (int i = 0; i < v2.size(); i++) {
  //   std::cout << "v2 = " << v2.get(i) << std::endl;
  //   std::cout << "v3 = " << v3.get(i) << std::endl;
  // }

  // 18.3.4 Moving
  // std::cout << "Start:" << std::endl;
  // Vector vec = fill(std::cin);
  // for (int i = 0; i < vec.size(); i++) {
  //   std::cout << "vec = " << vec.get(i) << std::endl;
  // }
  // std::cout << "End." << std::endl;

  // 18.4.1
  // implicit conversion
  // Vector vec = 10;
  // for (int i = 0; i < vec.size(); i++) {
  //   std::cout << "vec = " << vec.get(i) << std::endl;
  // }

  // implicit conversion
  // Vector vec1{};
  // vec1 = 10;
  // for (int i = 0; i < vec1.size(); i++) {
  //   std::cout << "vec1 = " << vec1.get(i) << std::endl;
  // }

  // explicit conversion
  // Vector vec2(10);
  // for (int i = 0; i < vec2.size(); i++) {
  //   std::cout << "vec2 = " << vec2.get(i) << std::endl;
  // }

  // 18.5 Access to vector elements.
  // Vector v(10);
  // return a value
  // double x = v[2];
  // v[3] = 5;
  // 5 = x;

  // return a pointer
  // for (int i = 0; i < v.size(); ++i) {
  //   *v[i]=0;
  // }
  // for (int i = 0; i < v.size(); ++i) {
  //   std::cout << *v[i] << '\n';
  // }

  // return a reference
  // for (int i = 0; i < v.size(); ++i) {
  //   v[i]=0;
  // }
  // for (int i = 0; i < v.size(); ++i) {
  //   std::cout << v[i] << '\n';
  // }

  return 0;
}