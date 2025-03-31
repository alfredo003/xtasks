NAME = xtasks
CC = c++
FLAGS = -Wall  -Wextra -Werror
SRCS = src/main.cpp\
		src/Task.cpp\
		src/Milestone.cpp
RM = rm -rf
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all
