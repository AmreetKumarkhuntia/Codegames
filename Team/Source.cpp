#include<iostream>
int main()
{
	int questions;
	std::cout << "Enter the no. of questions : ";
	std::cin >> questions ;
	int *truevalue = new int(questions); // dynamic variable declartaion
	int solutions=0;
	std::cout << "Enter the surity (0 for no and 1 for yes) \n";
	for (int i = 0; i < questions; i++)
	{
		int t[3],sum=0;
		std::cout << "For "<<i+1<<" question :\n ";
		for (int j = 0; j < 3; j++)
		{
			std::cin >> t[j];
			sum = t[j] + sum;
		}
		if (sum >= 2)
		{
			solutions = solutions + 1;
		}
	}
	printf("No. of known solutions = %d",solutions);
}