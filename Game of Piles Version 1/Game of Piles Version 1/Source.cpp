#include<iostream>Z

using namespace std;

void solution(void) {
	int n, t, mini, sum = 0;
	mini = INT_MAX;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> t;
		sum = sum + t - 2;
		mini = min(mini, t);
	}

	if (mini == 1) {
		cout << "CHEF" << endl;
		return;
	}

	if (sum % 2 == 0) {
		cout << "CHEFINA" << endl;
	}
	else {
		cout << "CHEF" << endl;
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