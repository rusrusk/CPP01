#include "Weapon.hpp"


Weapon::Weapon(std::string param_type) : _type(param_type) {
	std::cout << "Constructor was called" << std::endl;
}


Weapon::~Weapon() {
	std::cout << "Destructor was called" << std::endl;
}

void Weapon::setType(std::string param_new_type) {
	this->_type = param_new_type;
}

std::string const  &Weapon::getType() {
	return this->_type;
}
