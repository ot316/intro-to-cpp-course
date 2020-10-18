#include<iostream>

using namespace std;

bool is_alphabetical(char first_string[], char second_string[]);

bool pointer_is_alphabetical(char *first_string, char *second_string);

const int MAX_LENGTH = 200;

int main()
{
	char first_string[MAX_LENGTH];
	char second_string[MAX_LENGTH];
	cout << "Please enter 1st lowercase string\n";
	cin.getline(first_string, MAX_LENGTH);
	cout << "Please enter 2nd lowercase string\n";
	cin.getline(second_string, MAX_LENGTH);
	cout << "The 1st string is ";
	//if (!(first_string, second_string))
	//	cout << "not ";
	if (!pointer_is_alphabetical(first_string, second_string))
		cout << "not ";
	cout << "alphabetically smaller than the 2nd.\n";
	return 0;
}

bool is_alphabetical(char first_string[], char second_string[])
{	
	int i = 0;
	while (first_string[i] != '\0' && second_string[i] != '\0')
	{
		if (first_string[i] > second_string[i])
			{return false;}
	i++;
	}
	return true;
}	

bool pointer_is_alphabetical(char *first_string, char *second_string)
{
	while (*first_string != '\0' && *second_string != '\0')
	{
		if (*first_string > *second_string)
			{return false;}
	first_string++;
	second_string++;
	}
	return true;
	
}
