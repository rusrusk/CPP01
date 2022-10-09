#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>


class Harl {

	public :
			enum typelog {
				DEBUG,
				INFO,
				WARNING,
				ERROR
			};
			Harl();
			~Harl();
			void complain (std::string level);
			void do_action_based_on_enum(int typelog);
	
	private :
			void (Harl::*MethodsofComplaints[4])(void);
			void debug(void);
			void info(void);
			void warning(void);
			void error(void);    
			std::string 					LevelsofComplaints[4];
			int								_typelog;                            
}; 



#endif
