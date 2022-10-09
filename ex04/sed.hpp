#ifndef SED_H
# define SED_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class Sed {

	public :

		Sed();
		~Sed();

		bool ReadInputFile(std::string filename);
		bool ReplaceStrings(std::string str1, std::string str2);
		void WriteToOutputFile(std::string out_data);

		// void SetIfs(std::ifstream &param_ifs) {
		// 	this->_ifs = param_ifs;
		// }
		// std::ifstream& GetIfs(void) {
		// 	return this->_ifs;
		// }


	private :
			std::string _filename;
			std::string _str1;
			std::string _str2;
			std::ifstream _ifs;
};


#endif
