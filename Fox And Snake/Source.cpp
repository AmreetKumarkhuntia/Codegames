#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int t = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (i%2==0)
		{
			for (int j = 0; j < m; j++)
				cout << "#";
		}
		else
		{
			if (t % 2 != 0)
				cout << "#";
			for (int j = 0; j < m - 1; j++)
				cout << ".";
			if (t % 2 == 0)
				cout << "#";
			t = t + 1;
		}
		cout << endl;
	}
}