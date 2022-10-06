#include "Zombie.hpp"

int  main () {

	Zombie ruslan = Zombie("Ruslan");
	ruslan.Announce();
	// Zombie Foo = Zombie("Foo ");
	// Foo.Announce();

	std::cout << std::endl <<  COLOR_GREEN << "Now the new Zombie --> Tomato has been created from the function NewZombie()" << COLOR_DEFAULT << std::endl;

	Zombie *newZombie_tomato = newZombie("Tomato ");
	newZombie_tomato->Announce();
	delete newZombie_tomato;

	std::cout << std::endl << COLOR_GREEN << "Finally another Zombie --> RandomChump was called from the function randomChump()" << COLOR_DEFAULT << std::endl;
	randomChump("RandomChump "); 
}
