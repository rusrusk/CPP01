NAME			=			sed_lover

CC				=			c++

CFLAGS			=			-Wall -Wextra -Werror --std=c++98 -pedantic -g

RM				=			rm -rf

SRCS			=			main.cpp sed.cpp

OBJSDIR			=			objs

OBJS			=			$(SRCS:%.cpp=$(OBJSDIR)/%.o)

all				:			$(NAME)


$(NAME) : $(OBJS)
		$(CC) $(OBJS) -o $(NAME)

$(OBJSDIR)/%.o : %.cpp
		mkdir -p '$(@D)'
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		$(RM) $(OBJS)
		$(RM) $(OBJSDIR)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean re