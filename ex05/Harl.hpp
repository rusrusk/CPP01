#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl {

	public :
			Harl();
			// Harl() {};
			~Harl();
			void complain (std::string level);
	
	private :
			void (Harl::*MethodsofComplaints[4])(void);
			void debug(void);
			void info(void);
			void warning(void);
			void error(void);    
			std::string LevelsofComplaints[4];                                       
};                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
         
#endif
