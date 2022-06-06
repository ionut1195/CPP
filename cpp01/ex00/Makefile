# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/03 20:12:19 by itomescu          #+#    #+#              #
#    Updated: 2022/06/05 13:09:23 by itomescu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	zombie
SRC		=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ		=	$(SRC:%.cpp=%.o)

CC		=	c++
CFLAGS 	=	-Wextra -Werror -Wall
XFLAG	=	-std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(XFLAG) $(OBJ) -o $@

%.o: %.cpp
	$(CC) -c $(CFLAGS) $(XFLAG) -o $@ $<

clean:
	@echo "Removing object files"
	$(RM) $(OBJ)

fclean: clean
	@echo "Removing executable"
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re