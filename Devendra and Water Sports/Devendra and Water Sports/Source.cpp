#include<iostream>
using namespace std;
int main(void) {
	int testcases;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		int Z, Y, A, B, C;
		cin >> Z >> Y >> A >> B >> C;
		int total = A + B + C;
		int diff = Z - Y;
		if (diff >= total) {
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
		cout << endl;
	}
}