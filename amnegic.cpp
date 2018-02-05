#include <iostream>

int initialize();

int main(int argc, char** argv)
{
	initialize();
	while(true)
	{
		std::string input;
		std::getline(std::cin, input);
		std::cout << input << std::endl;
		if (input == "quit")
			break;
	}
	return 0;
} 

int initialize()
{
	return 0;
}
