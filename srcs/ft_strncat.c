/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 09:26:43 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/11 09:27:21 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*buf;

	buf = dest;
	buf = buf + ft_strlen(buf);
	while (*src && n--)
	{
		ft_memset(buf, *src, 1);
		buf++;
		src++;
	}
	*buf = 0;
	return (dest);
}
