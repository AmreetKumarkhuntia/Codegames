#include<iostream>
#include<string>
using namespace std;
int main()
{
	char a[101], b[101], c[201];
	cin >> a >> b >> c;
	int l1 = strlen(a);
	int l2 = strlen(b);
	int l3 = strlen(c);
	if (l1 + l2 != l3)
	{
		cout << "NO";
		return 0;
	}
	char* d = new char[l3];
	for (size_t i = 0; i < l1; i++)
	{
		d[i] = a[i];
	}
	for (size_t i = l1; i < l3; i++)
	{
		d[i] = b[i-l1];
	}
	for (int i = 0; i < l3; i++)
	{
		for (int j = i; j < l3; j++)
		{
			if (d[i] < d[j])
			{
				char t;
				t = d[i];
				d[i] = d[j];
				d[j] = t;	
			}
		}
	}
	for (int i = 0; i < l3; i++)
	{
		for (int j = i; j < l3; j++)
		{
			if (c[i] < c[j])
			{
				char t;
				t = c[i];
				c[i] = c[j];
				c[j] = t;
			}
		}
	}
	int flag = 1;
	
	for (size_t i = 0; i < l3; i++)
	{
		if (d[i] != c[i])
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}