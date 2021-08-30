#include<iostream>
#include<vector>
using namespace std;
void main(void)
{
	int testcases;
	cin >> testcases;
	for (size_t testcase = 0; testcase < testcases; testcase++)
	{
		int length;
		vector<int> str;
		cin >> length;
		length = length + length;
		int* arr = new int[length];
		for (size_t i = 0; i < length; i++)
		{
			cin >> arr[i];
		}
		str.push_back(arr[0]);
		int l = str.size();
		for (size_t i = 1; i < length; i++)
		{
			int flag = 0;
			for (size_t j = 0; j < l; j++)
			{
				if (arr[i] == str[j])
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				str.push_back(arr[i]);
				l++;
			}
		}
		for (size_t i = 0; i < l; i++)
		{
			cout << str[i] << " ";
		}
		cout << endl;
	}
}