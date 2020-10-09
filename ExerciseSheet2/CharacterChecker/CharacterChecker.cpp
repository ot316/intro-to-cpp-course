#include<iostream>
using namespace std; 

int main()
{
  char input;
  char output;
  cout << "Enter a letter and press enter:\n";
  cin >>  input;
  if ((int)(input) > 96 && (int)(input) < 123) {
	output = input - 32;
	cout << "The upper case character corresponding to ";
        cout << input << " is ";
	cout << output << endl;
  }
  else if ((int)(input) > 64 && (int)(input) < 90) {
	output = input + 32;
	cout << "The lower case character corresponding to ";
        cout << input << " is ";
	cout << output << endl;
  }
  else {
	cout << input << " is not a letter\n";
  }
  return 0;
}
