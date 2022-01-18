#include<iostream>
using namespace std;

int multi(void) {
	int steps = 0;
	bool notdivisble = 0;
	int n;
	cin >> n;
	while (n!=1 && !notdivisble)
	{
		if (n % 6 == 0) {
			n = n / 6;
		}
		else
		{
			n = n * 2;
			if (n % 6 != 0) {
				notdivisble = 1;
			}
		}
		steps++;
	}
	if (notdivisble)
		return -1;
	else
		return steps;
}

int main(void) {
	int testcases;
	cin >> testcases;
	for (int i = 0;  i < testcases;  i++)
	{
		int steps = multi();
		cout << steps << endl;
	}

	return 0;
}