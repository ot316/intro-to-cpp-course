#include<iostream>
#include<cmath>

using namespace std;

bool is_prime(int);


int main()
{
	int number;
	cout << "Enter an integer and this program will tell you if it is a prime number bwtween 1 and 1000: ";
	cin >> number;
	if (is_prime(number))
	{
		cout << "\nThis number is a prime number between 1 and 1000\n";
	}
	else
	{
		cout << "\nThis number is not a prime number between 1 and 1000\n";
	}
}

bool is_prime(int number)
{
	if (number > 1000 || number < 0)
		return false;
	float sqr = sqrt(number);
	for (int i = 2; i < sqr; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;

}

