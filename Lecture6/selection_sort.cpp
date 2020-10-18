/* Program 6.3.1 from C++ Programming Lecture notes  */

/* Author: Rob Miller and William Knottenbelt
 *    Program last changed: 30th September 2001    */

/* This program demonstrates selection sort */

#include <iostream>
using namespace std;

const int NO_OF_ELEMENTS = 5;

/* Function to sort an array */
void selection_sort(int a[], int length);

/* Function which returns the index of the minimum element in 
 *     "a" whose index is greater than or equal "position" */
int minimum_from(int a[], int position, int length);

/* Function to swap the values of two integer variables */
void swap(int& first, int& second);

/* Function to display the contents of "a" in a column */
void display_state(int a[], int stage, int length);


/* START OF MAIN PROGRAM */
int main()
{
	int list[NO_OF_ELEMENTS];
	int count;

	for (count = 0 ; count < NO_OF_ELEMENTS ; count++)
	{
		cout << "Enter value of element " << count << ": ";
		cin >> list[count];
	}

	cout << "\n\n";

	display_state(list,-1,NO_OF_ELEMENTS);

	selection_sort(list,NO_OF_ELEMENTS);

	return 0;
}
/* END OF MAIN PROGRAM */

/* DEFINITION OF FUNCTION "selection_sort" */
void selection_sort(int a[], int length)
{
	for (int count = 0 ; count < length - 1 ; count++)
	{
		swap(a[count],a[minimum_from(a,count,length)]);
		display_state(a,count,length);

	}
}
/* END OF FUNCTION DEFINITION */

/* DEFINITION OF FUNCTION "minimum_from" */
int minimum_from(int a[], int position, int length)
{
	int min_index = position;
	for (int count = position + 1 ; count < length ; count ++)
		if (a[count] < a[min_index])
			min_index = count;

	return min_index;
}
/* END OF FUNCTION DEFINITION */

/* DEFINITION OF FUNCTION "swap" */
void swap(int& first, int& second)
{
	if (&first != &second)
	{	
		first ^= second;
		second ^= first;
		first ^= second;
	}
}
/* END OF FUNCTION DEFINITION */

/* DEFINITION OF FUNCTION "display_state" */
void display_state(int a[], int stage, int length)
{
	cout << "STATE " << stage + 2 << ":\n\n";
	for (int count = 0 ; count < length ; count++)
		cout << "element " << count << " = " << a[count] << "\n";
	cout << "\n\n";
}
/* END OF FUNCTION DEFINITION */

