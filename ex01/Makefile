NAME			=			zombiehorde

CC				=			c++

RM				=			rm -rf

CFLAGS			=			-Wall -Wextra -Werror --std=c++98 -pedantic -g

SRCS			=			main.cpp Zombie.cpp zombieHorde.cpp

OBJS			=			$(SRCS:%.cpp=%.o)

all				:			$(NAME)


$(NAME) : $(OBJS)
		$(CC) $(OBJS) -o $(NAME)

%.o : %.cpp
		$(CC) -c $(CFLAGS) $< -o $@

clean : 
		$(RM) $(OBJS)

fclean :
		$(RM) $(NAME)

re : fclean all

val :
	valgrind --leak-check=full -s ./$(NAME)

.PHONY : clean fclean re