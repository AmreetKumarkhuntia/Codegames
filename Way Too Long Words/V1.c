#include<stdio.h>
#include<string.h>
void main()
{
	printf("Enter the no. of words : ");
	int n;
	scanf_s("%d", &n);
	char words[5][5];
	for (int i = 0; i < n; i = i + 1)
	{
		scanf_s("%s", words[i]);
	}
	for (int i = 0; i < n; i = i + 1)
	{
		int size;
		size = strlen(words[i]);
		printf("%d\n", size);
		int temp = size - 2;
		printf("%c%d%c \n", words[i][0], temp, words[i][size]);
	}
}