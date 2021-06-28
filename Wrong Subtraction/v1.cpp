#include<iostream>
int main()
{
	int no, time;
	printf("Enter the number : ");
	scanf_s("%d", &no);
	printf("Enter the no .of subtractions : ");
	scanf_s("%d", &time);
	for (int i = 0; i < time; i++)
	{
		if (no % 10 == 0)
		{
			no = no / 10;
		}
		else
		{
			no = no - 1;
		}
	}
	printf("%d", no);
}