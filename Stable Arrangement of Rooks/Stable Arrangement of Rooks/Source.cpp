#include<iostream>
using namespace std;
void checkers(void) {
	int n, k, check;
	bool truth_val = 1;
	cin >> n >> k;
	if (n % 2 == 0) {
		check = n / 2;
	}
	else
		check = n / 2 + 1;
	if (k > check) {
		cout << -1<<endl;
		truth_val = 0;
	}
	int row = n, col = n;
	int no = k;
	if (truth_val == 1) {
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == j && i%2==0 && no!=0) {
					cout << "R";
					no--;
				}
				else {
					cout << ".";
				}
			}
			cout << endl;
		}
	}
}
int main(void) {
	int testcases;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		checkers();	
	}
	return 0;
}