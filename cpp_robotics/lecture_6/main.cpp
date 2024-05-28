#include "singleton.hpp"


// you want to have a one master.
// ros master
int main() {
  const auto &s = Singleton::GetInstance();
  // s.int
  
}

// today lecture and tmr is important for the next week's exercise.