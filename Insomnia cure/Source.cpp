#include<iostream>
using namespace std;
int main() {
	int a[4], d;
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> d;
	int* p = new int[d+1];
	for (int i = 0; i < d+1; i++)
		p[i] = 0;
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = a[i]; j < d+1; j=j+a[i])
		{
			p[j] = 1;
		}
	}
	int sum = 0;
	for (int i = 1; i < d + 1; i++)
	{
		if (p[i] == 1)
			sum = sum + 1;
	}
	cout << sum;
	return 0;
}