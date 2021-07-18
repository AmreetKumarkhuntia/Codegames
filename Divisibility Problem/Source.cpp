#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* p = new int[n];
	for (size_t i = 0; i <n; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a < b)
			p[i] = b - a;
		else
			p[i] = a % b;
	}
	for (size_t i = 0; i < n; i++)
	{
		cout << p[i] << endl;
	}
}