#include<iostream>
#include<vector>

using namespace std;

pair<int,int> common_pair(pair<int, int> a, pair<int, int> b) {
	int i, j;
	i = max(a.first, b.first);
	j = min(a.second, b.second);

	return make_pair(i, j);
}

void solution(void) {
	vector<pair<int,int>> garden;
	vector<int> temp;
	pair<int, int> common;
	int n, a, b, t;
	int max_sq = 0, length, diff;

	
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		garden.push_back(make_pair(a,b));
	}

	for (int i = 0; i < n; i++)
	{
		t = garden[i].second - garden[i].first;
		common = garden[i];
		length = 1;
		int sq = 1;
		//cout << "sq:" << " ";
		for (int j = i+1; j <= i+t && j <n; j++) {
			common = common_pair(common, garden[j]);
			length++;
			diff = common.second - common.first + 1;
			sq = min(diff, length);
			//cout << sq << " ";
		}
		max_sq = max(sq, max_sq);
		//cout << endl;
	}

	cout << max_sq << endl;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	t = 1;
	while (t > 0) {
		solution();
		t--;
	}


	return 0;
}