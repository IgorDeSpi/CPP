# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 15:15:03 by ide-spir          #+#    #+#              #
#    Updated: 2023/04/18 10:15:32 by ide-spir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -----------------------------------------VARS-------------------------------

NAME = FragTrap

SRCS =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp

OBJS = $(SRCS:.cpp=.o)

COMPILE = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

EXE_NAME = -o FragTrap

EXEC = FragTrap

# -------------------------------------RULES-----------------------------------

all: $(NAME)

$(NAME): $(OBJS)
	@$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(EXEC)

re:	fclean all

.cpp.o:
	@$(COMPILE) $(FLAGS) -c -I $< -o $(<:.cpp=.o)

.PHONY : all clean fclean re
