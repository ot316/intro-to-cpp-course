#include<iostream>
#include<cmath>

using namespace std;

int main() {
long double a = 77617;
long double b = 33096;
long double F;

F = ((((333.75 * pow(b,6)) + pow(a,2)*((11 * pow(a,2) * pow(b,2)) - (121 * pow(b,4)) - 2)) + 5.5 * pow(b,8)) - (pow(a,2) * pow(b,6))) + (a / (2 * b));

cout.setf(ios::fixed);
cout.precision(10);
cout << "The answer is " << F <<endl;
return 0;
}
