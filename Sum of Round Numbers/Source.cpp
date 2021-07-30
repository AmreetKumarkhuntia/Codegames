#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int length;
	cin >> length;
	int* number = new int[length];
	for (size_t i = 0; i < length; i++)
	{
		cin >> number[i];
	}
	for (size_t i = 0; i < length; i++)
	{
		int a[5], t = 0, count = 0;
		while (number[i] > 0)
		{
			if (number[i] % 10 != 0)
			{
			a[count] = (number[i] % 10)*pow(10,t);
			count = count + 1;
			}
			number[i] = number[i] / 10;
			t = t + 1;
		}
		cout << count << endl;
		if(t!=count)
		{
			cout << a[count - 1] << " ";
			for (int j = 0; j < count-1; j++)
			{
				cout << a[j] << " ";
			}
		}
		else
		{
			for (int j = count -2; j > -1; j--)
			{
				cout << a[j] << " ";
			}
			cout << a[count - 1] << " ";
		}
		cout << endl;
	}
}