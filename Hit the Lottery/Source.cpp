#include<iostream>
using namespace std;
int main()
{
	int money,bills=0;
	cin >> money;
	int cur[5] = { 1,5,10,20,100 };
	int t = money;
	for (size_t i = 0; i < 5; i++)
	{
		bills = bills + t / cur[4-i];
		t = t % cur[4-i];
	}
	cout << bills;
	return 0;
}