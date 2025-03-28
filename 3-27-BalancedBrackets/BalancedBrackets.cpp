#include <iostream>
#include <string>
#include "StackType.h"

bool BalancedBrackets(std::string s)
{
	StackType stack;
	try {
		if (s.length() > MAX_ITEMS)
		{
			throw std::string("String entered was too long\n");
		}
		/*for (int i = 0; i < s.length(); i++)
		{
			char c = s.at(i);
		}*/
		for (char c : s)
		{
			if (c == '(' || c == '[' || c == '{')
			{
				stack.Push(c);
			}
			else if (c == ')' && stack.Top() == '(' || c == ']' && stack.Top() == '[' || c == '}' && stack.Top() == '{')
			{
				stack.Pop();
			}
			else
			{
				return false;
			}
		}
		if (stack.IsEmpty())
		{
			return true;
		}
		return false;
	}
	catch(EmptyStack ex)
	{
		return false;
	}
}

int main()
{
	std::string input;
	std::cin >> input;
	bool balanced;
	try 
	{
		balanced = BalancedBrackets(input);
	}
	catch (std::string ex)
	{
		std::cout << ex;
		main();
	}
	if (balanced)
	{
		std::cout << "true\n";
	}
	else
	{
		std::cout << "false\n";
	}
	main();
	return 0;
}