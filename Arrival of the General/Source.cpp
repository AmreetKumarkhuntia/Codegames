#include<iostream>
using namespace std;
int main()
{
	int n,low,high,low_i,high_i;
	high_i = low_i = 0;
	cin >> n;
	int* a = new int[n];
	cin >> a[0];
	low = high = a[0];
	for (int i = 1; i < n; i++)
	{
		cin >> a[i];
		if (a[i] > high)
		{
			high = a[i];
			high_i = i;
		}
		else if (a[i] < low)
		{
			low = a[i];
			low_i = i;
			//cout << low << " " << low_i << " " << i << endl;
		}
		if (a[i] == high)
		{
			if (high_i > i)
				high_i = i;
		}
		if (a[i] == low)
		{
			if (low_i < i)
				low_i = i;
		}
	}
	int move;
	if (high_i > low_i)
		move = n - low_i + high_i - 2;
	else if (high_i < low_i)
		move = high_i + n - 1 - low_i;
	else 
		move = 0;
	cout << move;
	return 0;
}