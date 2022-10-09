#include "sed.hpp"

int main (int argc, char **argv) {

	if (argc == 4)
	{
		Sed sed_instance;
		bool output = sed_instance.ReadInputFile(argv[1]);
		if (output == false) {
			std::cerr << "error code : " << strerror(errno) << std::endl;
			return -1;
		}
		output = sed_instance.ReplaceStrings(argv[2], argv[3]);
		if (output == false)
			std::cerr << "error code : " << strerror(errno) << std::endl; 
	}
	else {
		std::cerr << "Invalid input! Please adhere to the following order : " << std::endl;
		std::cerr << "[Executable] [FileToOpen] [StringToReplace] [StringReplacer]" << std::endl;

	}

}






	// std::ifstream _ifs;
	// std::ofstream ofs("replace.out");

	// _ifs.open(line.c_str(), std::fstream::in);
	
	// if (!_ifs.is_open())
	// {
	// 	std::cout << "File opening failed\n";
	// 	return (EXIT_FAILURE);
	// }
	// while(std::getline(_ifs, line))
	// 	ofs << line << std::endl;;




// int main () {

// 	std::ifstream ifs("numbers");

// 	unsigned int dst = 2;
// 	unsigned int dst2 = 5;

// 	ifs >> dst >> dst2;

// 	std::cout << dst << " " << dst2 << std::endl;
// 	ifs.close();



// 	std::ofstream ofs("testing.out");
// 	ofs << "I like spiked clubs and other sharp weapons" << std::endl;
// 	ofs.close();

// 	Sed sed1;


// }
