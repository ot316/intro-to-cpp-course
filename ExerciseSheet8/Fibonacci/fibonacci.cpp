#include<iostream>
#include<cstdlib>

using namespace std;

int fibonacci(int input);

int main() 
{
	int input = 0;
	do {
		cout << "Which Fibonacci number would you like to find? enter '.' to end the program.\n";
		cin >> input;
		cout << fibonacci(input) << endl;
		}
	while (input != '.');
}

int fibonacci(int input)
{
	if (input <= 0)
		return 0;
	else if (input == 1)
		return 1;
	else
		return (fibonacci(input - 1) + fibonacci(input - 2));
}
