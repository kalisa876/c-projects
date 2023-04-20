#include <iostream>
using namespace std;

class NumDays {
private:
  double hours;
  double days;

public:
  NumDays() {
    hours = 0;
    days = 0;
  }
  NumDays(double hr) {
    hours = hr;
    days = hr / 8;
  }
  void setHours(double hr) {
    hours = hr;
    days = hr / 8;
  }
  double getHours() const { return hours; }
  void setDays(double d1) {
    days = d1;
    hours = d1 / 8;
  }
  double getDays() const { return days; }
  NumDays operator+(NumDays &x) {
    NumDays op;
    op.setHours(this->getHours() + x.getHours());
    return op;
  }
  NumDays operator-(NumDays &y) {
    NumDays op;
    op.setHours(this->getHours() - y.getHours());
    return op;
  }
  NumDays operator++() {
    this->setHours(this->getHours() + 1);
    return *this;
  }
  const NumDays operator++(int) {
    NumDays op = *this;
    this->setHours(this->getHours() + 1);
    return op;
  }
  NumDays &operator--() {
    this->setHours(this->getHours() - 1);
    return *this;
  }

  const NumDays operator--(int) {
    NumDays result = *this;
    this->setHours(this->getHours() - 1);
    return result;
  }
};

class TimeOff {
private:
  string employeeName;
  int employeeID;

  NumDays maxSickDays, sickTaken, maxVacation, vacTaken, maxUnpaid, unpaidTaken;

public:
  TimeOff(string, int, double, double, double, double, double, double);

  void setEmployeeName(string name) { employeeName = name; }

  void setEmployeeID(int ID) { employeeID = ID; }

  void setMaxSick(double hrs) { maxSickDays.setHours(hrs); }

  void setSickTaken(double hrs) { sickTaken.setHours(hrs); }

  void setMaxVacation(double hrs) { maxVacation.setHours(hrs); }

  void setVacTaken(double hrs) { vacTaken.setHours(hrs); }

  void setMaxUnpaid(double hrs) { maxUnpaid.setHours(hrs); }

  void setUnpaidTaken(double hrs) { unpaidTaken.setHours(hrs); }

  void print();

  string getEmployeeName() const { return employeeName; }

  int getEmployeeID() const { return employeeID; }

  double getMaxSick() const { return maxSickDays.getDays(); }

  double getSickTaken() const { return sickTaken.getDays(); }

  double getMaxVacation() const { return maxVacation.getDays(); }

  double getVacationTaken() const { return vacTaken.getDays(); }

  double getMaxUnpaid() const { return maxUnpaid.getDays(); }

  double getUnpaidTaken() const { return unpaidTaken.getDays(); }
};

const int MAX_PAID = 240;

TimeOff::TimeOff(string name, int ID, double maxSick, double sickT,
                 double maxVac, double vacT, double maxUnp, double unpT) {
  employeeName = name;
  employeeID = ID;

  setMaxSick(maxSick);
  setSickTaken(sickT);

  maxVac <= MAX_PAID ? setMaxVacation(maxVac) : setMaxVacation(MAX_PAID);

  setVacTaken(vacT);
  setMaxUnpaid(maxUnp);
  setUnpaidTaken(unpT);
}

/* **********************************************************
            TimeOff::print()
    This function outputs a summary about an employee's days
    off.
   ********************************************************** */

 void TimeOff::print() {

 cout <<  "Employee ID: " << getEmployeeID() << "\n"
<< "Employee Name: " <<
 getEmployeeName() << "\n\n";

 cout << "Max. Sick Days: "  << getMaxSick() << "\n"
 << right << "Sick Days: " << getSickTaken() << "\n\n";
 cout << left << "Max. Vacation Days: " << getMaxVacation() << "\n"
 << "Vacation Days: " << getVacationTaken() << "\n\n";
  cout << "Max. Unpaid Days: " << getMaxUnpaid() << "\n"
 << "Unpaid Days: " << getUnpaidTaken() << "\n\n\n";
}

int main() {
  TimeOff offDays[2] = {
      TimeOff("Precious Ramotswe", 1, 200, 30, 255, 86, 40, 10),
      TimeOff("Grace Makutsi", 2, 164, 10, 20, 50, 40, 10)};

  cout << "No. 1 Ladies' Detective Agency - Leave Tracker\n\n";
  for (auto outputDays : offDays) {
    outputDays.print();
  }

  cin.get();
  cin.ignore();
  return 0;
}