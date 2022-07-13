#include<iostream>
#include<vector>

using namespace std;

void solution(void) {
	int t, n, s;
	unsigned long long int sum = 0;
	cin >> t >> n >> s;
	while (t > 0) {
		if (s > n) {
			sum = sum + pow(n, 2);
			s = s - n;
		}
		else {
			sum = sum + pow(s, 2);
			s = 0;
		}
		if (s == 0)
			break;
		t--;
	}
	cout << sum << endl;
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