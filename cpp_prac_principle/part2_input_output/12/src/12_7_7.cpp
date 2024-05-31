#include "../Simple_window.h"
#include "../Graph.h"

int main() {
  using namespace Graph_lib;

  Point tl{100, 100};
  Simple_window win{tl, 600, 400, "Canvas"};

  Axis xa{Axis::x, Point{20, 300}, 280, 10, "x axis"};
  win.attach(xa);

  Axis ya{Axis::y, Point{20, 300}, 280, 10, "y axis"};
  ya.set_color(Color::cyan);
  ya.label.set_label("dark_red");
  win.attach(ya);
  // cannot set the colors

  Function sine{sin, 0, 100, Point{20, 150}, 1000, 50, 50};
  sine.set_color(Color::blue);
  win.attach(sine);

  Polygon poly;
  poly.add(Point{300, 200});
  poly.add(Point{350, 100});
  poly.add(Point{400,200});

  poly.set_color(Color::red);
  poly.set_style(Line_style(Line_style::dash, 4));

  Rectangle r{Point{200, 200}, 100, 50};
  // this things garuntee 4 points
  r.set_fill_color(Color::yellow);

  Closed_polyline poly_rect;
  poly_rect.add(Point{100, 50});
  poly_rect.add(Point{200, 50});
  poly_rect.add(Point{200, 100});
  poly_rect.add(Point{100, 100});
  poly_rect.add(Point{50, 75});
  // this things could have 4 or 5 points.
  poly_rect.set_style(Line_style(Line_style::dash, 2));
  // poly_rect.fill_color(Color::green);

  win.attach(poly);
  win.attach(r);
  win.attach(poly_rect);

  win.set_label("Canvas #7");
  win.wait_for_button();
}

