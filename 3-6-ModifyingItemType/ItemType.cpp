// The following definitions go into file ItemType.cpp. 
#include <fstream>
#include <iostream>
#include "ItemType.h"

ItemType::ItemType()
{
    value = 0;
}

ItemType::ItemType(int ISBN, string author, string title, string genre)
{
    value = ISBN;
    this->author = author;
    this->title = title;
    this->genre = genre;
}

RelationType ItemType::ComparedTo(ItemType otherItem) const 
{
  if (value < otherItem.value)
    return LESS;
  else if (value > otherItem.value)
    return GREATER;
  else return EQUAL;
}

void ItemType::Initialize(int num) 
{
    value = num;
}

void ItemType::Print(std::ostream& out) const 
// pre:  out has been opened.
// post: value has been sent to the stream out.
{
    out << value << "\t" << author << "\t" << title << "\t" << genre << '\n';
}
