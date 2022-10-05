#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string param_name) : _name(param_name) {
}


void Zombie::Announce(void) {
	std::cout << this->_name << "BraiiiiiiinnnzzzZ..." << std::endl;
}


Zombie::~Zombie() {

	std::cout << "After an epic hangover the zombie " << this->_name << " was destroyed" << std::endl; 
}
