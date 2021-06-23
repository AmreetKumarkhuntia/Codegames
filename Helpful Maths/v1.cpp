#include<iostream>
int main()
{
	char a[100];
	std::cout << "Enter the sum : ";
	std::cin>>a;
	for (int j = 0; j < strlen(a)-1; j = j + 2)
	{
		for (int i = 0; i < strlen(a)-j-1; i = i + 2)
		{
			if (a[i] > a[i + 2])
			{
				int temp;
				temp = a[i];
				a[i] = a[i + 2];
				a[i + 2] = temp;
			}
		}
	}
	for (int i = 0; i < strlen(a); i++)
	{
		printf("%c", a[i]);
	}
}