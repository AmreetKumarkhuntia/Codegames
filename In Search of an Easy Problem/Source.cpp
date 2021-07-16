#include<iostream>
using namespace std;
int main()
{
	int n, truth = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		if (t == 1)
		{
			truth = 1;
			break;
		}
	}
	if (truth == 0)
		cout << "Easy";
	else
		cout << "HARD";
	return 0;
}