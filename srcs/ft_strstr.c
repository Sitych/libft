/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 08:42:02 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/11 10:48:09 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	len;
	char	*str;

	len = ft_strlen(needle);
	str = (char *)haystack;
	while (*str)
	{
		if (!memcmp(str, needle, len))
			return (str);
		str++;
	}
	if (*str == *needle)
		return (str);
	return (NULL);
}
