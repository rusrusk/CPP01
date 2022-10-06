NAME			=			brain

CC				=			c++

CFLAGS			=			-Wall -Werror -Wextra --std=c++98 -pedantic -g

RM				=			rm -rf

SRCS			=			main.cpp

OBJS			=			$(SRCS:%.cpp=%.o)


all				:			$(NAME)


$(NAME) : $(OBJS)
		$(CC) $(OBJS) -o $(NAME)

%.o : %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY : all fclean re