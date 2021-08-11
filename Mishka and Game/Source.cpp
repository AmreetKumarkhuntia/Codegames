#include<iostream>
using namespace std;
int main(void)
{
	int testcase;
	cin >> testcase;
	int mishka = 0, chris = 0;
	for (size_t i = 0; i < testcase; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a > b)
			mishka = mishka + 1;
		if (b > a)
			chris = chris + 1;
	}
		if (mishka > chris)
			cout << "Mishka";
		else if (chris > mishka)
			cout << "Chris";
		else
			cout << "Friendship is magic!^^";
		cout << endl;
	return 0;
}