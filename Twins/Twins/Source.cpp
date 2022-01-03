#include<iostream>
using namespace std;
int main(void) {
	int n, sum_all=0;
	cin >> n;
	int* ar_coins = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ar_coins[i];
		sum_all = sum_all + ar_coins[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) {
			if (ar_coins[j] > ar_coins[i]) {
				int t = ar_coins[j];
				ar_coins[j] = ar_coins[i];
				ar_coins[i] = t;
			}
		}
	}
	int coins=0,sum2=0;
	for (int i = 0; i < n; i++)
	{
		sum2 = sum2 + ar_coins[i];
		sum_all = sum_all - ar_coins[i];
		coins++;
		if (sum2 > sum_all)
			break;
	}
	cout << coins;
	return 0;
}