#include<iostream>
#include<vector>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, temp;
	cin >> t;
	vector<int> arr;
	for (int i = 0; i < t; i++) {
		cin >> temp;
		arr.push_back(temp);
	}
	vector<int> sol;
	for (int i = 0; i < t; i++)
	{
		if (arr[i] % 3 == 0)
			cout << 0;
		else
			cout << 3 - arr[i] % 3;
		cout << endl;
	}

	return 0;
}