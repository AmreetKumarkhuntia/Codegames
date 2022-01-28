#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sale(int n,int m) {
	vector<int> ar;
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		ar.push_back(t);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++) {
			if (ar[i] > ar[j]) {
				int t = ar[i];
				ar[i] = ar[j];
				ar[j] = t;
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		if(ar[i]<0)
			sum = sum + ar[i];
	}
	cout << abs(sum) << endl;
}

int main(void) {
	int n, m;
	cin >> n >> m;
	sale(n, m);
	return 0;
}