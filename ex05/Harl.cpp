#include "Harl.hpp"

Harl::Harl()  {

	std::cout << "contructor called\n";

	this->MethodsofComplaints[0] = &Harl::debug;
	this->MethodsofComplaints[1] = &Harl::info;
	this->MethodsofComplaints[2] = &Harl::warning;
	this->MethodsofComplaints[3] = &Harl::error;

	this->LevelsofComplaints[0] = "DEBUG";
	this->LevelsofComplaints[1] = "INFO";
	this->LevelsofComplaints[2] = "WARNING";
	this->LevelsofComplaints[3] = "ERROR";

}



Harl::~Harl () {

	std::cout << "Destructor called" << std::endl;
}

void ::Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void ::Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
}

void ::Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}

void ::Harl::error(void) {
	std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {


	//  void (Harl::*MethodsofComplaints[])(void) = { 

	// 	 &Harl::error,
	// 	 &Harl::info,
	// 	 &Harl::warning,
	// 	 &Harl::error
	// };




	for ( int i = 0; i < 4; i++) {

		if (level == LevelsofComplaints[i])
		{
			(this->*MethodsofComplaints[i])();
		}
	}
}

