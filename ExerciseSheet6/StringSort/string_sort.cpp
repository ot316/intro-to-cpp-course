#include<iostream>

using namespace std;

void string_sort(char a[], int length);
int minimum_from(char a[], int position);
void swap(int& first, int& second);

const int N = 11;

int main()
{
	char input[N];
	cout << "Enter a string less than 10 characters: ";
	cin.getline(input,N);
	cout << "You entered: ";
	cout << input << endl;
	string_sort(input, N);
	cout << "The sorted string is: ";
	cout << input << endl;
}

void string_sort(char a[], int length)
{
	int count = 0;
	while (a[count] != '\0')
	{
		swap(a[count], a[minimum_from(a, count)]);
		count ++;
	}
}

int minimum_from(char a[], int position)
{
	int min_index = position;
	int count = position + 1;
	while (a[count] != '\0')
	{
		if (a[count] < a[min_index])
			min_index = count;
			count++;
	}
	return min_index;
}

void swap(char& first, char& second)
{
	first ^= second;
	second ^= first;
	first ^= second;
}
