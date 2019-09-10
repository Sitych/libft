/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 15:54:20 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/09 23:43:56 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char*)dest;
	str2 = (unsigned char*)src;
	while (n-- != 0)
	{
		if ((*str1 = *str2) == (unsigned char)c)
			return (str1 + 1);
		str1++;
		str2++;
	}
	return (NULL);
}
