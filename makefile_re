# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/16 10:18:56 by jaehejun          #+#    #+#              #
#    Updated: 2023/03/18 19:46:56 by jaehejun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS	= ft_*.c
OBJS	= ft_*.o
 
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
 
all : $(NAME)
 
$(NAME) : $(OBJS)
	ar -cr $@ $^
%.o: %.c
	$(CC) $(CFLAGS) $^ -c -o $@
clean :
	rm -rf $(OBJS)
fclean : clean
	rm -rf $(NAME)
re : fclean all

.PHONY : all clean fclean re
