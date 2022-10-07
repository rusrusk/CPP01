#include "HumanB.hpp"

HumanB::HumanB(std::string param_name) : _name(param_name) {} 


HumanB::~HumanB() {}


void HumanB::attack(void) {

	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " doesn't own an arme blanche!" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {

	// if (weapon.getType() == "") {
	// 	std::cerr << "cant input empty weapon!" << std::endl;
	// 	return false;
	// }
	this->_weapon = &weapon;
	// return true;
}

Weapon const &HumanB::getWeapon(void) {

	return *this->_weapon;
}
