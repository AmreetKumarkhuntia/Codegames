#include<iostream>
using namespace std;
int main(void) {
	int y, w, high;
	cin >> y >> w;
	if (y >= w)
		high = y;
	else
		high = w;
	int num = 7 - high, den = 6;
	int common_div;
	for (int i = 1; i <= 6; i++)
	{
		if (den % i == 0 && num % i == 0) {
			common_div = i;
		}
	}
	cout << num/common_div<<"/"<<den/common_div;
	return 0;
}