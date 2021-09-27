#include<iostream>
using namespace std;
int main(void) {
	int testcases;
	cin >> testcases;
	for (int testcase = 0; testcase < testcases; testcase++)
	{
		int length, i = 0;
		cin >> length;
		while (length > 0) {
			i++;
			bool flag;
			if (i % 3 == 0)
				flag = 1;
			else if (i % 10 == 3)
				flag = 1;
			else
				flag = 0;
			if (flag == 0)
			{
				length--;
			}
		}
		cout << i << endl;
	}
	return 0;
}