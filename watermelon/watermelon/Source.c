#include<stdio.h>
void main()
{
	int weightmelon;
	printf("Enter the integral weight of watermelon : ");
	scanf_s("%d", &weightmelon);
	int rem = weightmelon % 2;
	if (weightmelon < 0)
	{
		printf("Invalid Condition");
	}
	else if (weightmelon < 4)
	{
		printf("No");
	}
	else if(rem == 1)
	{
		printf("No");
	}
	else
	{
		printf("Yes");
	}
}