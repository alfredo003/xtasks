NAME = xtasks
CC = c++
FLAGS = -Wall  -Wextra -Werror
SRCS = main.cpp
RM = rm -rf
OBJS = $(SRCS.cpp=.o)

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all
