#include<iostream>
using namespace std;
int main() 
{
	double a[4],l=0,length=4;
	for (size_t i = 0; i < 4; i++)
		cin >> a[i];
	for (size_t i = 0; i < length; i++)
	{
		int tr = 0;
		for (size_t j = i+1; j < length; j++)
		{
			if (a[i] == a[j])
			{
				tr = 1;
				break;
			}
		}
		if (tr == 0)
			l = l + 1;
	}
	cout << 4-l;
	return 0;
}