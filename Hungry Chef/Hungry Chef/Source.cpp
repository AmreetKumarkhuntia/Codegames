#include<iostream>
#include<vector>

using namespace std;

void solution(void) {
	int x, y, n, m;
	cin >> x >> y >> n >> m;
	if (m / x < n) {
		cout << -1 << endl;
		return;
	}

	int leftmoney = m - n * x;
	int diffprice = y - x;
	int premium = leftmoney / diffprice;
	if (premium > n)
		premium = n;
	int normal = n - premium;

	cout << normal << " " << premium << endl;
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