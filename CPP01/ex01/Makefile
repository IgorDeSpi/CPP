# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 14:21:39 by ide-spir          #+#    #+#              #
#    Updated: 2023/03/21 14:23:00 by ide-spir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -----------------------------------------VARS-------------------------------

NAME = zombieHorde

SRCS =	main.cpp \
		Zombie.cpp \
		zombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

COMPILE = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

EXE_NAME = -o zombieHorde

EXEC = zombieHorde

# -------------------------------------RULES-----------------------------------

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)

re:	fclean all

.cpp.o:
	$(COMPILE) $(FLAGS) -c $< -o $(<:.cpp=.o)

.PHONY : all clean fclean re
