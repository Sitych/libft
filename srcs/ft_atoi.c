/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <qjosmyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:26:47 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/15 15:19:29 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int		ft_atoi(const char *src)
{
	unsigned char			*str;
	int						flag;
	unsigned long long		result;

	flag = 1;
	result = 0;
	str = (unsigned char*)src;
	while (*str == ' ' || *str == '\t' || *str == '\v' \
		|| *str == '\r' || *str == '\n' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
	{
		flag = *str == '-' ? -1 : 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		result = result * 10 + (*str++ - '0');
	if (result > 2147483648)
		return (flag > 0 ? -1 : 0);
	else
		return (((int)flag * result));
}
