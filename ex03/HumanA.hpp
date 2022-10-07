#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <stdio.h>
# include "Weapon.hpp"

class Weapon;

class HumanA {

	public :
		HumanA(std::string param_name, Weapon &param_weapon);
		~HumanA();
		void attack(void);
		Weapon const &getWeapon(void);

	private :
			std::string _name;
			Weapon		&_weapon;
};




#endif
