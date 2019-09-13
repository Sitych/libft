/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 09:25:38 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/11 09:26:30 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

char	*ft_strrchr(const char *src, int c)
{
	char	*str;
	size_t	len;

	len = ft_strlen(src);
	str = (char*)(src + len);
	len++;
	while (len-- != 0)
	{
		if (*str == c)
			return (str);
		str--;
	}
	return (NULL);
}
