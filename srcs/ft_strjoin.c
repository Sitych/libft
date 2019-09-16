/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <qjosmyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 10:17:13 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/16 10:26:39 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <header.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len_1;
	size_t	len_2;

	new_str = NULL;
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	new_str = (char*)malloc(len_1 + len_2 + 1);
	if (new_str == NULL)
		return (NULL);
	ft_strlcat(new_str, s1, len_1 + 1);
	ft_strlcat(new_str, s2, len_1 + len_2 + 1);
	return (new_str);
}
