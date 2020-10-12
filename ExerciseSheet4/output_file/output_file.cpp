#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

ifstream in_stream;
ofstream out_stream;

int main()
{
	char ch;
	in_stream.open("output_file.cpp");
	if (in_stream.fail())
	{
		cerr << "Cannot open file" << endl;
		exit(1);
	}
	while (!in_stream.eof())
	{
		in_stream.get(ch);
		cout << ch;
	}
	return 0;
}
