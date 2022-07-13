#include<iostream>
#include<vector>

using namespace std;

void solution(void) {
	bool pass;
	int t, sum = 0;

	for (int i = 0; i < 3; i++) {
		cin >> t;
		if (t < 10) {
			pass = 0;
		}
		sum = sum + t;
	}
	if (sum < 100&&!pass) {
		cout << "FAIL"<<endl;
	}
	else {
		cout << "PASS"<<endl;
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