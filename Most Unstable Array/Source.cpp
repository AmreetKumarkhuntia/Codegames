#include<iostream>
using namespace std;
void main(void)
{
	int testcases_length;
	cin >> testcases_length;
	for (size_t testcase = 0; testcase < testcases_length; testcase++)
	{
		int n, m;
		cin >> n >> m;
		int sum;
		if (n == 1)
			sum = 0;
		else if (n == 2)
			sum = m;
		else
			sum = 2 * m;
		cout << sum << endl;

	}
}