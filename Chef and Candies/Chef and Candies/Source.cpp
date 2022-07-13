#include<iostream>
#include<vector>

using namespace std;

void solution(void) {
	int n, x;
	cin >> n >> x;
	int t = n - x;
	if (t <= 0) {
		cout << 0 << endl;
	}
	else {
		if (t % 4 == 0)
			cout << t / 4 << endl;
		else
			cout << t / 4 + 1 << endl;
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