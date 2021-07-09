#include<iostream>
int main()
{
	int n,t;
	char a[51];
	std::cin >> n >> t;
	std::cin >> a;
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if (a[j] < a[j + 1])
			{
				char t;
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
				j = j + 1;
			}
		}
	}
	std::cout << a;
}