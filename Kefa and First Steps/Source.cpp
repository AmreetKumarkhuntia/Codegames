#include<iostream>
#include<vector>
using namespace std;

int main(void) {
	int length;
	vector<int> a;
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		int t;
		cin >> t;
		a.push_back(t);
	}
	int j = 1, max_length = 1, current_length=1;
	for (int i = 0; i < length - 1; i++)
	{
		if (a[i] <= a[j]) {
			current_length++;
		}
		else
		{
			current_length = 1;
		}
		if (current_length > max_length) {
			max_length = current_length;
		}
		j++;
	}
	cout << max_length;
	return 0;
}