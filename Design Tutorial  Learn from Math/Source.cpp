#include<iostream>
using namespace std;
int check(int no);
int main()
{
	int number, x=4, y;
	cin >> number;
	int token = 0;
	y = number - x;
	while (token == 0)
	{
		int t = check(y);
		if (t == 1)
		{
			token = 1;
		}
		else
		{
			x = x + 2;
			y = y - 2;
		}
	}
	cout << x << " " << y;
}
int check(int no)
{
	for (size_t i = 2; i < no/2; i++)
	{
		if (no % i == 0) {
			return 1;
		}
	}
	return 0;
}