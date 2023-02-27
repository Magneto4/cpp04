# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nseniak <nseniak@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/08 14:21:20 by nseniak           #+#    #+#              #
#    Updated: 2023/02/27 16:50:53 by nseniak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= Animal.cpp Cat.cpp Dog.cpp main.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp
NAME		= Polymorphisme
OBJS 		= $(SRCS:.cpp=.o)
DEP			= $(OBJS:.o=.d)

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -g -std=c++98
 
${NAME}:	${OBJS}
			${CXX} -o ${NAME} ${OBJS} ${CXXFLAG}

-include $(DEP)

%.o: %.cpp Makefile
			$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

all: $(NAME)

clean:
			rm	-f ${OBJS}
			rm	-f ${DEP}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY: all clean re fclean