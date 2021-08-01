#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int a[3], max = 0, length = 3;
	for (size_t i = 0; i < length; i++)
	{
		cin >> a[i];
	}
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = i; j < length; j++)
		{
			int t = abs(a[j] - a[i]);
			if (t > max)
				max = t;
		}
	}
	cout << max;
}