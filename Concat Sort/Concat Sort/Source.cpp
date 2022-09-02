#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solution(void) {
	vector<pair<int,int>> ar;
	int n, t, count1 = 0, count2 = 0, ind;
	
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> t;
		ar.push_back(make_pair(t, i));
	}

	sort(ar.begin(), ar.end());

	for (int i = 0; i < n; i++)
	{
		//cout << ar[i].second << " ";
		if (i == 0) {
			ind = 0;
			//cout << "nc: " << ind;
		}
		else if (ind <= ar[i].second) {
			ind = ar[i].second;
			//cout << "nc: " << ind;
		}
		else if (ind > ar[i].second) {
			count1++;
			ind = ar[i].second;
			//cout << "c: " << ind;
		}
		//cout << endl;
	}

	if (count1 <= 1)
		cout << "YES" << endl;
	else
		cout<<"NO"<<endl;
}

void solution2(void) {
	vector<pair<int, int>> ar;
	bool flag = 1;
	pair<int, int> change;
	int n, t, count = 0, ch, ind = -1;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> t;
		if (i == 0) {
			ch = t;
		}
		else
		{
			if (flag == 1) {
				if (ch <= t) {
					ch = t;
				}
				else
				{
					change = { ch,i };
					flag = 0;
				}
			}
		}
		ar.push_back(make_pair(t, i));
	}

	sort(ar.begin(), ar.end());
	cout << change.first << endl;

	for (int i = 0; i < n; i++)
	{
		if (ar[i].first < change.first) {
			if (ar[i].second > ind) {
				ind = ar[i].second;
			}
			else {
				cout << "NO" << i << endl;
				return;
			}
		}
		else if (ar[i].first == change.first) {
			ind = change.second;
		}
		else {
			if (ar[i].second > ind) {
				ind = ar[i].second;
			}
			else {
				cout << "NO" << i << endl;
				return;
			}
		}
	}

	cout << "YES" << endl;
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