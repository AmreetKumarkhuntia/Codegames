#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	int* ar = new int[n];
	for (int i = 0; i < n; i++)
	{
		ar[i] = 1;
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 1; j < n; j++)
		{
			ar[j] = ar[j] + ar[j - 1];
		}
	}
	cout << ar[n - 1];
	return 0;
}