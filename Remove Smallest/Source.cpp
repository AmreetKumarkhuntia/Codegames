#include<iostream>
using namespace std;
int main()
{
	int length;
	cin >> length;
	int* tr = new int[length];
	for (size_t i = 0; i < length; i++)
	{
		int k;
		cin >> k;
		int* p = new int[k];
		for (size_t j = 0; j < k; j++)
			cin >> p[j];
		for (int j = 0; j < k; j++)
		{
			for (int l = j; l < k; l++)
			{
				if (p[j] < p[l])
				{
					int temp = p[j];
					p[j] = p[l];
					p[l] = temp;
				}
			}
		}
		if(k>=2)
		{
			for (int j = 0; j < k-1; j++)
			{
				int t = p[j] - p[j+1];
				if (t > 1)
				{
					tr[i] = 0;
					break;
				}
				else if (t < -1)
				{
					tr[i] = 0;
					break;
				}
				else
				{
					//cout << j << " " << l << " " << i << endl;
					tr[i] = 1;
				}
				
			}
		}
		else
		{
			tr[i] = 1;
		}
	}
	for (size_t i = 0; i < length; i++)
	{
		if (tr[i] == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;

}