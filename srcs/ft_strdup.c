/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 22:47:37 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/06 22:03:07 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static size_t	ft_strlen(const char *str);

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

static size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (*(str++))
		i++;
	return (i);
}
