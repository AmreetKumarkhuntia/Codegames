#include<iostream>
using namespace std;
int main(void) {
	int length;
	cin >> length;
	for (int i = 0; i < length; i++)
	{
	int a, b, c, n;
	cin >> a >> b >> c >> n;
	int smallest;
	bool flagequal = 0;
	if (a > b)
	{
		if (c > a)
			smallest = c;
		else
			smallest = a;
	}
	else if (b > c)
		smallest = b;
	else if (c > b)
		smallest = c;
	else {
		flagequal = 1;
		smallest = a;
	}
	int diff = ((smallest * 3)-a-b-c);
	if (n >= diff) {
		n = n - diff;
		if (n % 3 == 0)
			cout << "YES";
		else
			cout << "NO";
	}
	else
	{
		cout << "NO";
	}
	cout << endl;
	}
	return 0;
}