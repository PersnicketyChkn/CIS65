#include "unsorted.h"
#include <iostream>

int main()
{
	ItemType book(1000, "Thomas Edison", "The Lightbulb", "SCIENCE (fiction)");
	ItemType book2(2000, "Aristotle", "Math", "Yeah, Math");
	ItemType book3(3000, "Edgar Allen Poe For Some Reason", "The Telltale Heart", "Poetry");
	ItemType book4(4000, "Ralph Waldo Emerson", "Walden Pond", "Memoir");
	ItemType book5(5000, "Some Guy", "What They Teach You At Harvard Business School", "Textbook");
	ItemType book6(6000, "Some Guy", "What They Don't Teach You At Harvard Business School", "Textbook");

	UnsortedType library;
	library.PutItem(book);
	library.PutItem(book2);
	library.PutItem(book3);
	library.PutItem(book4);
	library.PutItem(book5);
	library.PutItem(book6);

	library.ResetList();
	int length = library.GetLength();
	int loc = 0;
	while(loc < length)
	{
		ItemType temp = library.GetNextItem();
		temp.Print(std::cout);
		loc++;
	}

	/*bool found = false;
	library.GetItem(book, found);
	if (found)
	{
		book.Print(std::cout);
	}*/
	return 0;
}