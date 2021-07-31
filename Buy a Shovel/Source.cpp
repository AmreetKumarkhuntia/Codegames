#include<iostream>
using namespace std;
int main()
{
	int k, r, pr;
	cin >> k >> r;
	int shovel = 0;
	pr = k;
	int token = 1;
	while (token != 0)
	{
		if (k % 10 == 0)
		{
			token = 0;
			shovel = shovel + 1;
		}
		else if (k % 10 == r)
		{
			token = 0;
			shovel = shovel + 1;
		}
		else
		{
			k = k + pr;
			shovel = shovel + 1;
		}
	}
	cout << shovel;
}