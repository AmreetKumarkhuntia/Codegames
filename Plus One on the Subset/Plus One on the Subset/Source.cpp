#include<iostream>
using namespace std;
void calsteps(void) {
	int size;
	cin >> size;
	int max = 0, min;
	for (int i = 0; i < size; i++)
	{
		int temp;
		cin >> temp;
		if (temp > max) {
			max = temp;
		}
		if (i == 0) {
			min = temp;
		}
		if (min > temp) {
			min = temp;
		}
	}
	cout << max - min << endl;
}
int main(void) {
	int testcases;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		calsteps();
	}
	return 0;
}