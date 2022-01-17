#include<iostream>
#include<string>

using namespace std;
int main(void) {
	string arr, arr2;
	cin >> arr;
	int length = arr.length();
	arr2 = arr;
	if (arr[0] == '-')
	{
		if (arr[length - 2] < arr[length - 1]) {
			arr2.pop_back();
		}
		else
		{
			char t = arr[length - 1];
			for (int i = 0; i < 2; i++)
			{
				arr2.pop_back();
			}
			arr2.push_back(t);
		}
	}
	cout << stoi(arr2);
	return 0;
}