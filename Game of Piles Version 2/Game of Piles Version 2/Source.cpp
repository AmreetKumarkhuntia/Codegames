#include<iostream>

using namespace std;

void solution(void) {
	int n, t, freq = 0;
	long long sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> t;
		sum = sum + t - 1;
		if (t == 1) {
			freq++;
		}
	}
	if (freq>=2)
	{
		if (sum % 2 == 0) {
			cout << "CHEFINA" << endl;
		}
		else {
			cout << "CHEF" << endl;
		}
	}
	else if(freq==1) {
		if (sum % 2 == 0) {
			sum = sum - (n - 1) * 1;
			if (sum % 2 == 0)
				cout << "CHEF" << endl;
			else
				cout << "CHEFINA" << endl;
		}
		else {
			cout << "CHEF" << endl;
		}
	}
	else
	{
		if (sum % 2 == 1) {
			if (n % 2 == 0) {
				cout << "CHEF" << endl;
			}
			else
			{
				cout << "CHEFINA" << endl;
			}
		}
		else {
			if (n % 2 == 0) {
				cout << "CHEFINA" << endl;
			}
			else
			{
				cout << "CHEF" << endl;
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t > 0) {
		solution();
		t--;
	}


	return 0;
}