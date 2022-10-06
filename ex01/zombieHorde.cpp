#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *newZombieHordes = new Zombie[N];
	
	while (N--)
		newZombieHordes[N].setName(name);
	return (newZombieHordes);
}
