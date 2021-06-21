#include<iostream>
int main()
{
	int m, n, squares;													//declaration
	std::cout << "Enter the no. of rows and columns respectivly : ";		
	std::cin >> m >> n;													//taking inputs
	squares = (m*n) / 2;												//calculation
	printf("No. of squares covered = %d",squares);
}