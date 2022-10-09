#include "sed.hpp"


Sed::Sed() {
	
	std::cout << "Constructor called" << std::endl;
}


Sed::~Sed() {
	std::cout << "Destructor called" << std::endl;
}


bool Sed::ReadInputFile(std::string filename) {

	// std::ifstream ifs;

	this->_ifs.open(filename.c_str(), std::ifstream::in);
	if (!this->_ifs.is_open()) {
		std::cerr << "error code : " << strerror(errno) << std::endl;
		return -1;
	}
	this->_filename = filename;
	return (true);
}


bool Sed::ReplaceStrings(std::string str1, std::string str2) {

	if (str1.empty() || str2.empty()) {

		std::cerr << "file is empty" << std::endl;
	}
	char ch;
	std::string data;
	ch = _ifs.get(); 
	while(_ifs.good())
	{
		data.push_back(ch);
		ch = _ifs.get();		
	}
	if (str1 != str2)
	{
		for(std::string::size_type new_pos = 0; data.find(str1, new_pos) != std::string::npos; )
		{
			std::string::size_type pos = data.find(str1, new_pos);
			data.erase(pos, str1.size());
			data.insert(pos, str2);
			new_pos = pos + str2.size();
		}
	}
	this->WriteToOutputFile(data);
	return (true);
}



void Sed::WriteToOutputFile(std::string out_data) {

	std::ofstream _ofs;
	std::string OutputFilename = this->_filename;
	OutputFilename.append(".replace");
	_ofs.open(OutputFilename.c_str());
	if (!_ofs.is_open())
		std::cout << "output file isn't opened" << std::endl;
	if (_ofs)
		_ofs << out_data;
	if (_ofs.bad())
		std::cerr << "Writing to file failed" << std::endl;

}

