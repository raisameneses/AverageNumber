//Raisa Meneses
//Find average
//overload function C++
//2013
#include<iostream>
using namespace std;
int average(const int* list, int size);
double average(const double* list, int size);
int main()
{
	int list[5] = { 1, 2, 3, 4, 5 };

	int aver = average(list, 5);
	cout << aver << endl;
}

int average(const int* list, int size)
{
	int adding = 0;

	for (int i = 0; i < size; i++)
	{
		adding += *(list + i);
	}

	return adding / size;
}

double average(const double* list, int size)
{
	double adding = 0.0;

	for (int i = 0; i < size; i++)
	{
		adding += *(list + i);
	}

	return adding / size;
}