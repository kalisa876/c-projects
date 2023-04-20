#include "Dog.h"
#include <iostream>

// Constructor
Dog::Dog(std::string n, std::string b, float w, int a) {
  dogName = n;
  dogBreed = b;
  dogWeight = w;
  dogAge = a;
}

// returns the name of the dog
std::string Dog::name() { return dogName; }

// returns the breed of the dog
std::string Dog::breed() { return dogBreed; }

// returns the weight of the dog
float Dog::weight() { return dogWeight; }

// returns the age of the dog
int Dog::age() { return dogAge; }

// displays a message that simulates the dog barking
std::string Dog::bark() { return dogName + ": woof! woof!\n"; }

// displays a message that simulates the dog growling
std::string Dog::growl() { return dogName + ": grr... grr...\n"; }

// returns the top speed of the dog
double Dog::top_speed() {
  float speed;
  if (dogWeight < 40)
    speed = 15.5;
  else if (dogWeight < 90)
    speed = 21.0;
  else
    speed = 17.2;
  return speed;
}

// returns the dog's age in human years
int Dog::ageInHumanYears() { return dogAge * 7; }

// returns a description of the dog
std::string Dog::description() {
  return dogName + " is a " + std::to_string(dogAge) + " year old " + dogBreed +
         " dog that weights " + std::to_string(dogWeight) + " pounds and is " +
         std::to_string(ageInHumanYears()) + " years old in human years. " +
         dogName + "'s top speed is " + std::to_string(top_speed()) +
         " miles per hour.\n";
}

// returns the descriotion of the dog
std::ostream &operator<<(std::ostream &outs, Dog &dog) {
  outs << dog.dogName << " is a " << dog.dogAge << " year old " << dog.dogBreed << 
  " dog that weighs " << dog.dogWeight << " pounds and is " << std::to_string(dog.ageInHumanYears()) << 
  " years old in human years " << dog.dogName << "'s top speed is " << std::to_string(dog.top_speed())<< 
  " miles per hour." << std::endl;
  return outs;
}