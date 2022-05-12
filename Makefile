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
INCLUDE		=	libft.h

SRCS			= 	ft_atoi.c		\
					ft_bzero.c		\
					ft_isalnum.c	\
					ft_isalpha.c	\
					ft_isascii.c	\
					ft_isdigit.c	\
					ft_isprint.c	\
					ft_memchr.c		\
					ft_memcmp.c		\
					ft_memcpy.c		\
					ft_memmove.c	\
					ft_memset.c		\
					ft_strchr.c		\
					ft_strlcat.c	\
					ft_strlcpy.c	\
					ft_strlen.c		\
					ft_strncmp.c	\
					ft_strnstr.c	\
					ft_strrchr.c	\
					ft_tolower.c	\
					ft_toupper.c	\
					ft_calloc.c		\
					ft_strdup.c		\
					ft_substr.c		\
					ft_strjoin.c	\
					ft_strtrim.c	\
					ft_split.c		\
					ft_itoa.c		\
					ft_strmapi.c	\
					ft_striteri.c	\
					ft_putchar_fd.c	\
					ft_putstr_fd.c	\
					ft_putendl_fd.c	\
					ft_putnbr_fd.c	\

SRCS_BONUS	=		ft_lstnew.c			\
					ft_lstadd_front.c	\
					ft_lstsize.c		\
					ft_lstlast.c		\
					ft_lstadd_back.c	\
					ft_lstdelone.c		\
					ft_lstclear.c		\
					ft_lstiter.c		\
					ft_lstmap.c			\

OBJS 		=	${SRCS:.c=.o}

OBJS_BONUS	=	${SRCS_BONUS:.c=.o}

CC			=	gcc
RM			=	rm -f
AR			= 	ar rc
RN			=	ranlib

CFLAGS		=	-Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME):	${OBJS} 
	@echo "Compiling .."
	${AR} ${NAME} ${OBJS}
	${RN} ${NAME}
	@echo "Done !"

bonus:		${OBJS_BONUS} ${OBJS}
	@echo "Compiling bonus .."
	${AR} ${NAME} ${OBJS} ${OBJS_BONUS}
	${RN} ${NAME}

clean:
	@echo "Remove .o  ..."
	${RM} ${OBJS} ${OBJS_BONUS}
	@echo "Done !"

fclean: clean
	@echo "Remove lib ..."
	${RM} $(NAME)
	@echo "Done !"

re: fclean all
