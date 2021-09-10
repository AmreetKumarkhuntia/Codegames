#include<iostream>
using namespace std;
int main(void)
{
	int cards;
	cin >> cards;
	int* arr_cards = new int[cards];
	for (size_t i = 0; i < cards; i++)
	{
		cin>>arr_cards[i];
	}
	int sum1 = 0, sum2 = 0, flag = cards;
	int left = 0, right = cards - 1;
	bool turn = 0;
	while (flag>0)
	{
		if (turn == 0)
		{
			if (arr_cards[right] >= arr_cards[left]) {
				sum1 = sum1 + arr_cards[right];
				right = right - 1;
			}
			else
			{
				sum1 = sum1 + arr_cards[left];
				left = left - 1;
			}
			turn = 1;
		}
		else
		{
			if (arr_cards[right] >= arr_cards[left]) {
				sum2 = sum2 + arr_cards[right];
				right = right - 1;
			}
			else
			{
				sum2 = sum2 + arr_cards[left];
				left = left - 1;
			}
			turn = 0;
			
		}
		flag = flag - 1;
	}

	if(sum2<=sum1)
		cout << sum1 << " " << sum2;
	else
		cout << sum2 << " " << sum1;
	return 0;
}