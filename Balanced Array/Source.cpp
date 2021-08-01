#include<iostream>
using namespace std;
int main()
{
	int length;
	cin >> length;
	for (size_t j = 0; j < length; j++)

	{
		int len;
		cin >> len;
		if (len % 2 == 0)
		{
			int n = len / 2;
			if (n % 2 == 0)
			{
				cout << "Yes\n";
				int sum = 0, sum2 = 0;
				for (int i = 0; i < n; i++)
				{
					cout << 2 * (i + 1) << " ";
					sum = sum + (2 * (i + 1));
				}
				for (int i = 0; i < n - 1; i++)
				{
					int t = 1 + 2 * i;
					cout << t << " ";
					sum2 = sum2 + t;
				}
				cout << sum - sum2 << endl;
			}
			else
				cout << "NO\n";
		}
		else
			cout << "NO" << endl;
	}
}