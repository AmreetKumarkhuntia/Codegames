#include<iostream>
#include<vector>
using namespace std;

void sort(void) {
	vector<int> a;
	int length;
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		int t;
		cin >> t;
		a.push_back(t);
	}
	for (int i = 0; i < length; i++)
	{
		for (int j = i + 1; j < length; j++) {
			if (a[i] > a[j]) {
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for (int i = 0; i < length; i++)
	{
		cout << a[i] << " ";
	}
}

int main(void) {
	sort();
}