#include<iostream>
#include<cstring>

using namespace std;

void no_repetitions(char input[]);

int find_length(char input[]);

bool check_contains(char output[], char test);

const int LENGTH = 100;

int main()
{	
	char input[LENGTH];
	cout << "Type in a string: ";
	cin.getline(input, LENGTH);
	cout << "The string without repetitions is: ";
	no_repetitions(input);
	cout << input << endl;
}

void no_repetitions(char input[])
{
	char output[find_length(input)];
	int count = 0;
	int position = 0;
	while (input[count] != '\0')
	{
		if (! check_contains(output, input[count]))
		{
			output[position] = input[count];
			position++;
		}
		count++;
	}
	output[position] = '\0';
	strcpy(input, output);
}

bool check_contains(char output[], char test)
{	
	int count = 0;
	while (output[count] != '\0')
	{
		if (output[count] == test)
			return true;
		count++;
	}
	return false;
}

int find_length(char input[])
{
	int count = 0;
	while (input[count] != '\0')
	{
		count++;
	}
	return count;
}
		
