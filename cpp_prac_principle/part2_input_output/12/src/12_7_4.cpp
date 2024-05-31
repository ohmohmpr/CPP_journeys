#include "../Simple_window.h"
#include "../Graph.h"

int main() {
  using namespace Graph_lib;

  Point tl{100, 100};
  Simple_window win{tl, 600, 400, "Canvas"};

  Axis xa{Axis::x, Point{20, 300}, 280, 10, "x axis"};

  Axis ya{Axis::y, Point{20, 300}, 280, 10, "y axis"};
  ya.set_color(Color::cyan);
  ya.label.set_label("dark_red");
  // cannot set the colors

  Function sine{sin, 0, 100, Point{20, 150}, 1000, 50, 50};
  
  win.attach(xa);
  win.attach(ya);
  win.attach(sine);
  win.set_label("Canvas #4");

  win.wait_for_button();
}

