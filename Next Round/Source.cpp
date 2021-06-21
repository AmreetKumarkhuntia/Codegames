#include<iostream>
int main()
{
	int participants, pass_score;						// declaration
	std::cout << "Enter the no. of participants : ";	//output print
	std::cin >> participants;							//input of no. of participants
	std::cout << "Enter the cut off score : ";			//print
	std::cin >> pass_score;								//input of no. of cut off score
	int* score = new int(participants);					//dynamic array declaration
	std::cout << "Enter the marks in descending order : \n";
	int pass=0;
	for (int i = 0; i < participants; i++)
	{
		std::cin >> score[i];
		if (score[i] > pass_score)
		{
			pass = pass + 1;
		}
	}
	std::cout << "No. of pass paricipants : " << pass;
	
}