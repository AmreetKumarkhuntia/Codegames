#include<iostream>
int main()
{
	char s1[101], s2[101];
	int su1=0, su2=0;
	std::cout << "Enter two strings to compare : \n";
	std::cin >> s1;
	std::cin >> s2;
	for(int i=0;i<strlen(s1);i++)
	{
		if (isupper(s1[i]))
		{
			s1[i] = s1[i] + 32;
		}
		su1 = su1 + s1[i];
	}
	for (int i = 0; i < strlen(s2); i++)
	{
		if (isupper(s2[i]))
		{
			s2[i] = s2[i] + 32;
		}
		su2 = su2 + s2[i];
	}
	if (su1 > su2)
	{
		printf("1");
	}
	else if (su1 < su2)
	{
		printf("-1");
	}
	else
	{
		printf("0");
	}
}