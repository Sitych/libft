/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:09:17 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/05 19:40:24 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static void	*ft_memcpy(void *dst, const void *src, size_t n);

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char *str;
	char *str1;

	str = (char*)dest;
	str1 = (char*)src;
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	else
	{
		str = str + n;
		str1 = str1 + n;
		while (n-- != 0)
			*str++ = *str1++;
	}
	return (dest);
}

static void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *str;
	char *src1;

	str = (char*)dst;
	src1 = (char*)src;
	while (n != 0)
	{
		n--;
		str[n] = src1[n];
	}
	if (*str == 0)
		str = NULL;
	return (str);
}
