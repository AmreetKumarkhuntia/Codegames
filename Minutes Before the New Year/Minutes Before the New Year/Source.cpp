#include<iostream>
#include<vector>
using namespace std;
int minutes(int h, int m) {
	return (23 - h) * 60 + 60 - m;
}

int main(void) {
	int length;
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		int h, m;
		cin >> h >> m;
		cout << minutes(h, m);
	}
	return 0;
}