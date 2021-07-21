#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	int* b = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
	}
	int host_team = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0 ; j < n; j++)
		{
			if (i != j)
			{
				if (a[i] == b[j])
				{
					host_team = host_team + 1;
				}
			}
		}
	}
	cout << host_team;
}