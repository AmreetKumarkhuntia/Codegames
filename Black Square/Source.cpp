#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	int a[4];
	for (size_t i = 0; i < 4; i++)
	{
		cin >> a[i];
	}
	string str;
	cin >> str;
	int sum = 0;
	int length = str.length();
	for(int i=0;i<length;i++)
	{
		char c = str.at(i);
		int t = c- 48;
		sum = sum + a[t-1];
	}
	cout << sum;
	return 0;
}