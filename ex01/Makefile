NAME			=			zombiehorde

CC				=			c++

RM				=			rm -rf

CFLAGS			=			-Wall -Wextra -Werror --std=c++98 -pedantic -g

SRCS			=			main.cpp Zombie.cpp zombieHorde.cpp

OBJSDIR			=			obj

OBJS			=			$(SRCS:%.cpp=$(OBJSDIR)/%.o)


all				:			$(NAME)


$(NAME) : $(OBJS)
		$(CC) $(OBJS) -o $(NAME)

$(OBJSDIR)/%.o : %.cpp
		mkdir -p '$(@D)'
		$(CC) -c $(CFLAGS) $< -o $@

clean : 
		$(RM) $(OBJS)
		$(RM) $(OBJSDIR)

fclean : clean
		$(RM) $(NAME)

re : fclean all

val :
	valgrind --leak-check=full -s ./$(NAME)

.PHONY : clean fclean re