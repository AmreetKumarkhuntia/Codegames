#include<iostream>
using namespace std;
int main(void) {
	int testcase;
	cin >> testcase;
	for (size_t i = 0; i < testcase; i++)
	{
		int a, b, steps=0;
		cin >> a >> b;
		int diff = b - a;
		if (diff > 0)
		{
			if (diff % 2 == 0) {
				steps = 2;
			}
			else
			{
				steps = 1;
			}
		}
		else if (diff < 0)
		{
			diff = abs(diff);
			if (diff % 2 == 0)
				steps = 1;
			else
				steps = 2;
		}
		else
		{
			steps = 0;
		}
		cout << steps<<endl;
	}
	return 0;
}