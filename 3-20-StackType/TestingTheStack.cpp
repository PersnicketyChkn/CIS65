#include "StackType.h"
#include <iostream>

using std::cerr;

int main()
{
	StackType stack;

	try
	{
		stack.Push(7);
		stack.Push(4);
		stack.Pop();
		stack.Top();
		stack.Push(6);
		stack.Top();
		stack.Pop();
		stack.Pop();
		stack.Pop();
	}
	catch (FullStack)
	{
		cerr << "The stack is full! \n";
	}
	catch (EmptyStack)
	{
		cerr << "The stack is empty!\n";
	}
}