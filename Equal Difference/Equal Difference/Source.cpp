#include<iostream>
#include<vector>
#include<unordered_map>
#include<iterator>

using namespace std;

void solution(void) {
	int n, t, max;
	cin >> n;
	unordered_map<int, int> m;
	unordered_map<int, int> ::iterator it;

	for (int i = 0; i < n; i++) {
		cin >> t;
		m[t]++;
	}
	max = m.begin()->first;
	for (it = m.begin(); it!= m.end(); it++)
	{
		if (it->second > m[max]) {
			max = it->first;
		}
	}
	if (m[max] == 1) {
		if (n > 2) {
			cout << n - 2 << endl;
		}
		else {
			cout << 0 << endl;
		}
	}
	else {
		cout << n - m[max] << endl;
	}
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