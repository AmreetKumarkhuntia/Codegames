#include<iostream>
using namespace std;
int main(void) {
	int length;
	cin >> length;
	for (size_t i = 0; i < length; i++)
	{
		int x, y, n;
		cin >> x >> y >> n;
		int k = n;
		k = (k / x) * x + y;
		if (k>n)
		{
			k = k - x;
		}
		cout << k << endl;
	}
	return 0;
}