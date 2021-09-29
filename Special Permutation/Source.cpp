#include<iostream>
using namespace std;
int main(void) {
	int testcases;
	cin >> testcases;
	for (int testcase = 0; testcase < testcases; testcase++)
	{
		int n;
		cin >> n;
		for (int i = 2; i <= n; i++)
			cout << i <<" ";
		cout << 1 << endl;
	}
	return 0;
}