#include<iostream>
using namespace std;
void swap(int* k, int* l);
int main()
{
	int length;
	cin >> length;
	for (size_t testcases = 0; testcases < length; testcases++)
	{
		int n, k;
		cin >> n >> k;
		int* ar1 = new int[n];
		int* ar2 = new int[n];
		for (size_t i = 0; i < n; i++)
		{
			cin >> ar1[i];
		}
		for (size_t i = 0; i < n; i++)
		{
			cin >> ar2[i];
		}
		int i = 0, j = n - 1;
		for (size_t i = 0; i < n; i++)
		{
			for (int j = i; j < n; j++)
			{
				swap(&ar1[i], &ar1[j]);
			}
		} //swap1
		for (size_t i = 0; i < n; i++)
		{
			for (int j = i; j < n; j++)
			{
				swap(&ar2[i], &ar2[j]);
			}
		} // swap2
		while (k > 0)
		{
			if (ar1[i] < ar2[j])
			{
				swap(&ar2[j], &ar1[i]);
				i++;
				j--;
			}
			k--;
		}
		int sum = 0;
		for (size_t i = 0; i < n; i++)
		{
			sum = sum + ar1[i];
		}
		cout << sum << endl;
	}
}
void swap(int* k, int* l)
{
	if (*k > *l)
	{
		int temp;
		temp = *k;
		*k = *l;
		*l = temp;
	}
}