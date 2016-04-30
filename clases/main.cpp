// classes example
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values(int x, int y) {
      width = x;
      height = y;
    }
    int area() {return width*height;}
    
};

int main () {
  Rectangle rect;
  rect.set_values (3,4);

  Rectangle rect2;
  rect2.set_values (4,5);
  cout << "area: " << rect.area() << endl;
  cout << "area 2: " << rect2.area() << endl;
  return 0;
}