# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qjosmyn <qjosmyn@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 13:57:07 by qjosmyn           #+#    #+#              #
#    Updated: 2019/09/19 19:56:02 by qjosmyn          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

GCC = gcc -Wall -Wextra -Werror -I libft.h -c 

NAME = libft.a

all: $(NAME)

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -f $(NAME)
	
ft_atoi.o: ft_atoi.c
	$(GCC) ft_atoi.c

ft_bzero.o: ft_bzero.c
	$(GCC) ft_bzero.c
	
ft_isascii.o: ft_isascii.c
	$(GCC) ft_isascii.c
	
ft_isalpha.o: ft_isalpha.c
	$(GCC) ft_isalpha.c
	
ft_isdigit.o: ft_isdigit.c
	$(GCC) ft_isdigit.c
	
ft_isprint.o: ft_isprint.c
	$(GCC) ft_isprint.c

ft_isalnum.o: ft_isalnum.c
	$(GCC) ft_isalnum.c
	
ft_memalloc.o: ft_memalloc.c
	$(GCC) ft_memalloc.c
	
ft_memccpy.o: ft_memccpy.c
	$(GCC) ft_memccpy.c
	
ft_memchr.o: ft_memchr.c
	$(GCC) ft_memchr.c
	
ft_memcmp.o: ft_memcmp.c
	$(GCC) ft_memcmp.c
	
ft_memcpy.o: ft_memcpy.c
	$(GCC) ft_memcpy.c
	
ft_memdel.o: ft_memdel.c
	$(GCC) ft_memdel.c
	
ft_memmove.o: ft_memmove.c
	$(GCC) ft_memmove.c
	
ft_memset.o: ft_memset.c
	$(GCC) ft_memset.c
	
ft_strcat.o: ft_strcat.c
	$(GCC) ft_strcat.c
	
ft_strchr.o: ft_strchr.c
	$(GCC) ft_strchr.c
	
ft_strclr.o: ft_strclr.c
	$(GCC) ft_strclr.c
	
ft_strcmp.o: ft_strcmp.c
	$(GCC) ft_strcmp.c
	
ft_strcpy.o: ft_strcpy.c
	$(GCC) ft_strcpy.c
	
ft_strdel.o: ft_strdel.c
	$(GCC) ft_strdel.c
	
ft_strdup.o: ft_strdup.c
	$(GCC) ft_strdup.c
	
ft_strlen.o: ft_strlen.c
	$(GCC) ft_strlen.c
	
ft_strncat.o: ft_strncat.c
	$(GCC) ft_strncat.c
	
ft_strncmp.o: ft_strncmp.c
	$(GCC) ft_strncmp.c
	
ft_strncpy.o: ft_strncpy.c
	$(GCC) ft_strncpy.c
	
ft_strnew.o: ft_strnew.c
	$(GCC) ft_strnew.c
	
ft_strnstr.o: ft_strnstr.c
	$(GCC) ft_strnstr.c
	
ft_strrchr.o: ft_strrchr.c
	$(GCC) ft_strrchr.c
	
ft_strstr.o: ft_strstr.c
	$(GCC) ft_strstr.c
	
ft_tolower.o: ft_tolower.c
	$(GCC) ft_tolower.c
	
ft_toupper.o: ft_toupper.c
	$(GCC) ft_toupper.c
	
ft_striteri.o: ft_striteri.c
	$(GCC) ft_striteri.c
	
ft_strmap.o: ft_strmap.c
	$(GCC) ft_strmap.c

ft_striter.o: ft_striter.c
	$(GCC) ft_striter.c
	
ft_strmapi.o: ft_strmapi.c
	$(GCC) ft_strmapi.c

ft_strlcat.o: ft_strlcat.c
	$(GCC) ft_strlcat.c
	
ft_strequ.o: ft_strequ.c
	$(GCC) ft_strequ.c
	
ft_strnequ.o: ft_strnequ.c
	$(GCC) ft_strnequ.c
	
ft_strsub.o: ft_strsub.c
	$(GCC) ft_strsub.c
	
ft_strjoin.o: ft_strjoin.c
	$(GCC) ft_strjoin.c
	
ft_strtrim.o: ft_strtrim.c
	$(GCC) ft_strtrim.c
	
ft_strsplit.o: ft_strsplit.c
	$(GCC) ft_strsplit.c
	
ft_itoa.o: ft_itoa.c
	$(GCC) ft_itoa.c
	
ft_putchar.o: ft_putchar.c
	$(GCC) ft_putchar.c
	
ft_putchar_fd.o: ft_putchar_fd.c
	$(GCC) ft_putchar_fd.c
	
ft_putstr.o: ft_putstr.c
	$(GCC) ft_putstr.c
	
ft_putendl.o: ft_putendl.c
	$(GCC) ft_putendl.c
	
ft_putnbr.o: ft_putnbr.c
	$(GCC) ft_putnbr.c
	
ft_putnbr_fd.o: ft_putnbr_fd.c
	$(GCC) ft_putnbr_fd.c
	
ft_putstr_fd.o: ft_putstr_fd.c
	$(GCC) ft_putstr_fd.c
	
ft_putendl_fd.o: ft_putendl_fd.c
	$(GCC) ft_putendl_fd.c
	
ft_lstnew.o: ft_lstnew.c
	$(GCC) ft_lstnew.c
	
ft_lstdelone.o: ft_lstdelone.c
	$(GCC) ft_lstdelone.c
	
ft_lstdel.o: ft_lstdel.c
	$(GCC) ft_lstdel.c
	
ft_lstadd.o: ft_lstadd.c
	$(GCC) ft_lstadd.c
	
ft_lstiter.o: ft_lstiter.c
	$(GCC) ft_lstiter.c
	
ft_lstmap.o: ft_lstmap.c
	$(GCC) ft_lstmap.c
	
$(NAME): ft_atoi.o  ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o \
	ft_memalloc.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memdel.o ft_memmove.o \
	ft_memset.o ft_strcat.o ft_strchr.o ft_strclr.o ft_strcmp.o ft_strcpy.o ft_strdel.o \
	ft_strdup.o ft_strlen.o ft_strncat.o ft_strncmp.o ft_strncpy.o ft_strnew.o ft_strnstr.o \
	ft_strrchr.o ft_strstr.o ft_tolower.o ft_toupper.o ft_striteri.o ft_strmap.o ft_striter.o \
	ft_strmapi.o ft_strlcat.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o \
	ft_strsplit.o ft_itoa.o ft_putchar.o ft_putchar_fd.o ft_putstr.o ft_putendl.o ft_putnbr.o \
	ft_putnbr_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_lstnew.o ft_lstdelone.o ft_lstdel.o ft_lstadd.o \
	ft_lstiter.o ft_lstmap.o
	ar rc $(NAME) *.o

re: clean all
