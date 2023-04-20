#include <string>
#include <iostream>

class Dog {
public:

  // Constructor
  Dog(std::string name, std::string breed, float weight, int age);

  // returns the name of the dog
  std::string name();

  // returns the breed of the dog
  std::string breed();

  // returns the weight of the dog
  float weight();

  // returns the age of the dog
  int age();

  //returns a message that simulates the dog barking
  std::string bark();

  //returns a message that simulates the dog growling
  std::string growl();

  //returns the top speed of the dog
   double top_speed();

  //returns the dog's age in human years
   int ageInHumanYears();

  //returns a description of the dog
  std::string description();

  //overloaded operator to return dog records
friend std::ostream& operator<< (std::ostream& outs, Dog &dog);

private:
  // Member variables
  std::string dogName;
  std::string dogBreed;
  float dogWeight;
  int dogAge;
};
