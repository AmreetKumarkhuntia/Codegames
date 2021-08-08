#include<iostream>
#include<vector>
void popin(int k,int l);
using namespace std;
vector<int> subject1;
vector<int> subject2;
vector<int> subject3;
int si = 0, sj = 0, sk = 0;
int main() {
	int length;
	int min;
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		int k;
		cin >> k;
		popin(k,i+1);
	}
	if (si<sj)
	{
		if (si < sk)
		{
			min = si;
		}
		else
		{
			min = sk;
		}
	}
	else if(sj<sk)
	{
		min = sj;
	}
	else
	{
		min =sk;
	}
	cout << min << endl;
	for (size_t i = 0; i < min; i++)
	{
		cout << subject1[i] << " " << subject2[i] << " " << subject3[i]<< " ";
		cout << endl;
	}
	return 0;
}
void popin(int k,int l)
{
	if (k == 1) {
		subject1.push_back(l);
		si++;
	}
	else if (k == 2) {

		subject2.push_back(l);
		sj++;
	}
	else {
		subject3.push_back(l);
		sk++;
	}
}