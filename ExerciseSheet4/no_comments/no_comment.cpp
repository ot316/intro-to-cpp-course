#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

const int False = 0;
const int True = 1;

/* test comment */
int main()
{
	char ch;
	char next_ch;
	bool comment = False;
	ifstream in_stream;
	ofstream out_stream;
	cout << "Testing: " << 16/2 << " = " << 4*2 << ".\n\n";
	in_stream.open("no_comment.cpp");
	if (in_stream.fail())
	{
		cerr << "Cannot open file" << endl;
		quick_exit(1);
	}
	while (!in_stream.eof())
	{
		if (comment == False && ch == '/')
		{
			in_stream.get(next_ch);
			if (next_ch == '*')
				comment = True;
			else
				in_stream.putback(next_ch);
		}

		if (comment == True && ch == '*')
		{
			in_stream.get(ch);
			if (ch == '/')
			{
				comment = False;
				in_stream.get(ch);
			}
		}
		
		if (comment == False)
		{
			cout << ch;
		}
		in_stream.get(ch);	
	}
	in_stream.close();
	return 0;
}
