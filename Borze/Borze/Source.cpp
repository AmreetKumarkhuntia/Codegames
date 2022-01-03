#include<iostream>
#include<vector>
using namespace std;
int main(void) {
	string arr;
	vector<int> code;
	cin >> arr;
	int length = arr.length();
	for (int i = 0; i < length; i++)
	{
		char t = arr.at(i);
		if (t == '.') {
			code.push_back(0);
		}
		else {
			if (arr.at(i+1) == '.') {
				code.push_back(1);
			}
			else {
				code.push_back(2);
			}
				i++;
		}
	}
	for (int i = 0; i < code.size(); i++)
	{
		cout << code[i];
	}
	return 0;
}