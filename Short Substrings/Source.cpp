#include<iostream>
using namespace std;
int main()
{
	int length;
	cin >> length;
	string* b = new string[length];
	for (size_t i = 0; i < length; i++)
	{
		char temp[101];
		cin >> temp;
		int size = strlen(temp);
		int sub_len = size / 2 + 1, k = 1;
		char* sub_s = new char[sub_len];
		sub_s[0] = temp[0];
		for (size_t j = 1; j < size - 1; j = j + 2)
		{
			sub_s[k] = temp[j];
			k = k + 1;
		}
		sub_s[sub_len - 1] = temp[size - 1];
		for (int j = 0; j < sub_len; j++)
			cout << sub_s[j];
		cout << endl;
	}
	return 0;
}