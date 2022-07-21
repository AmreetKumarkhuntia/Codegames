#include<iostream>
#include<vector>

using namespace std;

void solution(void) {
	int n, s = 0, i = 0,N;
	cin >> n;
	N = n;
	n = n / 2;
	while (n>0)
	{
		s = s + pow(2, i);
		i++;
		n=n / 2;
	}
	int p = pow(2, i - 1);
	cout << max(N-s,p) << endl;
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