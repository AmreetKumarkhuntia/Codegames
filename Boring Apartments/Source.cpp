#include<iostream>
using namespace std;
int main(void)
{
	int testcase;
	cin >> testcase;
	for (size_t i = 0; i < testcase; i++)
	{
		int n;
		cin >> n;
		int term=0;
		int dig = n % 10;
		int sum = 0,temp=n;
		while (temp != 0)
		{
			term++;
			temp = temp / 10;
		}
		int sum2=0;
		for (size_t j = 0; j < term; j++)
		{
			sum2 = sum2 + j + 1;
		}
		sum = 10 * (dig - 1) + sum2;
		cout << sum <<endl;
		
	}
	return 0;
}