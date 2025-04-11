// The following declarations and definitions go into file 
// ItemType.h. 

#include <fstream>
const int MAX_ITEMS = 50;
enum RelationType  {LESS, GREATER, EQUAL};

class ItemType 
{ 
public:
  ItemType();
  ItemType(int, std::string);
  RelationType ComparedTo(ItemType) const;
  void Print(std::ostream&) const;
  void Initialize(int number);
private:
  int ID;
  std::string Name;
};
 
