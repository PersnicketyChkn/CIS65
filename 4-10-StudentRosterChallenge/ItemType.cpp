// The following definitions go into file ItemType.cpp. 
#include <fstream>
#include <iostream>
#include "ItemType.h"

ItemType::ItemType()
{ 
  ID = 0;
}

ItemType::ItemType(int id, std::string name)
{
    ID = id;
    Name = name;
}

RelationType ItemType::ComparedTo(ItemType otherItem) const 
{
  if (ID < otherItem.ID)
    return LESS;
  else if (ID > otherItem.ID)
    return GREATER;
  else return EQUAL;
}

void ItemType::Initialize(int number) 
{
  ID = number;
}

void ItemType::Print(std::ostream& out) const 
// pre:  out has been opened.
// post: value has been sent to the stream out.
{
  out << ID;
}
