#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int grp = 1,t=0;
	for (int i = 0; i < n; i++)
	{
		int p;
		cin >> p;
		if (p != t&& i != 0)
		{
			grp = grp + 1;
		}
		t = p;
	}
	cout << grp;
}
