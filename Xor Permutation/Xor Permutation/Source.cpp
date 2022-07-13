#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solution() {
	int n;
	cin >> n;
	vector<int> ar;
	for (int i = 0; i < n; i++)
	{
		ar.push_back(i + 1);
	}
	int i = 0, j = 1;
	if (n == 3) {
		cout << -1 << endl;
		return;
	}
	while (j < n) {
		int t = ar[i] ^ ar[j];
		if (j + 1 < n&&j+2<n&& ar[j + 1] == t) {
			swap(ar[j + 1], ar[j + 2]);
		}
		i++;
		j++;
	}
	for (int i = 0; i < n; i++)
	{
		cout << ar[i] << " ";
	}
	cout << endl;
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
}