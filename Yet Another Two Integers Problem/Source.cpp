#include<iostream>
using namespace std;
int main()
{
	int length;
	cin >> length;
	int* steps = new int[length];
	for (size_t i = 0; i < length; i++)
	{
		int no1, no2;
		cin >> no1 >> no2;
		if (no1 > no2)
		{
			int t = no1;
			no1 = no2;
			no2 = t;
		}
		int minimum_steps;
		if ((no2 - no1)%10 == 0)
			minimum_steps = (no2 - no1)/10;
		else
			minimum_steps = (no2 - no1) / 10 + 1;
		steps[i] = minimum_steps;
	}
	for (size_t i = 0; i < length; i++)
	{
		cout << steps[i] << endl;
	}
}