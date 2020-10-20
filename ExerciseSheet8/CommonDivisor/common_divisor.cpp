#include<iostream>

using namespace std;

int greatest_common_divisor(int n, int m);

void swap(int &n, int &m);

int main()
{
	int m, n;
	cout << "\nEnter the first number ";
	cin >> m;
	cout << "\nEnter the second number ";
	cin >> n;
	if (m > n)
		swap(n,m);
	cout << endl << greatest_common_divisor(n,m);
}

int greatest_common_divisor(int n, int m)
{	
	if (n == m)
		return m;
	if (m < (n-m))
		return greatest_common_divisor((n-m), m);
	else
		return greatest_common_divisor(m, (n-m));
}

void swap(int &n, int &m)
{
	cout << "numbers swapped";
	n^=m;
	m^=n;
	n^=m;
}

