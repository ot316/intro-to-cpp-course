/* Exercise Sheet */

# include <iostream>
using namespace std;

int main()
{
  double celsius;
  double LOWEST;
  double HIGHEST;
  int STEP;
  
  cout << "Please enter the lowest fahrenheit temperature to display in the table\n";
  cin >> LOWEST;
  cout << "Please enter the highest fahrenheit temperature to display in the table\n";
  cin >> HIGHEST;
  cout << "Please enter the step size between rows and tables\n";
  cin >> STEP;
  cout << endl;
  cout << "Fahrenheit\tCelsius\t\tAbsolute Value\n\n"; 

for (double i = LOWEST; i <= HIGHEST; i+=STEP)
  {
    cout.precision(0);
    cout.setf(ios::fixed);
    cout << i << "\t\t";
    cout.precision(2);
    celsius = (i - 32.0)*(5.0/9.0);
    cout << celsius << "\t\t";
    cout << celsius + 273.15 << endl;
  }
  return 0;
}
  
