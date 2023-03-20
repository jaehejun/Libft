# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/18 19:38:24 by jaehejun          #+#    #+#              #
#    Updated: 2023/03/20 16:03:22 by jaehejun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar
ARFLAGS	= -src

INC		= ./libft.h
SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c
#SRCS_B	= ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
#			ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
#			ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
OBJS	= $(SRCS:.c=.o)
#OBJS_B	= $(SRCS_B:.c=.o)

ifdef WITH_BONUS
	OBJ_FILES = $(OBJS) $(OBJS_B)
else
	OBJ_FILES = $(OBJS)
endif

all		: $(NAME)

#bonus	:
#	make WITH_BONUS=1

clean	:
	rm -f $(OBJS) $(OBJS_B)

fclean	: clean
	rm -f $(NAME)

re		:
	make fclean
	make all

$(NAME)	: $(OBJ_FILES)
	$(AR) $(ARFLAGS) $@ $^

%.o		: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC)

.PHONY	: all bonus clean fclean re