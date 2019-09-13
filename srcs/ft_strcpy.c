/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 22:21:01 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/11 09:33:34 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "header.h"

char	*ft_strcpy(char *dest, const char *src)
{
	return ((char*)ft_memcpy(dest, src, ft_strlen(src) + 1));
}
