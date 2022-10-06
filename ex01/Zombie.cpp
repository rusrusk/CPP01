#include "Zombie.hpp"

Zombie::Zombie() : _name("default") {

	std::cout << this->_name << " Constructor was called" << std::endl;
}


Zombie::~Zombie() {
	std::cout << "The " << this->_name <<  " was inevitably demolished" << std::endl;
}

void Zombie::setName(std::string param_name) {

	this->_name = param_name;
}

std::string Zombie::getName() {
	return this->_name;
}

void Zombie::announce(void) {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
