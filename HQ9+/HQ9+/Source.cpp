#include<iostream>
#include<string>
using namespace std;
int main(void) {
	string word;
	cin >> word;
	int length = word.length();
	bool truthvalue=0;
	for (int i = 0; i < length; i++)
	{
		char t = word.at(i);
		if (t == 'H' || t == 'Q' || t == '9' ) {
			truthvalue = 1;
			break;
		}
		else
		{
			truthvalue = 0;
		}
	}
	if (truthvalue) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}