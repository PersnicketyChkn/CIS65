#include "sorted.h"
#include <iostream>

int main()
{
	SortedType Roster;
	std::ifstream input;
	input.open("StudentRoster.txt");
	int ID;
	std::string Name;
	while(input >> ID)
	{
		input >> Name;
		ItemType student(ID, Name);
		Roster.PutItem(student);
	}
	Roster.ResetList();
	for(int i = 0; i < Roster.GetLength(); i++)
	{
		ItemType temp = Roster.GetNextItem();
		temp.Print(std::cout);
	}

	return 0;
}