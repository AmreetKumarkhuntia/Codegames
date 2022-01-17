#include<iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	if (n > m) {
		int t = n;
		n = m;
		m = t;
	}
	if (n % 2 == 0) {
		cout << "Malvika" << endl;
	}
	else
	{
		cout << "Akshat" << endl;
	}
}