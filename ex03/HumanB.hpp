#ifndef HUMANB_HPP
#define HUMANB_HPP

# include <iostream>
# include <stdio.h>
# include "Weapon.hpp"

class Weapon;

class HumanB {

	public :
		HumanB(std::string param_name);
		~HumanB();
		void attack(void);
		void setWeapon(Weapon &weapon);
		Weapon const &getWeapon(void);

	private :
		std::string _name;
		Weapon		*_weapon;
};




#endif
