/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <qjosmyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 10:19:26 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/15 23:21:22 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// gcc -Wall -Wextra -Werror test2.c -L ./ -lft -Iincludes
#include <unistd.h>
#include <stdio.h>
#include <header.h>
#include <check.h>
#include <stdlib.h>
#include <ctype.h>

char	f(char s)
{
	return (s + 1);
}

int main()
{
	char	*s1 = "see FF your FF return FF now FF";
	char	*s2 = "FF";
	// printf("strncmp = %d %c\n", strncmp(s1 + 4, s2 , 5), *(s1 + 4));
	// printf("ft_strncmp =  %d\n", ft_strncmp(s1 + 4, s2 , 5));
	printf("%s\n", strnstr(s1, s2, strlen(s1)));
	char	*s3 = "FF your FF return FF now FF";
	char	*s4 = "FF";
	printf("%s", ft_strnstr(s3, s4, strlen(s1)));
	// char	s1[100] = "abc";
	// char	s2[100] = "a";
	// printf("%zd", strlcat(s1, s2, 7));
	// printf("%s\n", s1);
	// char	s3[100] = "abc";
	// char	s4[100] = "a";
	// printf("%zd", ft_strlcat(s3, s4, 7));
	// printf("%s", s3);	
	return 0;
}

void    ft_check_strclr()
{
    char str[] = "1111";
    printf("%s\n", str);
    ft_strclr(str);
    printf("%zu\n", sizeof(unsigned char));
    for (int i = 0; str[i] == 0; i++)
    {
       printf("%d", str[i]);
    }
}

// void	ft_check_memmalloc()
// {
// 	void	*p;

// 	p = ft_memalloc(5);
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("%c\n", ;
// 	}	
// }

void	print_arr(int *arr, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		printf("%d ", arr[i]);
		i++;
	}
}
