#include<iostream>

using namespace std;

void solution(void) {
	int sum = 0;
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	sum = a - c + b - d;

	if (sum % 2 == 0) {
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
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