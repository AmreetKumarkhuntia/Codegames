#include<iostream>
int main()
{
	int operations,X=0;									//decalration of variable
	std::cout << "Enter the no. of operations : ";
	std::cin >> operations;
	std::cout << "Continue Entering Operations : \n";
	for (int i = 0; i < operations; i++)
	{
		char temp[4];
		std::cin >> temp;
		if ( temp[0]== 'x' && temp[1]=='+'&&temp[2]=='+' )
		{
			X = X + 1;
		}
		else if(temp[0] == '+' && temp[1] == '+' && temp[2] == 'x')
		{
			X = X + 1;
		}
		else if(temp[0] == '-' && temp[1] == '-' && temp[2] == 'x')
		{
			X = X - 1;
		}
		else if (temp[0] == 'x' && temp[1] == '-' && temp[2] == '-')
		{
			X = X - 1;
		}
		else
		{
			printf("Invalid entry.");
		}
	}
	printf("%d",X);
}