#include<iostream>
using namespace std;
int main(void)
{
	int testcase;
	cin >> testcase;
	for (int test = 0; test < testcase; test++)
	{
		int card=1;
		int w, h, n;
		cin >> w >> h >> n;
		while (w%2==0)
		{
			w = w / 2;
			card = card * 2;
		}
		while (h % 2 == 0)
		{
			h = h / 2;
			card = card * 2;
		}
		if (card >= n)
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
	return 0;
}