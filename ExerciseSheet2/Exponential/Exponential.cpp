// A program that raises any number x to a positive power n
#include<iostream>
using namespace std;

int main(){
	double x, output;
	int n;
	cout << "Enter a number to you wish to raise to the power of n\n";
	cin >> x;
        cout << "Enter the number n\n";
	cin >> n;
	output = x;
	for (int i = 1; i < n; i++){
		output = output * x;
	}	
	cout << "the answer is " << output << endl;
	return 0;
}

