#include<iostream>
#include<vector>
using namespace std;

vector<int> sort(vector<int> B) {
	for (int i = 0; i < B.size(); i++)
	{
		for (int j = i + 1; j < B.size(); j++) {
			if (B[i] > B[j]) {
				int t = B[i];
				B[i] = B[j];
				B[j] = t;
			}
		}
	}
	return B;
}

int main(void) {
	int testcases;
	cin >> testcases;
	for (int i = 0; i < testcases; i++)
	{
		int n;
		cin >> n;
		vector<int> A;
		for (int i = 0; i < n; i++)
		{
			int temp;
			cin >> temp;
			A.push_back(temp);
		}
		vector<int> B;
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				int temp = A[i] & A[j];
				B.push_back(temp);
			}
		}
		B = sort(B);
		while (B.size() > 1) {
			int t_length = B.size();
			int low = B[0];
			int high = B[t_length - 1];
			int repl = low | high;
			for (int i = 0; i < t_length - 1; i++)
			{
				B[i] = B[i + 1];
			}
			B.pop_back();
			B.pop_back();
			B.push_back(repl);
			B = sort(B);
		}
		cout << B[0] <<endl;
	}
	return 0;
}