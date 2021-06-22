#include<iostream>
int main()
{
	int matrix[5][5];
	printf("Enter the elements of matrix : \n");
	int swaprow,swapcolumn;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> matrix[i][0] >> matrix[i][1] >> matrix[i][2] >> matrix[i][3] >> matrix[i][4];
		for (int j = 0; j < 5; j++)
		{
			if (matrix[i][j] == 1)
			{
				swaprow = j;
				swapcolumn = i;
			}
		}
	}
	int reqswaps = swaprow + swapcolumn - 4 + 2;
	if (reqswaps > 0)
	{
		printf("%d",reqswaps);
	}
	else
	{
		printf("%d", -reqswaps);
	}
}
