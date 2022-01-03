#include<iostream>
using namespace std;
int main(void) {
	string arr;
	cin >> arr;
	int length = arr.length();
	bool truth_value = 0;
	for (int i = 0; i < length-6; i++)
	{
		int t = 0;
		for (int j = i; j < i + 7; j++) {
			t = t + arr.at(j) - 48;
		}
		if (t == 0||t==7) {
			truth_value = 1;
			break;
		}
	}
	if (truth_value == 1)
		cout << "YES";
	else
		cout << "NO";
}