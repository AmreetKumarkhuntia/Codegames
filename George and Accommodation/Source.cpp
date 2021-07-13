#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	int* b = new int[n];
	int space = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
		if (a[i] <= b[i] - 2)
			space = space + 1;
	}
	cout << space;
}