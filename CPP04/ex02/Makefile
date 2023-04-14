# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 10:56:51 by ide-spir          #+#    #+#              #
#    Updated: 2023/04/14 14:34:10 by ide-spir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -----------------------------------------VARS-------------------------------

NAME = AAnimal

SRCS =	main.cpp \
		AAnimal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		Brain.cpp

OBJS = $(SRCS:.cpp=.o)

COMPILE = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

EXE_NAME = -o AAnimal

EXEC = AAnimal

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
