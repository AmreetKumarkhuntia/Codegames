#include<iostream>
int main()
{
	int a,truth=1;
	scanf_s("%d",&a);
	int b[4];
	while (truth != 0)
	{
		a = a + 1;
		int t = a;
		for (int i = 0; i < 4 ; i++)
		{
			b[i] = t % 10;
			t = t / 10;
		}
		int temp = 1;
		for (int i = 0; i < 3; i++)
		{
			for (int j = i+1; j < 4; j++)
			{
				if (b[i] == b[j])
					temp = 0;
			}
		}
		if (temp == 1)
			truth = 0;
	}
	
	std::cout << a;
}