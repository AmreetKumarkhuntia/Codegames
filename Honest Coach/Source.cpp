#include<iostream>
using namespace std;
int main()
{
	int length;
	cin >> length;
	for (size_t testcases = 0; testcases < length; testcases++)
	{
		int n;
		cin >> n;
		int* ar = new int[n];
		for (size_t i = 0; i < n; i++)
		{
			cin >> ar[i];
		}
		int diff;
		for (size_t i = 0; i < n-1; i++)
		{
			for (size_t j = i+1; j < n; j++)
			{
				int temp = ar[i] - ar[j];
				temp = abs(temp);
				if (j == 1)
					diff = temp;
				if (diff > temp)
					diff = temp;
			}
		}
		cout << diff <<endl;
	}
}