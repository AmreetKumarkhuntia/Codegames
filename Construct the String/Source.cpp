#include<iostream>
#include<vector>
#include<string>
using namespace std;

int minimum(int a, int b) {
	return a < b ? a : b;
}

void construct(void) {
	int n, a, b;
	cin >> n >> a >> b;
	vector<char> char_array;
	for (int i = 0; i < b; i++)
	{
		char_array.push_back(97 + i);
	}
	string constructed;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < minimum(a,b); j++) {
			constructed.push_back(char_array[j]);
			if (i==n-1)
			{
				break;
			}
			j == minimum(a, b)-1 ? 0 : i++;
		}
	}
	cout << constructed << endl;
}

int main(void) {
	int testcases;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		construct();
	}
	return 0;
}