#include<iostream>
#include<vector>

using namespace std;

void solution(void) {
	int a, b, n;
	
	cin >> a >> b >> n;

	if (a % b == 0) {
		cout << -1 << endl;
		return;
	}

	int div = n / a;
	long long t = (div + 1) * a;
	if (n % a == 0) {
		t = n;
	}

	while (t % b == 0) {
		t = t + a;
	}

	cout << t << endl;
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