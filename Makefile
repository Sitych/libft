# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qjosmyn <qjosmyn@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 13:57:07 by qjosmyn           #+#    #+#              #
#    Updated: 2019/09/13 13:28:01 by qjosmyn          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

GCC = gcc -I./includes -Wall -Wextra -Werror -c

NAME = libft.a

all: lib

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -f $(NAME)
	
ft_atoi.o: srcs/ft_atoi.c
	$(GCC) srcs/ft_atoi.c

ft_bzero.o: srcs/ft_bzero.c
	$(GCC) srcs/ft_bzero.c
	
ft_isascii.o: srcs/ft_isascii.c
	$(GCC) srcs/ft_isascii.c
	
ft_isalpha.o: srcs/ft_isalpha.c
	$(GCC) srcs/ft_isalpha.c
	
ft_isdigit.o: srcs/ft_isdigit.c
	$(GCC) srcs/ft_isdigit.c
	
ft_isprint.o: srcs/ft_isprint.c
	$(GCC) srcs/ft_isprint.c

ft_isalnum.o: srcs/ft_isalnum.c
	$(GCC) srcs/ft_isalnum.c
	
ft_memalloc.o: srcs/ft_memalloc.c
	$(GCC) srcs/ft_memalloc.c
	
ft_memccpy.o: srcs/ft_memccpy.c
	$(GCC) srcs/ft_memccpy.c
	
ft_memchr.o: srcs/ft_memchr.c
	$(GCC) srcs/ft_memchr.c
	
ft_memcmp.o: srcs/ft_memcmp.c
	$(GCC) srcs/ft_memcmp.c
	
ft_memcpy.o: srcs/ft_memcpy.c
	$(GCC) srcs/ft_memcpy.c
	
ft_memdel.o: srcs/ft_memdel.c
	$(GCC) srcs/ft_memdel.c
	
ft_memmove.o: srcs/ft_memmove.c
	$(GCC) srcs/ft_memmove.c
	
ft_memset.o: srcs/ft_memset.c
	$(GCC) srcs/ft_memset.c
	
ft_strcat.o: srcs/ft_strcat.c
	$(GCC) srcs/ft_strcat.c
	
ft_strchr.o: srcs/ft_strchr.c
	$(GCC) srcs/ft_strchr.c
	
ft_strclr.o: srcs/ft_strclr.c
	$(GCC) srcs/ft_strclr.c
	
ft_strcmp.o: srcs/ft_strcmp.c
	$(GCC) srcs/ft_strcmp.c
	
ft_strcpy.o: srcs/ft_strcpy.c
	$(GCC) srcs/ft_strcpy.c
	
ft_strdel.o: srcs/ft_strdel.c
	$(GCC) srcs/ft_strdel.c
	
ft_strdup.o: srcs/ft_strdup.c
	$(GCC) srcs/ft_strdup.c
	
ft_strlen.o: srcs/ft_strlen.c
	$(GCC) srcs/ft_strlen.c
	
ft_strncat.o: srcs/ft_strncat.c
	$(GCC) srcs/ft_strncat.c
	
ft_strncmp.o: srcs/ft_strncmp.c
	$(GCC) srcs/ft_strncmp.c
	
ft_strncpy.o: srcs/ft_strncpy.c
	$(GCC) srcs/ft_strncpy.c
	
ft_strnew.o: srcs/ft_strnew.c
	$(GCC) srcs/ft_strnew.c
	
ft_strnstr.o: srcs/ft_strnstr.c
	$(GCC) srcs/ft_strnstr.c
	
ft_strrchr.o: srcs/ft_strrchr.c
	$(GCC) srcs/ft_strrchr.c
	
ft_strstr.o: srcs/ft_strstr.c
	$(GCC) srcs/ft_strstr.c
	
ft_tolower.o: srcs/ft_tolower.c
	$(GCC) srcs/ft_tolower.c
	
ft_toupper.o: 
	$(GCC) srcs/ft_toupper.c
	
ft_striteri.o: srcs/ft_striteri.c
	$(GCC) srcs/ft_striteri.c
	
lib: ft_atoi.o  ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memalloc.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memdel.o ft_memmove.o ft_memset.o ft_strcat.o ft_strchr.o ft_strclr.o ft_strcmp.o ft_strcpy.o ft_strdel.o ft_strdup.o ft_strlen.o ft_strncat.o ft_strncmp.o ft_strncpy.o ft_strnew.o ft_strnstr.o ft_strrchr.o ft_strstr.o ft_tolower.o ft_toupper.o ft_striteri.o
	ar rc $(NAME) *.o

re: clean all
