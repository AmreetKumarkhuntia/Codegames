#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char* c = new char[n];
	cin >> c;
	int a = 0;
	if (n >= 26)
	{
		for (int i = 0; i < n; i++)
		{
			int t = 0;
			for (int j = i + 1; j < n; j++)
			{
				if(c[i]<96)
					c[i] = tolower(c[i]);
				if(c[j]<96)
					c[j] = tolower(c[j]);
				if (c[i] == c[j])
				{
					t = 1;
					break;
				}
			}
			if (t == 0)
			{
				a = a + 1;
			}
		}
	}
	if (a == 26)
		cout << "YES";
	else
		cout << "NO";
	return 0;
	
}