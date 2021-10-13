#include<iostream>
using namespace std;
int main(void) {
	int length;
	cin >> length;
	for (int testcase = 0; testcase < length; testcase++)
	{
		int n, m;
		cin >> n >> m;
		int d = n * m;
		int lat = d / 2;
		if(d%2!=0)
			lat = lat + 1;
		cout << lat << endl;
	}
	return 0;
}