#include<iostream>
using namespace std;
int main(void) {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int k;
		cin >> k;
		int rem = 52 % k;
		cout << rem << endl;
	}
}