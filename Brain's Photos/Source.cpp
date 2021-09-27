#include<iostream>
using namespace std;
int main(void) {
	int n, m;
	cin >> n >> m;
	n = n * m;
	char* photo = new char[n];
	for (int i = 0; i < n; i++)
	{
		cin >> photo[i];
	}
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		if (photo[i] != 'B')
		{
			if (photo[i] != 'W')
			{
				if (photo[i] != 'G')
				{
					flag = 1;
					break;
				}
			}
		}
	}
	if (flag == 1)
		cout << "#Color";
	else
		cout << "#Black&White";
	return 0;
}