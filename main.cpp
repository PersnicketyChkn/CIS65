#include <iostream>
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::cerr;

int main()
{
	try
	{
		ifstream inputFile;
		ofstream outputFile;
		inputFile.open("Numbers.txt");
		outputFile.open("Output.txt");
		if (!inputFile)
		{
			throw std::runtime_error("input file failed to open.");
		}
		int temp;
		int accumulator = 0;
		while (inputFile >> temp)
		{
			accumulator += temp;
		}
		outputFile << accumulator;
	}
	catch(std::exception &e)
	{
		cerr << e.what() << std::endl;
	}
	return 0;
}