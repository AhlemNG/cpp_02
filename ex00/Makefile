# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anouri <anouri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/10 10:41:32 by anouri            #+#    #+#              #
#    Updated: 2024/01/10 11:55:29 by anouri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ${wildcard *.cpp } = all .cpp files
# $ est utilisee pour appeler une variable variable
# % pour dire all
# $@ = nom de la cble
# $< = nom de la premiere dependance

NAME= fixed

SRCFILE = ./srcs
INCFILE = -I./includes
SRCS= $(wildcard $(SRCFILE)/*.cpp)

OBJS= ${SRCS:.cpp=.o}

CXXFLAGS= -Wall -Werror -Wextra -std=c++98 $(INCFILE)

CXX= c++

RM= rm -rf

${NAME}: ${OBJS}
	${CXX} ${CXXFLGAS} ${OBJS} -g -o $@

all: ${NAME}

%.o: %.cpp
	${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
re: fclean all

.PHONY: all clean fclean re