#include<iostream>
#include"statistics.h"

using namespace std;

int main ()
{
	int no_of_inputs;
	double one = 0;
	double two = 0;
	double three = 0;
	double four = 0;
	cout << "This program tests the functions in the 'statistics.h' header file.\n";
	cout << "Do you wish to test 1, 2, 3 or 4 numbers (enter 0 to end the program):";
	cin >> no_of_inputs;
	
	if (no_of_inputs == 0)
	{
		cout << "exiting\n";
		return 0;
	}

	if (no_of_inputs >= 1)
	{
		cout << "\nEnter first value: ";
		cin >> one;
	}

	if (no_of_inputs >= 2)
	{
		cout << "\nEnter second value: ";
		cin >> two;
	}

	if (no_of_inputs >= 3)
	{
		cout << "\nEnter third value: ";
		cin >> three;
	}
	
	if (no_of_inputs == 4)
	{
		cout << "\nEnter fourth value: ";
		cin >> four;
	}
	
	if (no_of_inputs == 1)
	{
		cout << "\nAverage: " << average(one);
		cout << ". Standard Deviation: " << standard_deviation(one) << endl; 
	}

	else if (no_of_inputs == 2)
	{		
		cout << "\nAverage: " << average(one, two);
		cout << ". Standard Deviation: " << standard_deviation(one, two) << endl; 
	}

	else if (no_of_inputs == 3)
	{		
		cout << "\nAverage: " << average(one, two, three);
		cout << ". Standard Deviation: " << standard_deviation(one, two, three) << endl; 
	}

	else if (no_of_inputs == 4)
	{		
		cout << "\nAverage: " << average(one, two, three, four);
		cout << ". Standard Deviation: " << standard_deviation(one, two, three, four) << endl; 
	}
	return 0;
}

