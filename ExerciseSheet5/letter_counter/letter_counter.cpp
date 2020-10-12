#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char ch;
	int count = 0;
	cout.setf(ios::left);
	cout.width(19);
	cout << "\nCHARACTER";
	cout << "OCCURENCES\n\n";
	
	for (int i = 97; i <= 122; i++)
	{
		ifstream in_stream;
		in_stream.open("letter_counter.cpp");
			while (! in_stream.eof())
			{
				in_stream.get(ch);
				if (static_cast<int>(ch) == i)
				{
					count++;
				}	
			}
		in_stream.close();
		cout.width(19);
		cout << static_cast<char>(i);
		cout << count  << endl;
		count = 0;
	}
	cout << endl;
	return 0;
}
