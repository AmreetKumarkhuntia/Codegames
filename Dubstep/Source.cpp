#include<iostream>
#include<string>

using namespace std;

int main(void) {
	string ar;
	cin >> ar;
	string original_song;
	int length = ar.length();
	char top;
	for (int i = 0; i < length; i++)
	{
		bool itswub = false;
		if (ar.at(i) == 'W' && i < length-2) {
			if (ar.at(i + 1) == 'U' && ar.at(i + 2) == 'B') {
				itswub = true;
				original_song.push_back(32);
			}
			else
			{
				original_song.push_back(ar.at(i));
			}
		}
		else
		{
			original_song.push_back(ar.at(i));
		}
		if (itswub) {
			i = i + 2;
		}
	}
	for (int i = 0; i < original_song.size(); i++)
	{
		if (original_song[i] == 32 && (i + 1) != original_song.size()) {
			if (original_song[i + 1] != 32) {
				cout << original_song[i];
			}
		}
		else
		{
			cout << original_song[i];
		}
	}

	return 0;
}