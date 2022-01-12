#include<iostream>
using namespace std;
int main(void) {
	long long int n, p;
	cin >> n >> p;
	bool swi = 1;
	if ((p-1) * 2 + 1 <= n)
		cout << (p-1) * 2 + 1;
	else
	{
		if (n % 2 == 0) {
			p = p - n / 2;
		}
		else
		{
			p = p -1 - n / 2;
		}
		cout << (p) * 2;
	}
}