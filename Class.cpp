#include <iostream>
#include "Class.h"

void PrintNumbers::Print(int min, int max)
{
	int temp = min;
	while (temp <= max)
	{
		std::cout << temp;
		temp++;
	}
}