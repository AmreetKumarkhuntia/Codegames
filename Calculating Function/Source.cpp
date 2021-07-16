#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	double n;
	cin >> n;
	double t = n / 2;
	t = t - fmod(t, 1);
	double l = 0;
	double temp = fmod(n,2);
	if (temp!=0)
		l = t - n;
	else
		l = t;
	cout <<fixed<<setprecision(0)<< l;
}