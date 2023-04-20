#include <iostream>
#include "ThinkingCap.h"
using namespace std;

ThinkingCap operator+(const ThinkingCap &g, ThinkingCap &r){
  ThinkingCap choice;
  choice.slots("\n"+g.green_string+ " , " + r.green_string , "\n"+g.red_string + " , " + r.red_string);
  return choice;
}
int main() {
  cout << "WELCOME\n";

  ThinkingCap student;
  ThinkingCap fan;
  ThinkingCap optimistic;
  ThinkingCap pessimistic;
  ThinkingCap mantra;
  
  
  optimistic.slots("I will not miss any assignment for this class", "I will get an A+ in this class");
  pessimistic.slots("I will have spotty attendance on this class", "I might fail the class");
  mantra.slots("My motivation will determine my actions", "My actions will determine my grade");
  student.slots("Hello", "Goodbye");
  fan.slots("Go Cougars", "Boo!");

  ThinkingCap studentfan = student + fan;
  ThinkingCap mantragood = mantra + optimistic;
  ThinkingCap mantrabad = mantra + pessimistic;
  
  studentfan.push_green();
  mantragood.push_green();
  mantrabad.push_green();
  studentfan.push_red();
  mantragood.push_red();
  mantrabad.push_red();

  
 
}