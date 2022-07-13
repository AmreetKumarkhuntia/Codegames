#include<iostream>
#include<vector>

using namespace std;

bool canremove(char a, char b) {
	if (a == b)
		return 0;
	return 1;
}

bool removalpossible(vector<char> ar) {
	if (ar.size() == 1) {
		return 0;
	}
	if (!ar.empty()) {
		char s = ar.front();
		for (int i = 0; i < ar.size(); i++)
		{
			if (s != ar[i]) {
				return 1;
			}
		}
	}
	return 0;
}

int main(void) {
	int length;
	vector<char> ar;
	cin>>length;
	for (int i = 0; i < length; i++)
	{
		char t;
		cin >> t;
		ar.push_back(t);
	}
	while (removalpossible(ar))
	{
		int size = ar.size();
		for (int i = 0; i < size-1; i++)
		{
			if (canremove(ar[i], ar[i + 1])) {
				for (int j = i; j < ar.size()-2; j++)
				{
					ar[j] = ar[j + 2];
				}
				ar.pop_back();
				ar.pop_back();
			}
			size = ar.size();
		}
	}
	cout << ar.size();

	return 0;
}