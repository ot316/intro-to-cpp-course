#include<iostream>
#include"statistics.h"

using namespace std;

double average(double one)
{
	return one;
}

double average(double one, double two)
{
	return (one + two) / 2;
}

double average(double one, double two, double three)
{
	return (one + two + three) / 3;
}

double average(double one, double two, double three, double four)
{
	return (one + two + three + four) / 4;
}

double standard_deviation(double one)
{
	return 0;
}

double standard_deviation(double one, double two)
{
	double avg = average(one, two);
	return (one - avg) * (two - avg);
}

double standard_deviation(double one, double two, double three)
{
	double avg = average(one, two, three);
	return (one - avg) * (two - avg) * (three - avg);
}

double standard_deviation(double one, double two, double three, double four)
{
	double avg = average(one, two, three, four);
	return (one - avg) * (two - avg) * (three - avg) * (four - avg);
}

