#include <iostream>

virtual class object
{
	int uuid;
	int type;
	std::string name;
	std::string desc;
}

std::vector<object> objlist(10);

int initialize();

int main(int argc, char** argv)
{
	initialize();
	return 0;
} 

int initialize()
{
	return 0;
}
