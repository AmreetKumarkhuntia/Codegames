#include<iostream>
using namespace std;
int main(void) {
	int employees, methods = 0;
	cin >> employees;
	int half_employee = employees / 2;
	for (int i = 1; i <= half_employee; i++)
	{
		if ((employees - i) % i == 0) {
			methods = methods+ 1;
		}
	}
	cout << methods;
	return 0;
}