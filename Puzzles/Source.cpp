#include<iostream>
#include<vector>

using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> a;
	int max_difference = INT_MAX;
	for (int i = 0; i < m; i++)
	{
		int t;
		cin >> t;
		a.push_back(t);
	}
	for (int i = 0; i < m-1; i++)
	{
		for (int j = i+1; j < m; j++)
		{
			if (a[i] > a[j]) {
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for (int i = 0; i < m-n+1; i++)
	{
		int difference;
		difference = abs(a[i] - a[i + n - 1]);
		if (difference < max_difference)
			max_difference = difference;
	}
	cout << max_difference;
	return 0;
}