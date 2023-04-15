# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ide-spir <narvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 15:10:00 by ide-spir          #+#    #+#              #
#    Updated: 2023/04/15 16:37:03 by ide-spir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -----------------------------------------VARS-------------------------------

NAME = Game

SRCS =	main.cpp \
		AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \
		MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)

COMPILE = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

EXE_NAME = -o Game

EXEC = Game

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
	@$(COMPILE) $(FLAGS) -c $< -o $(<:.cpp=.o)

.PHONY : all clean fclean re
