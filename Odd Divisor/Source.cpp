#include<iostream>
using namespace std;

void OddDivisor(void) {
	int64_t n;
	cin >> n;
	bool has_odd_divisor = 0;
	if (n % 2 == 1) {
		has_odd_divisor = 1;
	}
	else
	{
		while (n!=1&&has_odd_divisor==0)
		{
			if (n % 2 == 1) {
				has_odd_divisor = 1;
			}
			n = n / 2;
		}
	}
	if (has_odd_divisor) {
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}

int main(void) {
	int testcases;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		OddDivisor();
	}
	return 0;
}