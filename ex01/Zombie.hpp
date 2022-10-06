#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <stdio.h>

#define COLOR_DEFAULT "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_BLUE "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_WHITE "\033[37m"


class Zombie {

	public :
			Zombie(void);
			~Zombie(void);
			void announce(void);
			void setName(std::string name);
			std::string getName();

	private :
			std::string _name;

};

Zombie*	zombieHorde(int N, std::string name);
void	announce_zombieHorde(int N, std::string name);

#endif
