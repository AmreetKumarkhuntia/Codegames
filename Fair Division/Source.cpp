#include<iostream>
using namespace std;
int main(void)
{
	int testcases;
	cin >> testcases;
	for (size_t i = 0; i < testcases; i++)
	{
		int length;
		int sum = 0;
		cin >> length;
		for (size_t j = 0; j < length; j++)
		{
			int t;
			cin >> t;
			sum = sum + t;
		}
		if (length % 2 == 0)
		{
			if (sum % 2 == 0)
				cout << "YES";
			else
				cout << "NO";
		}
		else
			cout << "NO";
		cout << endl;
	}
	return 0;
}