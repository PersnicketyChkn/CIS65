#include <iostream>
#include "sorted.h"

int main()
{
	SortedType sortedList;
	ItemType num;

	//put 4 into the list
	num.Initialize(4);
	sortedList.PutItem(num);
	std::cout << "Put item: ";
	num.Print(std::cout);
	std::cout << '\n';

	//get 4 from the list
	bool found;
	sortedList.GetItem(num, found);
	if (found)
	{
		std::cout << "Found: ";
		num.Print(std::cout);
		std::cout << '\n';
	}
	else
	{
		std::cout << "Item was not in list.\n";
	}
	
	//delete 4 from the list
	sortedList.DeleteItem(num);
	sortedList.GetItem(num, found);
	if (found)
	{
		std::cout << "Found: \n";
		num.Print(std::cout);
	}
	else
	{
		std::cout << "Deleted: ";
		num.Print(std::cout);
	}
	return 0;
}