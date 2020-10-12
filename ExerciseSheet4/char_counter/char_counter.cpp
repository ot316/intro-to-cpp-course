#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

int main()
{
	char ch;
	int count = 0;
	ifstream in_stream;
	if (in_stream.fail())
	{
		cout << "Sorry, the file couldn't be opened!\n";
		exit(1);
	}
	in_stream.open("char_counter.cpp");
	while (! in_stream.eof())
	{
		in_stream.get(ch);
		count++;
	}
	cout << "There are " << count << " characters in the file\n";
	return 0;
}



