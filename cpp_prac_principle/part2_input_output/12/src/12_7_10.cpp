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

  Text t{Point{150, 150}, "Hello, graphical world!"};
  // very small
  // t.set_font(Font::times_bold);
  t.set_font_size(20);
  win.attach(t);

  Circle c{Point{100, 200}, 50};
  Ellipse e{Point{100, 200}, 75, 25};
  e.set_color(Color::dark_red);
  Mark m {Point{100,200}, 'x'};

  ostringstream oss;
  oss << "screen size:" << x_max() << "*" << y_max()
      << "; window_size:" << win.x_max() << "*" << win.y_max();
  Text sizes{Point{100, 20}, oss.str()};
  sizes.set_font_size(20);

  Image cal{Point{225, 225}, "snow_cpp.gif"};
  cal.set_mask(Point{40, 40}, 200, 150);
  
  win.attach(c);
  win.attach(m);
  win.attach(e);

  win.attach(sizes);
  win.attach(cal);
  
  win.set_label("Canvas #12");
  win.wait_for_button();
}

