#include<iostream>
using namespace std;
void clean(void) {
	int n, m, rb, cb, rd, cd;
	int t = 0;
	cin >> n >> m >> rb >> cb >> rd >> cd;
	int row = 1, col = 1;
	while (rb!=rd&&cb!=cd)
	{
		if(rb==n){
			row = - 1;
		}
		if(rb==1)
		{
			row = 1;
		}
		if (cb == m) {
			col = -1;
		}
		if (cb == 1)
		{
			col = 1;
		}
		rb = rb + row;
		cb = cb + col;
		t++;
	}
	cout << t << endl;
}
int main(void) {
	int length;
	cin >> length;
	for (int i = 0; i < length; i++)
	{
	clean();
	}
	return 0;
}