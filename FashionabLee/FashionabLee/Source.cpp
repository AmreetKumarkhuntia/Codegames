#include<iostream>
using namespace std;
int main(void) {
	int testcase;
	cin >> testcase;
	for (int i = 0; i < testcase; i++)
	{
		int temp;
		cin >> temp;
		if (temp % 2 == 0) {
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO"<<endl;
		}
	}
	return 0;
}