#include<iostream>
using namespace std;
void gold_coins(void) {
	int n, xs, ys;
	cin >> n >> xs >> ys;
	int gold_coins = 0;
	int center = (n + 1) / 2;
	while (xs!=center||ys!=center)
	{
		int diff;
		diff = abs(center - xs) + abs(center - ys);
		if (diff > 1) {
			if (xs > center) {
				xs--;
			}
			else
			{
				xs++;
			}

			if (ys > center) {
				ys--;
			}
			else
			{
				ys++;
			}

		}
		else if(xs!=center) {
			if (xs > center) {
				xs--;
			}
			else
			{
				xs++;
			}
			gold_coins++;
		}
		else
		{
			if (ys > center) {
				ys--;
			}
			else
			{
				ys++;
			}
			gold_coins++;
		}
	}
	cout << gold_coins << endl;
}
int main(void) {
	int testcases;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		gold_coins();
	}
	return 0;
}
