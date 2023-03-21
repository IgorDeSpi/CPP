# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 15:15:45 by ide-spir          #+#    #+#              #
#    Updated: 2023/03/21 13:46:50 by ide-spir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -----------------------------------------VARS-------------------------------

NAME = phonebook

SRCS =	PhoneBook.cpp \
		Contact.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

COMPILE = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

EXE_NAME = -o phonebook

EXEC = phonebook

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
