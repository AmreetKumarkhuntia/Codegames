#include<iostream>
using namespace std;
int main()
{
	int length, unnoticed_events = 0, recruit = 0;
	cin >> length;
	for (size_t i = 0; i < length; i++)
	{
		int event;
		if (recruit < 0)
			recruit = 0;
		cin >> event;
		if (event > 0)
		{
			recruit = recruit + event;
		}
		else
		{
			if (recruit <= 0)
			{
				unnoticed_events = unnoticed_events + 1;
				recruit = recruit - 1;
			}
			else
			{
				recruit = recruit - 1;
			}
		}
	}
	cout << unnoticed_events;
}