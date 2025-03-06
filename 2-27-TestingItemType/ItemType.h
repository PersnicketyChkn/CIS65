#pragma once
// The following declarations and definitions go into file 
// ItemType.h. 

#include "Class.h"

#include <fstream>
const int MAX_ITEMS = 5;
enum RelationType {LESS, GREATER, EQUAL};

class ItemType 
{ 
public:
  ItemType();
  RelationType ComparedTo(ItemType) const;
  void Print(std::ostream&) const;
  void Initialize(std::string s);
private:
	Class c;
};