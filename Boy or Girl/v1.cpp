#include<iostream>
int main()
{
	char string[101];
	int str=0;
	printf("Enter the string : ");
	std::cin >> string;
	str = strlen(string);
	for (int i= 0; i < str; i++)
	{
		for (int j = 0; j < str-1-i; j++)
		{
			if (string[j] > string[j + 1])
			{
				int t = string[j];
				string[j] = string[j + 1];
				string[j + 1] = t;
			}
		}
	}
	int count=1;
	for (int i = 0; i < str-1; i++)
	{
		if (string[i] != string[i + 1])
		{
			count = count + 1;
		}
	}
	if (count % 2 == 0)
	{
		std::cout << "CHAT WITH HER!";
	}
	else
	{
		std::cout << "IGNORE HIM!";
	}
		
}