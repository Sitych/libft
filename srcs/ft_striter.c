/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <qjosmyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 12:35:34 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/13 22:00:45 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

void	ft_striter(char *s, void (*f)(char *))
{
	if (s == NULL)
		return ;
	while (*s != 0)
	{
		(*f)(s);
		s++;
	}
}

