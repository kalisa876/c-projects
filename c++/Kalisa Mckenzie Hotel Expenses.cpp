//CS 244 MIDTRM PART 1 

//pseudocode: 
//Datatypes to use: void intro(), void parking, void hotel , void trip_length, void total_average, void trip_times, void trip_Airfare, void Miles_Driven, void reg_fees, void_taxi_fees, void display

// Write a program that calculates and displays the total travel expenses of a business person on a trip. 

// The total number of days spent on the trip 
//• The time of departure on the first day of the trip, and the time of arrival back home on the last day of the trip 

//• The amount of any round-trip airfare 

//• The amount of any car rentals 

//• Miles driven, if a private vehicle was used. Calculate the vehicle expense as $0.27 per mile driven 

//• Parking fees (The company allows up to $6 per day. Anything in excess of this must be paid by the employee.) 

//• Taxi fees, if a taxi was used anytime during the trip (The company allows up to $10 per day, for each day a taxi was used. Anything in excess of this must be paid by the employee.) 

//• Conference or seminar registration fees 

//• Hotel expenses (The company allows up to $90 per night for lodging. Anything in excess of this must be paid by the employee.) 

//• The amount of each meal eaten. On the first day of the trip, breakfast is allowed as an expense if the time of departure is before 7 a.m. Lunch is allowed if the time of departure is before 12 noon. Dinner is allowed on the first day if the time of departure is before 6 p.m. On the last day of the trip, breakfast is allowed if the time of arrival is after 8 a.m. Lunch is allowed if the time of arrival is after 1 p.m. Dinner is allowed on the last day if the time of arrival is after 7 p.m. The program should only ask for the amounts of allowable meals. (The company allows up to $9 for breakfast, $12 for lunch, and $16 for dinner. Anything in excess of this must be paid by the employee.) 

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
//Function prototypes that declare variables types that will be used
void intro();
void parking (int, double&, double&, double&);
void hotel(int, double&, double&, double&);
void trip_length(int&);
void total_average(double, double, double&);
void trip_time(int &, int &, string &, string &);
void trip_airfare(double&);
void miles_driven(double&, double&);
void reg_fees(double&);
void taxi_fees(double&, double&, int);
void display(int, double, double, int, string, int, string, double, double, double, double, double, double, double, double, double);

int main()
{
  //declared variables for number of days thats the trip takes place
  int total_days = 0;

  //declared variables for hotel costs
  double hotel_cost = 0.0,
        hotel_total = 0.0, 
        hotel_reimburse = 0.0;
  
 //declared variables for departure and arrival
  int first_day = 0,
      last_day = 0;
  string section_time1,
         section_time2;
  
//declared varible for trip airfare
  double round_trip_airfare = 0.0;

//declared varibale for car rentals
  double car_rentals = 0.0;

//declared varibale for miles driven 
  double miles_cost = 0.0;

// declared variables for taxi fees
  double cost_of_taxi = 0.0,
        extra_taxi_fees = 0.0;
  
//declared variables for registration fees
  double registration_fees = 0.0;

  //declared variables for parking
  double cost_of_parking = 0.0;
  double excess_parking = 0.0;
  double parking_reimburse = 0.0;

//Functions to be called so that calculations can be made and displayed 
intro();
trip_length(total_days);
trip_time(first_day, last_day, section_time1, section_time2);
trip_airfare(round_trip_airfare);
miles_driven(miles_cost, car_rentals);
parking(total_days, cost_of_parking,extra_taxi_fees,parking_reimburse);
taxi_fees(cost_of_taxi, extra_taxi_fees, total_days);
reg_fees(registration_fees);
hotel(total_days, hotel_cost, hotel_total, hotel_reimburse);
display(total_days, cost_of_taxi, extra_taxi_fees, first_day, section_time1, last_day, section_time2, round_trip_airfare, car_rentals, miles_cost, cost_of_parking, parking_reimburse, hotel_total, hotel_cost, hotel_reimburse, registration_fees);
          
  return 0;
}

void intro()
{
cout<< "\t****************************************************"<<endl;
cout<< "\t******* Mckenzie Co. Travel Expense Report *********"<<endl;
cout<< "\t****************************************************"<<endl;
  cout << endl << endl;
}

void trip_length(int &total_days) // Function used to get the length of trip 
{
  total_days = 0;

  cout<< "How many days is your trip?: ";
  cin >> total_days; 
  
  while (total_days < 0)
  {
    cout << "Please enter a valid trip length: " << endl;
  }
}
void trip_time(int & first_day, int & last_day, string &section_time1, string &section_time2)// Function used to get the arrival and departure times 
{ 
  cout << "Enter the time of your departure on the first day: ";
  cin >> first_day; 

  while (first_day > 12 && first_day < 1)
    {
      cout << "Please enter a valid number of days: ";
    }
  
  cout << "Enter the time of your arrival on the last day: ";
  cin >> last_day;
  
  while (last_day > 12 && last_day < 1)
    {
       cout << "Please enter a valid number of days: ";
    }

  cout << "Please enter whether am or pm in common letters: ";
  cin >> section_time1;

  cout << "Please enter whether am or pm in common letters: ";
  cin >> section_time2;
}

