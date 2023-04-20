// This program declares the Square class and uses member functions to find
// the perimeter and area of the square

// KALISA MCKENZIE

#include <iostream>
using namespace std;

// FILL IN THE CODE TO DECLARE A CLASS CALLED Square. TO DO THIS SEE
// THE IMPLEMENTATION SECTION.
class Square {
private:
  float side;

public:
  void setSide(float length);
  float findArea();
  float findPerimeter();
  Square();        // default constructor
  Square(float s); // constructor
  ~Square();       // destructor
};

int main() {
  Square box; // box is defined as an object of the Square class
  float size; // size contains the length of a side of the square
              // FILL IN THE CLIENT CODE THAT WILL ASK THE USER FOR THE LENGTH
              // OF THE
  // SIDE OF THE SQUARE. (This is stored in size)
  cout << "Please enter the length of the side of the square: ";
  cin >> size;

  // FILL IN THE CODE THAT CALLS SetSide.
  box.setSide(size);
  // FILL IN THE CODE THAT WILL RETURN THE AREA FROM A CALL TO A FUNCTION
  // AND PRINT OUT THE AREA TO THE SCREEN.
  cout << "The area of the square is: " << box.findArea() << endl;
   // FILL IN THE CODE THAT WILL RETURN THE PERIMETER FROM A CALL TO A
  // FUNCTION AND PRINT OUT THAT VALUE TO THE SCREEN.
  cout << "The perimeter of the square is: " << box.findPerimeter() << endl;

  Square box1(9); // box 1 object of square class
  cout << "Please enter the length of the side of the square: ";
  cin >> size;

  box1.setSide(9);

  cout << "The area of the square is: " << box1.findArea() << endl;
  cout << "The perimeter of the square is: " << box1.findPerimeter() << endl;

  return 0;
}
Square::Square() { side = 1; } // default constructor

Square::Square(float s) { side = s; } // constructor

Square::~Square() {} // destructor
// _______________________________________________________
//
// Implementation section	Member function implementation

//**************************************************
//  setSide
//
//  task:	 This procedure takes the length of a side and
//	         places it in the appropriate member data
//  data in: length of a side
//***************************************************

void Square::setSide(float length) { side = length; }

//**************************************************
//	findArea
//
//  task:	       This finds the area of a square
//  data in:       none (uses value of data member side)
//  data returned: area of square
//***************************************************

float Square::findArea() { return side * side; }

//**************************************************
//	findPerimeter
//
//  task:	       This finds the perimeter of a square
//  data in:       none (uses value of data member side)
//  data returned: perimeter of square
//***************************************************

float Square::findPerimeter() { return 4 * side; }
