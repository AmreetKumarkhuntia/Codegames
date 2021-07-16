#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[100],b[100];
	cin >> a >> b;
	int n = strlen(a);
	//int ca=0;
	char* c = new char[n];
	for (int i = n-1; i >= 0; i--)
	{
		if (a[i] == '0' && b[i] == '0')
		{
			c[i] = '0';

		}
		if ((a[i] == '0' && b[i] == '1') || (a[i] == '1' && b[i] == '0'))
		{
			c[i] = '1';
		}
		if (a[i] == '1' && b[i] == '1')
		{
			c[i] = '0';
		}
	}
	for (int i = 0; i < n; i++)
		cout << c[i];
	return 0;
}