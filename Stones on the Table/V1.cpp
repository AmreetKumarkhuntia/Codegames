#include<iostream>
int main()
{
	int str,stone=0;
	char string[51];
	std::cout << "Enter the length od string : ";
	std::cin >> str;
	std::cout << "Enter the string : ";
	std::cin >> string;
	for (int i = 0; i < str; i++)
	{
		if ((string[i] == string[i + 1])&&i!=str-1)
		{
			stone = stone + 1;
		}
	}
	printf("The no. of stones to be removed : %d",stone);
}