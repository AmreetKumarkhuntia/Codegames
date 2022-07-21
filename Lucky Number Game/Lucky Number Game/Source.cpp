#include<iostream>

using namespace std;

void solution(void) {
	int n, a, b, t;
	cin >> n >> a >> b;
	
	int bob = 0, alice = 0, common = 0;
	for (int i = 0; i < n; i++) {
		cin >> t;
		if (t % a == 0 && t % b == 0) {
			common++;
		}
		else {
			if (t % a == 0) {
				bob++;
			}
			if (t % b == 0) {
				alice++;
			}
		}
	}
	if (common % 2 == 1) {
		bob += common / 2 + 1;
	}
	else {
		bob += common / 2;
	}
	alice = alice + common / 2;
	
	if (!common) {
		if (bob <= alice) {
			cout << "ALICE" << endl;
		}
		else
		{
			cout << "BOB" << endl;
		}
	}
	else {
		if(bob < alice) {
			cout << "ALICE" << endl;
		}
		else
		{
		cout << "BOB" << endl;
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