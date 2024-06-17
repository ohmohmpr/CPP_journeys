#include <iostream>
#include <algorithm>
#include <vector>

class Vector {
  int sz;
  double* elem;
  
  public:
    Vector(int s)
      :sz{s}, elem{new double[s]} {
      for (int i = 0; i<s; ++i) elem[i]=0;
    }
    ~Vector() {
      delete[] elem;
    }
    int size() const { return sz; }

    double get(int n) const { return elem[n]; }
    void set(int n, double v) { elem[n] = v;}
};

class Link {
public:
  std::string value;
  Link(const std::string &v, Link *p = nullptr, Link *s = nullptr)
      : value{v}, prev{p}, succ{s} {}

  Link* insert(Link *n);
  Link* add(Link* n);
  Link* erase();
  Link *find(const std::string &s);
  const Link* find(const std::string &s) const;
  const Link* advance(int n) const;

  Link* next() const { return succ; }
  Link* previous() const { return prev; }
      
private:
  Link* prev;
  Link* succ;
};

Link *Link::insert(Link *n) {
  if (n == nullptr) return this;
  // if (this == nullptr) return n;
  n->succ = this;
  if (prev)
    prev->succ = n;
  n->prev = prev;
  prev = n;

  return n;
}

Link* Link::add(Link *n) {
  if (n == nullptr) return this;
  // if (this == nullptr) return n;
  n->prev = this;
  if (succ)
    succ->prev = n;
  n->succ = succ;
  succ = n;

  return n;
}

Link* Link::erase() {
  // if (this == nullptr)
  //   return nullptr;
  if (succ) succ->prev = prev;
  if (prev) prev->succ = succ;

  return succ;
}

Link* Link::find(const std::string &s)  {
  const Link* p = this;
  while (p) {
    if (value == s)
      return this;
    p = p->succ;
  }
  return nullptr;
}

const Link* Link::find(const std::string &s) const {
    //
    for (const Link* p = this; p != nullptr; p = p->succ) {
        if (value == s) return this;
    }
    return nullptr;
}

const Link* Link::advance(int n) const {
  // if (this == nullptr)
  //   return nullptr;
  const Link* p = this;
  if (0<n) {
    while (n--) {
      if (succ == nullptr) return nullptr;
      p = succ;
    }
  } else if (n<0) {
    while (n++) {
      if (prev == nullptr) return nullptr;
      p = prev;
    }
  }
  return p;
}

void print_all(Link *p) {
  std::cout << "{";
  while (p) {
    std::cout << p->value;
    if((p=p->next())) std::cout<<","; // this if is confused
  }
  std::cout<<"}";
}

int main() {

  // Vector v(5);

  // for (int i = 0; i < v.size(); ++i) {
  //   v.set(i, 1.1*i);
  //   std::cout << v.get(i) << std::endl;
  // }

  Link *norse_gods = new Link("Thor");
  norse_gods = norse_gods->insert(new Link("Odin"));
  norse_gods = norse_gods->insert(new Link("Zeus"));
  norse_gods = norse_gods->insert(new Link("Freia"));

  Link *greek_gods = new Link("Hera");
  greek_gods = greek_gods->insert(new Link("Athena"));
  greek_gods = greek_gods->insert(new Link("Mars"));
  greek_gods = greek_gods->insert(new Link("Poseidon"));


  Link *p = greek_gods->find("Mars");
  if (p)
    p->value = "Ares";

  Link *p1 = norse_gods->find("Zeus");
  if (p1) {
    if (p1==norse_gods) norse_gods = p1->next();
    p1->erase();
    greek_gods = greek_gods->insert(p1);
  }

  print_all(norse_gods);
  std::cout << "\n";
  print_all(greek_gods);
  std::cout << "\n";

  
  return 0;
}