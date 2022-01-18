#include<iostream>
using namespace std;
int main(void) {
	int n, m;
	cin >> n >> m;
	int days_passed = 1;
	while (n!=0)
	{
		if (days_passed % m == 0) {
			n = n + 1;
		}
		n--;
		days_passed++;
	}
	days_passed--;
	cout << days_passed;
	return 0;
}