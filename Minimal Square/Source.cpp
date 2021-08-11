#include<iostream>
using namespace std;
int main()
{
	int length;
	cin >> length;
	for (size_t testcases = 0; testcases < length; testcases++)
	{
		int a, b;
		cin >> a >> b;
		if (a < b)
		{
			int temp = b;
			b = a;
			a = temp;
		}
		int l = 2*b;
		if (l < a)
		{
			l = a;
		}
		cout << l * l << endl;
	}
	return 0;
}