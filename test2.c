/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <qjosmyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 10:19:26 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/13 13:33:40 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// gcc -Wall -Wextra -Werror test.c -L ./ -lft -Iincludes
#include <unistd.h>
#include <stdio.h>
#include <header.h>
#include <check.h>

void	f(char *s)
{
	*s = *s + 1;
}

int		main()
{
	char str[] = "1111";
    char b[] = "override this !";
    char b2[0xF0];
    size_t size = strlen(b);
	for (size_t i = 0; i < size; i++)
        ft_striteri((char)i, b2 + i);
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
