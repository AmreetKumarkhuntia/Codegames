#include<iostream>
#include<math.h>
using namespace std;
void ordinary_numbers(int no) {
	int nos = 0;
	int temp_no = no;
	int length = 0;
	while (temp_no > 0) {
		temp_no = temp_no / 10;
		length++;
	}
	nos = 9 * (length - 1);
	for (int i = 0; i < length; i++)
	{
		int multiplier = (no / pow(10, length - 1));
		temp_no = temp_no + multiplier*(pow(10, i));
	}
	if (temp_no > no) {
		nos = nos + (no / pow(10, length - 1)) - 1;
	}
	else {
		nos = nos + (no / pow(10, length - 1)) ;
	}
	cout << nos<<endl;
}
int main(void) {
	int testcases,temp;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
	cin >> temp;
	ordinary_numbers(temp);
	}
	return 0;
}