#include<iostream>

using namespace std;

const int MAX = 11;

/* Function to display the contents of the array "a" up to element a[length-1] */
void display(int a[], int length);

int binary_search(int value, int list[], int first, int last);

/* START OF MAIN PROGRAM */
int main()
{
	int list[MAX] = {2,2,3,5,8,14,16,22,22,24,30};
	int count, value;
	display(list,MAX);
	cout << "Enter the number you wish to know the position of: ";
	cin >> value;
	cout << endl << binary_search(value, list, 0, 11) << endl;
	return 0;
}
/* END OF MAIN PROGRAM */

/* END OF FUNCTION */

int binary_search(int value, int list[], int first, int last)
{
	int pivot = (first + last) / 2;
	if (list[pivot] == value)
		return pivot;
	if (list[pivot] > value)
		return binary_search(value, list, first, pivot-1);
	if (list[pivot] < value)
		return binary_search(value, list, pivot+1, last);
}


/* DEFINITION OF FUNCTION "display" */
void display(int a[], int length)
{
	for (int count = 0 ; count < length ; count++)
		cout << a[count] << " ";
	cout << "\n\n";
}
/* END OF FUNCTION DEFINITION */
