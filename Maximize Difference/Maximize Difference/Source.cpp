#include<iostream>
#include<vector>

using namespace std;

void solution(void) {
	int n, m, t;
	int maxi = INT_MIN;
	pair<int, int> ans;

	cin >> n >> m;
	
	for (int i = n; i <= m; i++) {
		t = m / i;
		t = t * i;
		if ((t - i) >= maxi) {
			maxi = t - i;
			ans = { i,t };
		}
	}

	cout << ans.first << " " << ans.second << endl;
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