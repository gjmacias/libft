# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmacias- <gmacias-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/19 18:25:44 by gmacias-          #+#    #+#              #
#    Updated: 2022/02/22 17:50:02 by gmacias-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
INCLUDE		=	./

SRCS		= 	$(wildcard *.c)

OBJS 		=	${SRCS:%.c=%.o}

CC			=	gcc
RM			=	rm -rf
AR			= 	ar rcs
RN			=	ranlib

CFLAGS		=	-g -Wall -Wextra -Werror -I $(INCLUDE)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):	${OBJS} 
	@echo "Compiling libft..."
	@${AR} ${NAME} ${OBJS}
	@${RN} ${NAME}
	@echo "Done !"

clean:
	@echo "Removing libft objects..."
	@${RM} ${OBJS}
	@echo "Done !"

fclean: clean
	@echo "Remove libft.a..."
	@${RM} $(NAME)
	@echo "Done !"

re: fclean all
