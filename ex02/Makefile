# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nnorazma <nnorazma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/14 14:22:32 by nnorazma          #+#    #+#              #
#    Updated: 2023/07/24 15:50:39 by nnorazma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

CC = c++
FLAGS = -Wall -Werror -Wextra -I -std=c++98 -fsanitize=address

RM = rm -rf

SRCS = main.cpp
INC = Array.hpp

OBJS = ${SRCS:%.cpp=%.o}

%.o: %.cpp ${INC}
		@printf "\033[38;5;121mCompiling $<...\033[0m\r"
		@${CC} ${FLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
		@echo "\n\033[38;5;204mArray.\033[0m"
		@${CC} ${FLAGS} ${OBJS} -o $@

clean:
		@echo "\033[38;5;227mRemoving Objects\033[0m"
		@${RM} ${OBJS}

fclean:	clean
		@echo "\033[38;5;81mRemoving Executable\033[0m"
		@${RM} ${NAME}

re: fclean all