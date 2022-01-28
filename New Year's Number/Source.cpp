#include<iostream>
using namespace std;

void number(void) {
	int k;
	cin >> k;
	int length=0;
	while (k>=2020)
	{
		k = k - 2020;
		length++;
	}
	if (k <= length)
		cout << "YES" << endl;
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
		number();
	}
	return 0;
}