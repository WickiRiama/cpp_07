# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mriant <mriant@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 16:52:18 by mriant            #+#    #+#              #
#    Updated: 2023/01/17 10:12:52 by mriant           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

SRCS = srcs/main.cpp

OBJS = ${SRCS:srcs/%.cpp=build/%.o}
DEPS = ${OBJS:%.o=%.d}

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
IFLAGS = -I./includes -MMD
LFLAGS =

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME} ${LFLAGS}

build/%.o: srcs/%.cpp
	mkdir -p build
	${CXX} ${CXXFLAGS} -c $< -o $@ ${IFLAGS}

.PHONY: all
all: ${NAME}

.PHONY: clean
clean:
	rm -rf build

.PHONY: fclean
fclean: clean
	rm -rf ${NAME}

.PHONY: re
re: fclean
	make -C .

-include ${DEPS}