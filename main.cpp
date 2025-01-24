using namespace std;
#include <fstream>
#include <iostream>

int main()
{
	ofstream test("TestFile.dat");
	test.open("TestFile.dat");

	test << "Hello World";
	test.close();
}