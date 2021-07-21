#include<iostream>
#include<cstring>
using namespace std;
class check {
public:
	int n;
	char* c = new char[n];
};
int main()
{
	check sub_1;
	cin >> sub_1.n;
	cin >> sub_1.c;
	int a = 0;
	if (sub_1.n >= 26)
	{
		for (int i = 0; i < sub_1.n; i++)
		{
			int t = 0;
			for (int j = i + 1; j < sub_1.n; j++)
			{
				if(sub_1.c[i]<96)
					sub_1.c[i] = tolower(sub_1.c[i]);
				if(sub_1.c[j]<96)
					sub_1.c[j] = tolower(sub_1.c[j]);
				if (sub_1.c[i] == sub_1.c[j])
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