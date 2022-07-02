/*
 *program: deviation.cpp
 *Danny Nurakhmad
 *19.61.0158
 *19-BCI-01
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

int main()
{
	const int SIZE = 100;
	int rand_num[SIZE];
	double sum = 0.0, sum1 = 0.0;
	double avg, vrt, dvt;
	
	system("cls");
	cout << "Random Numbers: " << endl;
	
	srand (time(NULL));
	for(int i = 0; i < SIZE; ++i)
	{
		rand_num[i] = rand() % 1000;
		cout << rand_num[i] << ' ';
		sum += rand_num[i];
		avg = sum / SIZE;
	}

	for(int i = 0; i < SIZE; ++i)
	{
		sum1 += pow(rand_num[i] - (avg), 2);
		vrt = sum1 / SIZE;
		dvt = sqrt(vrt);
	}
	
	cout << endl << "#################################" << endl;
	cout << "> Average		: " << avg << endl;
	
	cout << "> Variation		: " << vrt << endl;
	
	cout << "> Standard Deviation	: " << dvt;
	
	cin.get();
	
	return 0;
}