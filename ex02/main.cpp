#include <iostream>
#include <stdio.h>



int main () {

	std::string brain = "HI THIS IS BRAIN";

	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << std::string(50, '=') << std::endl;
	std::cout << "The address of [brain]: \t\t" << &brain << std::endl;
	std::cout << "The address held by [stringPTR]: \t" << stringPTR << std::endl;
	std::cout << "The address held by [stringREF]: \t" << &stringREF << std::endl;
	std::cout << std::string(50, '=') << std::endl;
	std::cout << "The value of [brain]: \t\t\t" << brain << std::endl;
	std::cout << "The value pointed to by [stringPTR]: \t" << *stringPTR << std::endl;
	std::cout << "The value pointed to by [stringREF]: \t" << stringREF << std::endl;
	std::cout << std::string(50, '=') << std::endl;
}


// void pass_by_ptr(std::string *ptr)
// {
// 	*ptr += ", but shipped goodies";
// }

// void pass_by_const_ptr(std::string const *ptr)
// {
// 	std::cout << *ptr << std::endl;
// }

// void pass_by_ref(std::string &str)
// {
// 	str += ", but shipped goodies";
// }

// void pass_by_const_ref(std::string const &str)
// {
// 	std::cout << str << std::endl;
// }



// int main () {

// 	std::string str = "practice what you preach";
// 	std::cout << str << std::endl;

// 	pass_by_ptr(&str);
// 	pass_by_const_ptr(&str);

// 	str = "you are so dodgy and you flaked on me";
// 	std::cout << str << std::endl;

// 	pass_by_ref(str);
// 	pass_by_const_ref(str);

// }














// int main () {

// 	int nb_of_balls = 42;
// 	int *ptr_balls = &nb_of_balls; //

// 	int &ref_balls = nb_of_balls;

// 	std::cout << "address of ref_balls = " << &ref_balls << std::endl;
// 	std::cout << "value = " << ref_balls << std::endl;


// 	std::cout << "value = " << ptr_balls << std::endl;
// 	std::cout << "value = " << *ptr_balls << std::endl;
// 	std::cout << "value = " << &ptr_balls << std::endl;

// 	std::cout << nb_of_balls << " " << *ptr_balls << " " << ref_balls << std::endl;

// 	*ptr_balls = 50;
// 	std::cout << nb_of_balls << std::endl;

// 	ref_balls = 69;
// 	std::cout << nb_of_balls << std::endl;

// }

