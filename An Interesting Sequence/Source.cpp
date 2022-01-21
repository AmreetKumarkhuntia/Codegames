#include<iostream>
#include<vector>
using namespace std;

void interesting(void) {
	int64_t k;
	cin >> k;
	vector<int64_t> arr;
	k--;
	int64_t i=1;
	bool nomoredivisible=1;
	arr.push_back(1);
	i++;
	k = k - 1;
	while (nomoredivisible){
		if (k >= 2 * (i+1)) {
			arr.push_back(i);
			k = k - i;
		}
		else
		{
			arr.push_back(k);
			nomoredivisible = 0;
		}
		i++;
	}
	int t = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		t = t + arr[i];
		cout << arr[i] << endl;
	}
}
int main(void) {
	int testcases;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		interesting();
	}
	return 0;
}