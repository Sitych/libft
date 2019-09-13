/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 09:35:56 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/11 10:47:33 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int		ft_strcmp(const char *s1, const char *s2)
{
	int	rslt;
	int len;

	len = ft_strlen(s1) + 1;
	if (len == 1 && ft_strlen(s2) != 0)
		len--;
	rslt = (int)ft_memcmp(s1, s2, len);
	return (rslt);
}
