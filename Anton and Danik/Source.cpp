#include<iostream>
int main()
{
	int n,Danik=0,Anton=0;
	std::cin >> n;
	char a[100001];
	std::cin >> a;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 'D')
		{
			Danik = Danik + 1;
		}
		else
			Anton = Anton + 1;
	}
	if (Anton > Danik)
		std::cout << "Anton";
	else if (Danik > Anton)
		std::cout << "Danik";
	else
		std::cout << "Friendship";
}