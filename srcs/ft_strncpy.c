/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 22:21:01 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/11 09:22:24 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "header.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char *str;
	char *src1;

	if (dst == src)
		return (dst);
	str = (char*)dst;
	src1 = (char*)src;
	while (n-- != 0 && *src)
		*str++ = *src1++;
	return (dst);
}
