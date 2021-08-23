#include<iostream>
using namespace std;
int main(void)
{
	int testcase;
	cin >> testcase;
	for (size_t test = 0; test < testcase; test++)
	{
		int length_stick;
		cin >> length_stick;
		int noofsticks = length_stick / 2;
		if (length_stick%2==1)
			noofsticks = noofsticks + 1;
		cout << noofsticks << endl;
	}
}