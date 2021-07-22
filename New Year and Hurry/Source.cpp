#include<iostream>
using namespace std;
int main()
{
	int n, k, ques = 0;
	cin >> n >> k;
	int time = 240 - k;
	int i = 1;
	while (time > 0 && (time - 5 * i)>=0)
	{
		ques = ques + 1;
		time = time - 5 * i;
		i = i + 1;
	}
	if(ques>n)
		cout << n;
	else
		cout << ques;
	return 0;
}