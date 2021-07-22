#include<iostream>
using namespace std;
int main()
{
	int length;
	cin >> length;
	int* p = new int[length];
	for (size_t i = 0; i < length; i++)
	{
		int t;
		cin >> t;
		int r = t / 2;
		if (r - 1 < 0)
			p[i] = 0;
		else if (t % 2 == 0)
			p[i] = r - 1;
		else
			p[i] = r;
	}
	for (size_t i = 0; i < length; i++)
	{
		cout << p[i] << endl;
	}
}