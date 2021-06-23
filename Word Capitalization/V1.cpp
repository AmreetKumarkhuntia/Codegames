#include<iostream>
int main()
{
	char word[1001];
	std::cout << "Enter the string : ";
	std::cin >> word;
	if (word[0] > 96 && word[0] < 123)
		word[0] = word[0] - 32;
	std::cout << word;
}