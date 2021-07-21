#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char c[1000],b[1000];
	cin.getline(c,'$');
	int length = strlen(c),t=0; 
	for (size_t i = 0; i < length; i++)
	{
		if (97 <= c[i] && c[i] <= 122)
		{
			b[t] = c[i];
			int s = c[i];
			t = t + 1;
		}
	}
	length = t;
	int un = 0;
	for (size_t i = 0; i < length; i++)
	{
		int tr = 0;
		for (size_t j = i+1; j < length; j++)
		{
			if (b[i] == b[j])
			{
				tr = 1;
				break;
			}
		}
		if (tr == 0)
		{
			un = un + 1;
			
		}
	}
	cout << un;
}