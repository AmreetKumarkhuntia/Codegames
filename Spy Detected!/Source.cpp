#include<iostream>
#include<vector>
using namespace std;
void main(void) {
	int testcases_length;
	cin >> testcases_length;
	for (size_t testcase = 0; testcase < testcases_length; testcase++)
	{
		int ar_length;
		cin >> ar_length;
		vector<int> array;
		for (size_t i = 0; i < ar_length; i++)
		{
			int t;
			cin >> t;
			array.push_back(t);
		}
		int same;
		if (array[0] == array[1])
			same = array[0];
		else if (array[1] == array[2])
			same = array[1];
		else
			same = array[0];
		for (size_t i = 0; i < array.size(); i++)
		{
			if (array[i] != same)
			{
				cout << i + 1 << endl;
				break;
			}
		}
	}
}