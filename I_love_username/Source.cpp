#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* p = new int[n];
	for (int i = 0; i < n; i++)
		cin >> p[i];
	int amazing = 0;
	for (int i = 1; i < n; i++)
	{
		int flag = 0;
		if (p[i - 1] <= p[i])
		{
			for (int j = 0; j < i; j++)
			{
				if (p[j] >= p[i])
				{
					flag = 1;
					break;
				}
			}
		}
		if (p[i - 1] >= p[i])
		{
			for (int j = 0; j < i; j++)
			{
				if (p[j] <= p[i])
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 0)
		{
			amazing = amazing + 1;
			//cout << i;
		}
	}
	cout << amazing;
	return 0;
}