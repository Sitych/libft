/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 09:33:46 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/11 09:34:25 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*buf;

	buf = dest;
	buf = buf + ft_strlen(buf);
	while (*src)
	{
		ft_memset(buf, *src, 1);
		buf++;
		src++;
	}
	*buf = 0;
	return (dest);
}
