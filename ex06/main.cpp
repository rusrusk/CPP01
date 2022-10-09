#include "Harl.hpp"



int main (int argc, char **argv)
{
	if (argc == 2)
	{
		Harl harl_instance;
		harl_instance.complain(argv[1]);
	}
	else {
		std::cerr << "Invalid number of arguments! Please adhere to the following order : " << std::endl;
		std::cerr << "[EXECUTABLE] [FILTER_LEVEL]" << std::endl;
	}
}
