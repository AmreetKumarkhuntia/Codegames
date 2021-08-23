#include<iostream>
using namespace std;
int main(void)
{
	int testcase;
	cin >> testcase;
	int* diff_ar = new int[testcase];
	for (size_t i = 0; i < testcase; i++)
	{
		int n;
		cin >> n;
		double col1 = 0, col2 = 0;
		for (size_t j = 1; j <= n; j++)
		{
			col1 = col1 + pow(2, j);
		}
		if (n % 4 == 0)
		{
			for (size_t j = n / 4 + 1; j <= (3 * n) / 4; j++)
			{
				col2 = col2 + pow(2, j);
			}
		}
		else
		{
			int t = 1, temp = 0;
			while (t <= n / 2)
			{
				if (temp == 0)
				{
					col2 = col2 + pow(2, t);
					temp = 1;
					t++;
				}
				else {
					col2 = col2 + pow(2, n - t + 1);
					temp = 0;
					t++;
				}
			}
		}
		col1 = col1 - col2;
		diff_ar[i] = abs(col1 - col2);
	}
	for (size_t i = 0; i < testcase; i++)
	{
		cout << diff_ar[i] << endl;
	}
	return 0;
}