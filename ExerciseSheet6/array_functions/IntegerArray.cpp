#include<iostream>
#include<cmath>
#include"IntegerArray.h"

using namespace std;

void input_array(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nEnter value for element " << i << ": ";
		cin >> array[i];
	}
	cout << "Array saved" << endl;
}

void display_array(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout.width(5);
		cout << array[i] << " ";
	}
	cout << endl;
}

void copy_array(int array1[], int array2[], int n)
{
	for (int i = 0; i < n; i++)
	{
		array1[i] = array2[i];
	}
}

double average(double array[], int n)
{
	double total = 0;
	for (int count = 0 ; count < n; count++)
		total += array[count];
	return (total / n);
}

double average(int array[], int n)
{
	double total = 0;
	for (int count = 0; count < n; count++)
		total += double(array[count]);
	return (total / n);
}

double standard_deviation(int array[], int n)
{
	double square_averages[n];
	double avg = average(array, n);
	double std_dev = 0;
	for (int count = 0; count < n; count++)
	{
		square_averages[count] = pow((array[count] - avg),2); 
	}
	std_dev = sqrt(average(square_averages, n));
	
	return std_dev;
}
