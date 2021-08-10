#include<iostream>
using namespace std;
int main(void)
{
	int length;
	cin >> length;
	for (size_t testcase = 0; testcase < length; testcase++)
	{
		int n, ar1_min, ar2_min;
		long long int moves = 0;
		cin >> n;
		int* ar1 = new int[n];
		int* ar2 = new int[n];
		for (size_t i = 0; i < n; i++)
		{
			cin >> ar1[i];
			if (i == 0)
			{
				ar1_min = ar1[i];
			}
			if (ar1[i] < ar1_min)
				ar1_min = ar1[i];
		}
		for (size_t i = 0; i < n; i++)
		{
			cin >> ar2[i];
			if (i == 0)
			{
				ar2_min = ar2[i];
			}
			if (ar2[i] < ar2_min)
				ar2_min = ar2[i];
		}
		for (size_t i = 0; i < n; i++)
		{
			int t1 = ar1[i]- ar1_min;
			int t2 = ar2[i]- ar2_min ;
			if (t1 < t2)
			{
				moves = moves + t2;
			}
			else if(t1>t2)
			{
				moves = moves + t1;
			}
			else
			{
				moves = moves + t1;
			}
		}
		cout << moves <<endl;
	}
}