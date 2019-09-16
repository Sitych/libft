/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <qjosmyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:10:06 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/16 14:02:01 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <header.h>

static	size_t	ft_wordlen(const char *str, char c)
{
	size_t i;

	i = 0;
	while (*(str++) != c)
		i++;
	return (i);
}

static	size_t	ft_lenarr(char *s, char c)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
			i++;
		else
		{
			len++;
			i = i + ft_wordlen(s + i, c);
		}
	}
	return (len);
}

// void			ft_free(char **arr)
// {

// }

char			**ft_strsplit(char const *s, char c)
{
	char	**new_arr;
	char	*new_str;
	size_t	i;
	size_t	len;

	i = 0;
	new_str = (char*)s;
	new_arr = (char**)malloc(ft_lenarr(new_str, c) + 1);
	while (*new_str)
	{
		if (*new_str == c)
			new_str++;
		else
		{
			len = ft_wordlen(new_str, c);
			new_arr[i] = (char*)malloc(len + 1);
			ft_strlcat(new_arr[i], new_str, len + 1);
			new_str = new_str + len;
			i++;
		}
	}
	new_arr[i] = 0;
	return (new_arr);
}
