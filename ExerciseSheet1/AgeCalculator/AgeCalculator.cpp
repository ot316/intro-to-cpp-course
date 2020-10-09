/* C++ Programming, Example answer, Exercise 2, Sheet 1  */

/* Author: Rob Miller and William Knottenbelt
   Program last changed: 28th September 2012    */

/* This program prompts the user for the current year, the user's 
current age, and another year. It then calculates the age
that the user was or will be in the second year entered. */

#include <iostream>
using namespace std;

int main()
{
  int year_now, age_now, another_year, another_age, another_age_month, month_now, birth_month, another_month, birth_year;

  cout << "Enter the current year then press RETURN.\n";
  cin >> year_now;

  cout << "Enter the current month (a number from 1 to 12)\n";
  cin >> month_now;

  cout << "Enter your current age in years.\n";
  cin >> age_now;

  cout << "Enter the month in which you were born (a number from 1 to 12).\n";
  cin >> birth_month;
  
  cout << "Enter the year for which you wish to know your age.\n";
  cin >> another_year;

  cout << "Enter the month in this year.\n";
  cin >> another_month;

  birth_year = year_now - age_now;

  another_age = another_year - birth_year;
  another_age_month = another_month - birth_month;

  if (another_age_month > 12) {
    another_age++;
    another_age_month = another_age_month - 12;
  }
  
  if (another_age_month < 0) {
    another_age--;
    another_age_month = 12 + another_age_month;
  }
  
  if (another_age > 150) {
    cout << "Sorry, but you'll probably be dead by ";
    cout << another_year << "!\n";
  } else if (another_age >= 0) {
    cout << "Your age in " << another_month << "/" << another_year << ": ";
    cout << another_age << " and " << another_age_month << " month";
    if (another_age_month != 1)
      cout << "s";
    cout << ".\n";
  } else {
    cout << "You weren't even born in ";
    cout << another_year << "!\n";
  }

  return 0;
}
