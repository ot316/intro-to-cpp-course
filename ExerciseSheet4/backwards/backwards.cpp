#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

int main()
{
	char ch;
	int count = 0;
	ifstream in_stream;
	in_stream.open("backwards.cpp");
	if (in_stream.fail())
	{
		cout << "Sorry, the file couldn't be opened!\n";
		exit(1);
	}
	while (! in_stream.eof())
	{
		in_stream.get(ch);
		count++;
	}
	in_stream.close();
	for (int i = count; i >= 0; i--)
	{
		ifstream in2_stream;
		in2_stream.open("backwards.cpp");
		for (int j = 0; j <= i; j++)
			in2_stream.get(ch);
		cout << ch;		
		in2_stream.close();
	}
	cout << endl << endl;
	return 0;
}
