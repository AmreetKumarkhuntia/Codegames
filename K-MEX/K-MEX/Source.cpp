#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;

void solution() {
	int n, m, k, temp, size=0;
	bool lp = 1;
	unordered_set<int> map;

	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (temp != k) {
			size++;
			map.insert(temp);
		}
	}

	for (int i = 0; i < k; i++) {
		if (map.find(i) == map.end()) {
			lp = 0;
		}
	}

	if (lp&&m>=k&&m<=size)
		cout << "YES";
	else
		cout << "NO";

}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t>0)
	{
		solution();
		t--;
	}

	return 0;
}