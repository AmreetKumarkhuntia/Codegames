#include<iostream>
#include<algorithm>
using namespace std;
int main(void) {
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int milkperperson = (k * l) / nl;
	int sliceperperson = c * d;
	int amountofsalt = p / np;
	cout << min(min(milkperperson/n, sliceperperson/n),amountofsalt/n);
	return 0;
}