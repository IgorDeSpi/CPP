# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/20 16:55:18 by ide-spir          #+#    #+#              #
#    Updated: 2023/03/20 16:56:20 by ide-spir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all clean fclean re test

CC := c++
FLAGS := -std=c++98 -Wall -Wextra -Werror -MMD -MP -Isources/
#FLAGS += -fsanitize=address
SRC_DIR := sources/
OBJ_DIR := objects/
RM := rm
VAL := valgrind --leak-check=full --track-origins=yes

BLACK = \033[1;30m
REDBG = \033[30;41m
RED = \033[0;31m
GREEN = \033[0;32m
ORANGE = \033[0;33m
BLUE = \033[0;34m
MAGENTA = \033[0;35m
CYAN = \033[0;36m
NC = \033[0m

SRCS =	Account.cpp	\
		tests.cpp	\

SOFT_NAME := Account
OBJS = $(SRCS:%.cpp=%.o)
SRC = $(addprefix $(SRC_DIR),$(SRCS))
OBJ = $(addprefix $(OBJ_DIR),$(OBJS))
DEPS = $(OBJ:%.o=%.d)
OBJF := ${OBJ_DIR}.cache_exists
NORM := $(wildcard *.cpp) $(wildcard *.hpp)

all : ${SOFT_NAME}

${OBJ_DIR}%.o : $(SRC_DIR)%.cpp $(OBJF) Makefile
	@echo "${BLUE}###${NC}Creation du fichier ${@:%.cpp=%.o}${BLUE}###${ORANGE}"
	${CC} ${FLAGS} -c $< -o $@
	@echo "${NC}"

$(OBJF) :
	@mkdir -p ${OBJ_DIR}
	@touch ${OBJF}

${SOFT_NAME} : ${OBJ}
	@echo "${BLUE}###${NC}Creation du fichier ${SOFT_NAME}${BLUE}###${ORANGE}"
	${CC} ${OBJ} ${FLAGS} -o ${SOFT_NAME}
	@echo "${NC}"

-include ${DEPS}

test : all
	$(VAL) ./${SOFT_NAME}

clean :
	@echo "${RED}###${NC}Nettoyage des fichiers .o${RED}###"
	${RM} -rf ${OBJ_DIR} ${OBJF}
	@echo "${GREEN}###${NC}Nettoyage OK${GREEN}###${NC}\n"

fclean : clean
	@echo "${RED}###${NC}Nettoyage d'archives et de Softs${RED}###"
	${RM} -f ${SOFT_NAME}
	@echo "${GREEN}###${NC}Nettoyage OK${GREEN}###${NC}\n"

re : fclean all
