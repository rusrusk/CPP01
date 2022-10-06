#include "Zombie.hpp"


void announce_zombieHorde(int N, Zombie *zombieHorde) {

	for(int i = 0;i < N; i++) {

		 zombieHorde[i].announce();
	}
}

int main () {

	std::cout << COLOR_GREEN << "The Valhalla Zombie Horde is created here" << COLOR_DEFAULT << std::endl;
	Zombie *ptr_zombie = zombieHorde(10, "Valhalla");
	announce_zombieHorde(10, ptr_zombie);




	

	delete [] ptr_zombie;
}
