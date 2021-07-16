#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float n,sum=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		sum = sum + t;
	}
	sum = sum / n;
	cout <<setprecision(12)<< sum;
}