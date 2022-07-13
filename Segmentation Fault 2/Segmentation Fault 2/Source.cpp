#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<iterator>

using namespace std;

void solution() {
	int n, l, r;
	unordered_set<int> p;
	unordered_set<int>::iterator it;
	vector<int> posthf;
	cin >> n;

	cin >> l >> r;
	p.insert(1);
	while (l < r + 1) {
		p.insert(l);
		l++;
	}

	for (int i = 2; i <= n; i++)
	{
		cin >> l >> r;
		
		for (it=p.begin(); it != p.end(); it++)
		{
			int t = *it;
			if (l <= t && t <= r) {

			}
			else
			{
				p.erase(t);
			}
		}
	}

	for (it = p.begin(); it != p.end(); it++)
	{
		posthf.push_back(*it);
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