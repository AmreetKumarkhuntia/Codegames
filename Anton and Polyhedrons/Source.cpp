#include<iostream>
#include<string>
using namespace std;
int main()
{
	int length, faces = 0;
	cin >> length;
	for (size_t i = 0; i < length; i++)
	{
		string s;
		cin >> s;
		if (s == "Tetrahedron")
			faces = faces + 4;
		else if (s == "Cube")
			faces = faces + 6;
		else if (s == "Octahedron")
			faces = faces + 8;
		else if (s == "Dodecahedron")
			faces = faces + 12;
		else
			faces = faces + 20;
	}
	cout << faces;
	return 0;
}