/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 10:31:46 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/11 10:47:20 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	n++;
	while (--n > 0 && *s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	if (n == 0)
		return (0);
	else
		return (*s1 - *s2);
}
