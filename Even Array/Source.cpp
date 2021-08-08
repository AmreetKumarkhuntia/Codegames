#include<iostream>
using namespace std;
int main()
{
	int length;
	cin >> length;
	for (size_t i = 0; i < length; i++)
	{
		int n,ev=0,od=0;
		cin >> n;
		int* ar = new int[n];
		for (size_t j = 0; j < n; j++)
		{
			cin >> ar[j];
			if ((j % 2) != (ar[j] % 2))
			{
				if (ar[j] % 2 == 0)
					ev = ev + 1;
				else
					od++;
			}
		}
		if (ev == od)
			cout << ev;
		else
			cout << -1;
		cout << endl;
	}
}