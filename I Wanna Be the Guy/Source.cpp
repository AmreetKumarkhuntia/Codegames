#include<iostream>
#include<math.h>
int truth = 1,ch[101];
int check(int a, int b);
using namespace std;
int main()
{
	int n;
	int x, y;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
		ch[i] = 0;
	check(x, n);
	cin >> y;
	check(y, n);
	for (int i = 1; i < n + 1; i++)
	{
		if (ch[i] != i)
		{
			truth = 0;
			break;
		}
	}
	if (truth == 1)
		cout << "I become the guy.";
	else
		cout << "Oh, my keyboard!";
	return 0;
}
int check(int a, int b)
{
	int i = 0;
	while (a!=0)
	{
		int t;
		cin >> t;
		ch[t] = t;
		a = a - 1;
		i = i + 1;
	}
	return 0;
}