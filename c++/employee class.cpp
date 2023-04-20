#include <iostream>
using namespace std;

class Employee {
private:
  int idNumber;
  string name, department, position;


public:
  Employee(string, int, string, string);
  Employee(string, int);
  Employee();
  void setName(string);
  void setIDnum(int);
  void setDepartment(string);
  void setPosition(string);
  string getName();
  int getIDnum();
  string getDepartment();
  string getPosition();
  float getEmployeeinfo(Employee);
};

int main() {

  Employee employee1("Susan Hanson", 45, "Assistant", "Human resource");
  Employee employee2("John Brown", 65, "Technology", "Engineer");
  Employee employee3("Katy Sam", 23, "Assistant", "Boss");

  cout << "---------------------------------------------------" << endl;
  ;
  cout << " " << employee1.getEmployeeinfo(employee1) << endl;
  cout << "--------------------------------------------------- " << endl;
  cout << " " << employee2.getEmployeeinfo(employee2) << endl;
  cout << "--------------------------------------------------- " << endl;
  cout << " " << employee3.getEmployeeinfo(employee3) << endl;
  cout << "--------------------------------------------------- ";
  return 0;
}

Employee::Employee(string ename, int eidnumber, string edepartment,
                   string eposition) {
  name = ename;
  idNumber = eidnumber;
  department = edepartment;
  position = eposition;
}

Employee::Employee(string emp_name, int emp_id) {
  name = emp_name;
  idNumber = emp_id;
  position = " ";
  department = " ";
}

Employee::Employee() {
  name = " ";
  idNumber = 0;
  department = " ";
  position = " ";
}

void Employee::setName(string employee_name) { name = employee_name; }

void Employee::setIDnum(int employee_id) { idNumber = employee_id; }

void Employee::setDepartment(string employee_department) {
  department = employee_department;
}

void Employee::setPosition(string employee_position) {
  position = employee_position;
}

string Employee::getName() { return name; }

int Employee::getIDnum() { return idNumber; }

string Employee::getDepartment() { return department; }

string Employee::getPosition() { return position; }

float Employee::getEmployeeinfo(Employee obj) {
  cout << "The employee name is: " << obj.name << endl;
  cout << "The employee id number is: " << obj.idNumber << endl;
  cout << "The employee position is: " << obj.position << endl;
  cout << "The employee department is: " << obj.department << endl;

  return -1;
}