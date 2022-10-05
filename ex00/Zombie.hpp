#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
// #include <iomanip>
#include <string>

#define COLOR_DEFAULT "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_BLUE "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_WHITE "\033[37m"


class Zombie {

	public :
		Zombie(std::string name);
		Zombie();
		~Zombie();
		void Announce(void);
		void Foo(std::string Foo);


	private :
		std::string _name;

};

		Zombie* newZombie(std::string name);
		void	randomChump(std::string name);

#endif
