#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <stdio.h>
# include "HumanA.hpp"
# include "HumanB.hpp"

class Weapon {

	public :
			Weapon(std::string type);
			Weapon() {};
			~Weapon();
			void 		setType(std::string param_new_type);
			std::string const &getType();
	private :
			std::string _type;
};




#endif
