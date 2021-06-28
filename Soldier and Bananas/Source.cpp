#include<iostream>
int main()
{
	int banana, cost ,dollar,cos=0, borrow ;
	std::cout << "Enter the no. of bananas : ";
	std::cin >> banana;
	std::cout << "Enter the cost if each banana : ";
	std::cin >> cost;
	std::cout << "Enter the money with you : ";
	std::cin >> dollar;
	for (int i = 1; i <= banana; i++)
		cos = cos + i * cost;
	borrow = cos - dollar;
	if (borrow > 0)
		std::cout << "The amount of money to be boorowed : " << borrow;
	else
		std::cout << "You need not to borrow any money.";
}