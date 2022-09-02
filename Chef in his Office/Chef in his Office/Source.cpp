#include<iostream>
#include<vector>

using namespace std;

void solution(void) {
	int x, y;
	cin >> x >> y;

	cout << (x * 4) + y << endl;

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