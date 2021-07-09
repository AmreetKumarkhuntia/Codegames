#include<iostream>
int main()
{
	int n;
	std::cin >> n;
	int people=0,max=0;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		if (i < n - 1)
		{
			std::cin >> a >> b;
			people = people + b - a;
		}
		else
		{
			std::cin >> a;
			people = people - a;
		}
		if (max < people)
			max = people;
	}
	std::cout << people;
	return 0;
}