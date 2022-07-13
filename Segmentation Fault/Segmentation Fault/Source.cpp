#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>

using namespace std;

void solution() {
	int n, l, r;
	unordered_map<int,unordered_set<int>> arr;
	vector<int> posthf;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> l >> r;
		arr[i].insert(i);
		while (l < r + 1) {
			arr[i].insert(l);
			l++;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		bool pr = 1;
		for (int j = 1; j <= n; j++) {
			if (arr[j].find(i) == arr[j].end()) {
				pr = 0;
				break;
			}
		}
		if (pr) {
			posthf.push_back(i);
		}
	}
	cout << posthf.size() << endl;
	for (int i = 0; i < posthf.size(); i++)
	{
		cout << posthf[i] << endl;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t > 0) {
		t--;
		solution();
	}

	return 0;
}