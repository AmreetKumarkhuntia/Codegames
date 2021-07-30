#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int diff[4];
	for (size_t i = 0; i < 4; i++)
	{
		cin >> diff[i];
	}
	for (int i = 0; i < 4; i++)
	{
		for (size_t j = i; j < 4; j++)
		{
			if (diff[i] > diff[j])
			{
				int t = diff[i];
				diff[i] = diff[j];
				diff[j] = t;
			}
		}
	}
	for (size_t i = 0; i < 3; i++)
	{
		cout << abs(diff[3] - diff[i]) << endl;
	}
}