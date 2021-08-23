#include<iostream>
using namespace std;
int main() {
	int number;
	cin >> number;
	cout << number / 2 <<endl;
	if (number % 2 == 0)
	{
		for (size_t i = 0; i < number/2; i++)
		{
			cout << 2 << " ";
		}

	}
	else
	{
		for (size_t i = 0; i < number / 2 - 1; i++)
		{
			cout << 2 << " ";
		}
		cout << 3;
	}
}