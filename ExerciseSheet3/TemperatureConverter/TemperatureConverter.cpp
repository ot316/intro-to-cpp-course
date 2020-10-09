/* This program prints out a conversion table of temperatures, after
 * prompting the user for upper and lower bounds of the table in
 *     Fahrenheit, and the temperature difference between table entries. */ 

#include <iostream>
using namespace std;

double celsius_of(int fahr);

double absolute_value_of(int fahr);

void print_preliminary_message();

void input_table_specifications(double& lower, double& upper, int& step);

void print_message_echoing_input(double lower, double upper, int step);

void print_table(double lower, double upper, int step);

/* START OF MAIN PROGRAM */
int main() 
{	
	double lower = 0; /* the lowest Fahrenheit entry in the table */
	double upper = 0; /* the highest Fahrenheit entry in the table */
	int step = 1;  /* difference in Fahrenheit between entries */

	/* print a message explaining what the program does: */
	print_preliminary_message();

	/* prompt the user for table specifications in Fahrenheit: */
	input_table_specifications(lower, upper, step);

	/* print appropriate message including an echo of the input: */
	print_message_echoing_input(lower, upper, step);

	/* Print the table (including the column headings): */
	print_table(lower, upper, step);

	return 0;
}
/* END OF MAIN PROGRAM */

/* FUNCTION TO CONVERT FAHRENHEIT TO CELSIUS */
double celsius_of(double fahr)
{
	return (static_cast<double>(5)/9) * (fahr - 32);
}
/* END OF FUNCTION */

/* FUNCTION TO CONVERT FAHRENHEIT TO ABSOLUTE VALUE */
double absolute_value_of(double fahr)
{
	return ((static_cast<double>(5)/9) * (fahr - 32)) + 273.15;
}
/* END OF FUNCTION */

void print_preliminary_message()
{
	cout << "This program prints out a conversion table of temperatures.\n";
}

void input_table_specifications(double& lower, double& upper, int& step)
{
	cout << "Enter the minimum temperature you want in the table, in Fahrenheit: ";
	cin >> lower;
	cout << "Enter the maximum temperature you want in the table: ";
	cin >> upper;
	cout << "Enter the temperature difference you want between table entries: ";
	cin >> step;
}

void print_message_echoing_input(double lower, double upper, int step)
{
	cout << "\nTempertature conversion table from " << lower << " Fahrenheit\n to ";
	cout << upper << " Fahrenheit, in steps of " << step << " Fahrenheit:\n\n";
}

void print_table(double lower, double upper, int step)
{
	cout << "Fahrenheit\tCelsius\t\tAbsolute Value\n\n";
	for (double i = lower; i <= upper; i+=step)
  	{
	    cout.precision(0);
	    cout.setf(ios::fixed);
	    cout << i << "\t\t";
	    cout.precision(2);
	    cout << celsius_of(i) << "\t\t";
	    cout << absolute_value_of(i) << endl;
  	}
}	





