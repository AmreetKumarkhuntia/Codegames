#include<iostream>
int main()
{
	int n, h;
	std::cin >> n >> h;
	int* heights = new int[n];
	for (int i = 0; i < n; i++)
		std::cin >> heights[i];
	int re=0;
	for (int i = 0; i < n; i++)
	{
		if (heights[i] > h)
			re = re + 1;
		re = re + 1;
	}
	std::cout << re;
}