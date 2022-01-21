#include<iostream>
using namespace std;
int main(void) {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int A, B, C;
		char max;
		int max_int;
		cin >> A >> B >> C;
		if (A > B) {
			if (A > C) {
				max = 'A';
				max_int = A;
			}
			else
			{
				max = 'C';
				max_int = C;
			}
		}
		else
		{
			if (B > C)
			{
				max = 'B';
				max_int = B;
			}
			else
			{
				max = 'C';
				max_int = C;
			}
		}
		if (max_int <= 50)
			cout << "NOTA" << endl;
		else
		{
			cout << max<<endl;
		}
	}
	return 0;
}