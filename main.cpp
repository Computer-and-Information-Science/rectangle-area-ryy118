#include <iostream>
using namespace std;

int main() {
  const double length = 7.2;
  const double width = 1.3;
  double end1;

  double area;
  double perimeter;

//area () 
area = length * width;
cout << "length*width = " << area;

//perimeter ()
perimeter = 2 * (length + width);
cout << "2*(length+width) = " << perimeter; 

//solving ()
cout << "Rectangle Properties: " << endl;
cout << "Length = " << length << endl;
cout << "Width = " << width << endl; 
cout << "Area = " << area << endl;
cout << "Perimeter = " << perimeter << endl;
}


