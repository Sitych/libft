# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 13:57:07 by qjosmyn           #+#    #+#              #
#    Updated: 2019/09/05 22:04:41 by qjosmyn          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

GCC = gcc -I./includes -Wall -Wextra -Werror -c

NAME1 = libft.a

all: lib

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -f $(NAME)

lib: 
	$(GCC) srcs/*.c
	ar rc $(NAME1) *.o

re: clean all
