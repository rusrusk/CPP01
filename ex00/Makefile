NAME			=			zombie

CC				=			c++

CFLAGS			=			-Wall -Wextra -Werror --std=c++98 -pedantic -g

RM				=			rm -rf

SRCS			=			main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS			=			$(SRCS:%.cpp=%.o)

# OBJDIR 			:
# 				mkdir -p $(OBJDIR)

all				:			$(NAME)


$(NAME) : $(OBJS)
		$(CC)  $(OBJS) -o $(NAME)

%.o : %.cpp
		$(CC) -c $(CFLAGS) $< -o $@


clean : 
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

re : fclean all

val :
		valgrind --leak-check=full -s ./$(NAME)

.PHONY : clean fclean re