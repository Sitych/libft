/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <qjosmyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:03:22 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/13 12:17:25 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char*)destination;
	while (n != 0)
	{
		n--;
		tmp[n] = c;
	}
	return (destination);
}
