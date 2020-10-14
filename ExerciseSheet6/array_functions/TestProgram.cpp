#include<iostream>
#include"IntegerArray.h"

using namespace std;

int main() 
{	
	const int LENGTH = 4;
	int a[LENGTH];
	int b[LENGTH];
	input_array(a, LENGTH);
	input_array(b, LENGTH);
	display_array(a, LENGTH);
	display_array(b, LENGTH);
	copy_array(a, b, LENGTH);
	display_array(a, LENGTH);
	cout <<"Average: ";
	cout << average(a, LENGTH) << endl;
	cout << "Standard Deviation: ";
	cout << standard_deviation(a, LENGTH) << endl;
	return 0;
}
