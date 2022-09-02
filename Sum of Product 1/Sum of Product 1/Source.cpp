#include<iostream>
#include<vector>

using namespace std;

void solution(void) {
	int n, t, p;
	long long sum = 0;
	vector<int> ar;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> t;
		ar.push_back(t);
	}
	p = 1;
	for (int i = 0; i < n; i++)
	{
		if (ar[i] != 1) {
			sum = sum + ar[i];
			p = p * 1;
			sum = sum + p;
		}
	}

	cout << sum << endl;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t > 0) {
		solution();
		t--;
	}

	return 0;
}