#include <iostream>
#include "unsorted.h"
#include "ItemType.h"

using std::cout;


int main()
{
	//initializing the list
	UnsortedType paragraph;
	
	//testing PutItem
	ItemType word;
	word.Initialize("test");
	paragraph.PutItem(word);

	//testing GetNextItem
	ItemType temp;
	temp = paragraph.GetNextItem();

	//testing GetItem
	//temp will store the value of GetItem and found will be set to true if the item is in the list
	bool found = false;
	temp = paragraph.GetItem(word, found);
	if (!found)
	{
		//put it in the list
		//do something else
	}
	//otherwise, it's already in the list, so continue
	paragraph.ResetList();
	temp.Print(cout);
	return 0;
}