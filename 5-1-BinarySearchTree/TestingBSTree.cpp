#include "TreeType.h"
#include <iostream>

int main()
{
	TreeType tree;
	std::string words[10] = {"Quebec", "Algeria", "Yemen", "Georgia", "Chad", "Ethiopia", "Uzbekistan", "Czechloslovakia", "Atlantis", "Etcetera"};
	for (std::string s : words)
	{
		tree.PutItem(s);
	}

	bool found;
	std::string test = tree.GetItem("Algeria", found);
	if (found)
	{
		std::cout << test;
	}

	found = false;
	tree.DeleteItem("Algeria");
	test = tree.GetItem("Algeria", found);
	if (!found)
	{
		std::cout << "Bye Algeria";
	}

	std::ofstream output("Output.dat");
	//output.open("Output.dat");
	tree.Print(output);
	return 0;
}