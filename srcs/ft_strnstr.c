/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 09:31:11 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/11 10:59:52 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char	*str;
	size_t	len;

	len = ft_strlen(haystack);
	str = (char *)haystack;
	if (n == 0 || *needle == 0)
		return (str);
	else if (len < ft_strlen(needle))
		return (NULL);
	while (n != 0 && *str)
	{
		if (!ft_strncmp(str, needle, n))
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
