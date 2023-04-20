#include "Dog.h"
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  // open the dogs.txt file
  ifstream inFile;
  inFile.open("dogs.txt");

  // checks for errors
  if (inFile.fail()) {
    cout << "Error opening input file";
    exit(1); // exits program
  }

  string name, breed;
  int age;
  float weight, height;
  vector<Dog> dogsList;

  // process all input from input file, line by line
  while (!inFile.eof()) {
    // read a line from the file
    inFile >> name >> age >> breed >> weight >> height;

    // TO DO: create a Dog object using name, age, breed, and weight
    // and insert it into dogsList
    Dog Rover(name, breed, weight, age);
    string name = "Rover";
    int age = 5;
    string breed = "Doodle";
    float weight = 21;
    float height = 12.00;
    dogsList.push_back(Rover);
  //   cout << Rover << endl;
  }

  cout << "\n=========== DOGS RECORDS ===========\n\n";
  // TO DO: display the dogs descriptions by weight category

  cout << "LIGHTWEIGHT" << endl;
  for (Dog dogs : dogsList) {
    if (dogs.weight() <= 27) {
      cout << dogs;
    }
  }
  cout << endl << endl;

  cout << "MEDIUM WEIGHT" << endl;
  for (Dog dogs : dogsList) {
    if (dogs.weight() > 27 && dogs.weight() <= 45) {
      cout << dogs;
    }
  }
  cout << endl << endl;
  cout << "HEAVY WEIGHT" << endl;
  for (Dog dogs : dogsList) {
    if (dogs.weight() > 45) {
   cout << dogs;
    }
  }

  cout << "\n=========== LET’S MAKE SOME NOISE ===========\n\n";
  // TO DO: Make some noise (5 random dogs bark and 5 random dogs growl)
  srand(time(NULL));
  Dog d(name, breed, weight, age);
  for (int i = 0; i < 5; i++) { 
      cout << dogsList[rand()% dogsList.size()].bark();
  }
  srand(time(NULL));
  for (int i = 0; i < 5; i++){
      cout << dogsList[rand()% dogsList.size()].growl();
  }
}
