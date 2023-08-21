#include <iostream>
using namespace std;

// __________________________________________________________________
//
// This program declares a class for a circle that will have
// member functions that set the center, find the area, find
// the circumference and display these attributes.
// The program as written does not allow the user to input data, but
// rather has the radii and center coordinates of the circles
// (spheres in the program) initialized at definition or set by a function.

// class declaration section	(header file)

// KALISA MCKENZIE

class Circles {
public:
  double findArea();
  double findCircumference();
  void printCircleStats(); // This outputs the radius and center of the circle.
   Circles(float rad, int x, int y); // Constructor so that the user can input radius and center
  Circles(float r); // Constructor
  Circles();        // Default constructor
private:
  float radius;
  int center_x = 0;
  int center_y = 0;
};

const double PI = 3.14;

// Client section

int main() {

  Circles sphere1(2); // object for sphere 1
  Circles sphere2;    // object for sphere 2

  sphere1.printCircleStats();
  cout << "The area of the circle is " << sphere1.findArea() << endl;
  cout << "The circumference of the circle is " << sphere1.findCircumference()
       << "\n"
       << endl;

  
  sphere2.printCircleStats();
  cout << "The area of the circle is " << sphere2.findArea() << endl;
  cout << "The circumference of the circle is " << sphere2.findCircumference() << "\n"
       << endl;
  
  return 0;
}

// __________________________________________________________________
//
// Implementation section	Member function implementation

Circles::Circles() { radius = 1; }

// Fill in the code to implement the non-default constructor
Circles::Circles(float r) { radius = r; }

//Constructor so that the user can input radius
Circles::Circles(float rad, int x, int y) {
  radius = rad;
  center_x = x;
  center_y = y;
}

// Fill in the code to implement the findArea member function
double Circles::findArea() { return PI * (radius * radius); }

// Fill in the code to implement the findCircumference member function
double Circles::findCircumference() { return (2 * PI) * radius; }

void Circles::printCircleStats()
// This procedure prints out the radius and center coordinates of the circle
// object that calls it.
{
  cout << "The radius of the circle is " << radius << endl;
  cout << "The center of the circle is (" << center_x << "," << center_y << ")"
       << endl;
}
