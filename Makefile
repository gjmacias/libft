# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmacias- <gmacias-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/19 18:25:44 by gmacias-          #+#    #+#              #
#    Updated: 2022/05/16 17:30:18 by gmacias-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# El nombre, en este caso, sera "libft.a". Sera un archivo comprimido con los .o#
# El "include" incluira todo los .c y tambien el .h, todo sin contar los .o	#
# El OBJS es quien utiliza el CC para crear y guardar los .o con las CFLAGS	#

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
