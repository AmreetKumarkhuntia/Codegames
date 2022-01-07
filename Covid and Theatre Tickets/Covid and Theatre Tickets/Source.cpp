#include<iostream>
using namespace std;

void cout_tickets(void) {
	int row, col;
	cin >> row >> col;
	int seats_in_one_row;
	if (col % 2 == 0)
		seats_in_one_row = col / 2;
	else
		seats_in_one_row = col / 2 + 1;
	int possible_rows;
	if(row%2==0){
		possible_rows = row / 2;
	}
	else
	{
		possible_rows = row / 2 + 1;
	}
	int tickets = possible_rows * seats_in_one_row;
	cout << tickets << endl;
}
int main(void) {
	int testcases;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
	cout_tickets();
	}

	return 0;
}