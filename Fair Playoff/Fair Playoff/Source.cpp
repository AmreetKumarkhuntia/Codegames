#include<iostream>
#include<vector>
using namespace std;
void fairplay(void) {
	vector<int> temp_arr;
	vector<int> arr;
	for (int i = 0; i < 4; i++)
	{
		int temp;
		cin >> temp;
		arr.push_back(temp);
		temp_arr.push_back(temp);
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = i; j < 4; j++) {
			if (temp_arr[j] < temp_arr[i]) {
				int t=temp_arr[j];
				temp_arr[j] = temp_arr[i];
				temp_arr[i] = t;
			}
		}
	}
	int sum_high=0;
	if (arr[0] > arr[1])
		sum_high = sum_high + arr[0];
	else
		sum_high = sum_high + arr[1];
	if (arr[2] > arr[3])
		sum_high = sum_high + arr[2];
	else
		sum_high = sum_high + arr[3];

	if (sum_high == (temp_arr[2] + temp_arr[3])) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	cout << endl;
}

int main(void) {
	int length;
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		fairplay();
	}
	return 0;
}