#include<iostream>
int main()
{
	int a, b;
	std::cout << "Enter the age of first bear : ";
	std::cin >> a;
	std::cout << "Enter the age of 2nd bear : ";
	std::cin >> b;
	int diff = b - a;
	if (diff % 3==0)
	{
		int temp;
		temp = diff / 3 + 1;
		std::cout << "The amount of time is " << temp << " years. ";
	}
	else
	{
		int temp;
		temp = diff / 3 + 2;
		std::cout << "The amount of time is " << temp << " years. ";
	}
}