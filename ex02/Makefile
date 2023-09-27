# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 17:13:00 by ogorfti           #+#    #+#              #
#    Updated: 2023/09/27 19:47:40 by ogorfti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

SRCS = main.cpp\

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
