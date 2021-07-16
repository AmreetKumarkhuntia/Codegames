#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int t = n / 2;
	int s = 0;
	if (n % 2 != 0)
		s = t - n;
	else
		s = t;
	cout << s;
}