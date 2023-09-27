NAME = zombie

SRCS = main.cpp\
		newZombie.cpp\
		randomChump.cpp\
		Zombie.cpp\

OBJS = $(SRCS:.cpp=.o)

CXXFLAGS =  -Wall -Wextra -Werror -std=c++98

CC = c++

RM = rm -f

%.o : %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
