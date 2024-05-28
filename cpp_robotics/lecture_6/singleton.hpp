#pragma once
// software design pattern.
// he hates design pattern / Why? your brain not involve at all
// create once over your program lifetime
// once instance.

struct Singleton {
public:
  Singleton(const Singleton &other) = delete;
  Singleton &operator=(const Singleton &other) = delete;

  // static will let compiler do some stuffs.
  // the compilter create this things for us.
  static Singleton &GetInstance() {
    static Singleton instance;
    return instance;
  };

private:
  Singleton() = default;
  static int a;
};