#include<iostream>
#include<cmath>

using namespace std;

void print_pyramid(int);

void inputcheck(int& height);

int main()
{
	int height;
	cout << "This program prints a 'pyramid' shape of a specified height on the screen\n";
	cout << "How high would you like the pyramid?: ";
	cin >> height;
	inputcheck(height);
	print_pyramid(height);	




}	

void inputcheck(int& height)
{
	if (height > 30 || height < 1)
	{
		cout << "Pick another height (must be between 1 and 30: ";
		cin >> height;
		inputcheck(height);
	}	
}

void print_pyramid(int height)
{	
	int stars = 0;
	for (int i = 0; i < height; i++)
	{
		stars += 2;
		for (int j = 0; j <= height-(stars/2); j++)
		{
			cout << " ";
		}
		for (int j = 0; j < stars; j++)
		{
			cout << "*";
		}
		for (int j = 0; j <= height-(stars/2); j++)
		{
			cout << " ";
		}
		cout << endl;
	}
}

