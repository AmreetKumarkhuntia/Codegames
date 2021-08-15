#include<iostream>
using namespace std;
int main(void)
{
	int testcase;
	cin >> testcase;
	for (size_t test = 0; test < testcase; test++)
	{
		int arr_length;
		cin >> arr_length;
		char* array = new char[arr_length];
		for (size_t i = 0; i < arr_length; i++)
		{
			cin >> array[i];
		}
		int flag = 0;
		for (size_t i = 0; i < arr_length; i++)
		{
			int t = 0;
			for (int j = i + 1; j < arr_length; j++)
			{
				if (array[j] != array[i])
				{
					t = 1;
				}
				else
				{
					break;
				}
				if (j == (arr_length - 1))
				{
					if (array[j]!=array[i])
					{
						t = 0;
					}
				}
			}
			if (t == 1)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			cout << "NO";
		else
			cout << "YES";
		cout << endl;
	}
	return 0;
}