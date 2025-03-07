#pragma once
// The following declarations and definitions go into file 
// ItemType.h. 

#include <fstream>
using std::string;
const int MAX_ITEMS = 100;

enum RelationType {LESS, GREATER, EQUAL};

class ItemType 
{ 
public:
	ItemType();
	ItemType(int, string, string, string);
  RelationType ComparedTo(ItemType) const;
  void Print(std::ostream&) const;
  void Initialize(int num);
private:
	int value;
	string author;
	string title;
	string genre;
};