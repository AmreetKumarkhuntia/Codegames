#include<iostream>
#include<vector>
using namespace std;
int main(){
	int length, max = 0;
	cin >> length;
	vector<int> part;
	for (size_t i = 0; i < length; i++)
	{
		int t;
		cin >> t;
		part.push_back(t);
		if (max < t)
			max = t;
	}
	int value = 0;
	for (size_t i = 0; i < length; i++)
	{
		value = value + max - part.at(i);
	}
	cout << value;
	return 0;
}