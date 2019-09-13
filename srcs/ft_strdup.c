/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 22:47:37 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/11 09:40:15 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>
#include <stdlib.h>

char			*ft_strdup(const char *src)
{
	size_t	len;
	char	*dest;

	dest = NULL;
	len = ft_strlen(src);
	dest = (char*)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (dest);
	while (*src)
		*(dest++) = *(src++);
	*(dest) = '\0';
	return (dest - len);
}
