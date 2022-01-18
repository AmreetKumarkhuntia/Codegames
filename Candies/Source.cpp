#include<iostream>
using namespace std;

void candies(void) {
	int n;
	cin >> n;
	int k = 1, x, i = 1;
	bool tr = 1;
	while (tr)
	{
		k = k + pow(2, i);
		if (n % k == 0) {
			x = n / k;
			tr = 0;
		}
		i++;
	}
	cout << x << endl;
}

int main(void) {
	int testcases;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		candies();
	}

	return 0;
}