void trip_airfare(double &round_trip_airfare) // Function that calls the price of airfare 
{
  cout << "What is the amount of your airfare?: ";
  cin >> round_trip_airfare;

  while (round_trip_airfare < 0)
    {
      cout << "Please enter a valid airfare: " << endl;
    }
}

void miles_driven(double &miles_cost, double &car_rentals) // Function that gets the total miles driven 
{
  int miles; 
  
  cout << "How many miles were driven?: ";
  cin >> miles ;

  miles_cost = miles * 0.27; // Formula to calculate the miles driven 
  
  while (miles < 0)
    {
      cout << "Please enter a valid amount: ";
    }
  cout << "What is your car rental price?: ";
  cin >> car_rentals;
}

void parking(int total_days, double &cost_of_parking, double &excess_parking, double &parking_reimburse) // Function that gets parking fees 
{ 
  double fees_per_day = 6.00;
  int days_stayed_parked;
  cost_of_parking = 0;
  

  cout << "How many days did you use for paid parking?: ";
  cin >> days_stayed_parked;

  while (days_stayed_parked < 0) 
    {
        cout << "please enter a valid amount: ";
    cin >> days_stayed_parked;
    }
  
  cost_of_parking = fees_per_day * days_stayed_parked;
  
  parking_reimburse = total_days * days_stayed_parked;
  
  excess_parking = cost_of_parking - parking_reimburse;
}

void taxi_fees(double &cost_of_taxi, double &extra_taxi_fees, int total_days)//Function that gets taxi fees 
{ 
  int num_days;
  double taxi_fees_budget;

  cout << "How many days did you use a taxi?";
  cin>> num_days;

  if(num_days > 0)
  {
    //Calculating budget of days taxi was used

  cost_of_taxi = num_days * 10.00;
    
    }
  else if (num_days == 0)
  {
    cout << "Thank You."<<endl;
  }

  
  cout << "How much did you spend on taxi fees?: ";
  cin>> taxi_fees_budget;

  while(cost_of_taxi < 0)
    {
      cout << "please enter a valid amount ";
    
      
    } 
  if (cost_of_taxi > taxi_fees_budget)
  {
    extra_taxi_fees = cost_of_taxi - taxi_fees_budget;
    
    } 
  else
  {
    cost_of_taxi = taxi_fees_budget;
  }
  
  }

void reg_fees( double &registration_fees) //Function that calculates the registration fees 
{
  string response;

  cout << "Were there any registration fees, Please answer yes or no: ";
  cin >> response; 

  if (response == "yes")
  {
    cout << "How much did you spend on registration fees: ";
    cin >> registration_fees;
  }
  else if (response == "no")
  {
    cout << "Please enter a valid amount: ";
    cin >> registration_fees;
  }
}

void hotel(int total_days, double &hotel_total, double &hotel_cost, double &hotel_reimburse) //Function that gets hotel prices 
{ 
  const double max_nights_spent = 90.00; 

  hotel_total = 0;

  cout << "How many nights did you spend at the lodge?:  ";
  cin >> hotel_total;

  while (hotel_total < 0)
  { 
    cout << "Please enter a valid amount: ";
    cin >> total_days;
  } 
  hotel_reimburse = (total_days-1) * max_nights_spent;

  hotel_cost = hotel_total + hotel_reimburse;
}

void display(int total_days, double cost_of_taxi, double extra_taxi_fees, int first_day, string section_time1, 
int last_day, string section_time2, double round_trip_airfare, double car_rentals, double miles_cost, double cost_of_parking, 
double parking_reimburse, double hotel_total, double hotel_cost, double hotel_reimburse, double registration_fees)
{
  double savings, totalcost;
  
  cout << fixed << showpoint << setprecision(2);
  cout << "*******************************************************"<< endl;
  cout << "Your total days on the trip were, " << total_days << endl;
  cout << "Your first day was at " << first_day << section_time1 << endl;
  cout << "Your last day was at " << last_day << section_time2 << endl;
  cout << "The total amount spent on taxis were, $" <<cost_of_taxi << endl;
  cout << "Your airfare was, $" <<round_trip_airfare << endl;
  cout << "Your registration fees were, $" <<registration_fees << endl;
  cout << "The total spent on car rentals is, $" <<car_rentals<< endl;
  cout << "Your total spent on miles were, $" <<miles_cost << endl;
  cout << "Your parking fees were, $" <<cost_of_parking << endl;
  cout << "Your parking reimbursement is, $" <<parking_reimburse << endl;
  cout << "Your hotel cost was, $" <<hotel_total << endl;
  cout << "Your hotel reimbursement is, $" << hotel_reimburse << endl;

  totalcost = cost_of_taxi + round_trip_airfare + registration_fees +        car_rentals + cost_of_parking + hotel_total;
  cout << "Your total cost is, $" <<totalcost << endl;

 savings = extra_taxi_fees + (parking_reimburse + hotel_reimburse) + hotel_cost + miles_cost ;

  if (savings > 0)
  {
    cout << "Your total savings are $" <<savings << "\n, Thank you for choosing Mckenzie Co. for your travel expense needs" << endl;
  }
   else
  {
   cout << "You spent, $" <<savings*-1 << " at Mckenzie Co. you will be reimbursed in 3-5 business days " << endl;
  }
}

