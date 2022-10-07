#include "HumanA.hpp"

HumanA::HumanA(std::string param_name, Weapon &param_weapon) : _name(param_name), _weapon(param_weapon) {
	// std::cout << this->_name << " was called" << std::endl;
}


HumanA::~HumanA() {
	// std::cout << "Destructor was called" << std::endl;
}


void HumanA::attack(void) {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

Weapon const &HumanA::getWeapon(void) {
	return this->_weapon;
}
