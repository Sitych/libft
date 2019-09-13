/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <qjosmyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 10:51:48 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/13 11:37:25 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*str;

	size++;
	str = NULL;
	str = (char*)malloc(size);
	if (str == NULL)
		return (str);
	ft_bzero(str, size);
	return (str);
}
