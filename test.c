/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:06:11 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/09/09 22:21:33 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// gcc -Wall -Wextra -Werror test.c -L ./ -lft
#include <unistd.h>
#include <stdio.h>
#include <header.h>
#include <check.h>

int main()
{
//    char    str1[4] = "345";
	char	str[7] = "123456";
//	char    str2[4] = "345";
	char	str3[7] = "123456";
	printf("%d ", strcmp(strnstr(str, "56", 5), ft_strnstr(str3, "56", 5)));
}

//void	ft_check_strdup()
//{
//	char str[] = "1235dssdfds";
//	printf("\nmy   : %s\n",ft_strdup(str));
//	printf("\norig : %s\n",strdup(str));
//}
//
//void	ft_check_strlen()
//{
//	char str[] = "1235dssdfds";
//	char str1[] = "1235";
//	printf("\nmy   : %zu\n",ft_strlen(str));
//	printf("\norig : %lu\n",strlen(str));
//	printf("\nmy   : %zu\n",ft_strlen(str1));
//	printf("\norig : %lu\n",strlen(str1));
//	printf("\nmy   : %zu\n",ft_strlen(""));
//	printf("\norig : %lu\n",strlen(""));
//
//}
//
//void	ft_check_memcmp()
//{
//	char str[] = "1234";
//	char str1[] = "1235";
//	char str2[] = "1204";
//	char str3[] = "3254";
//	printf("\nmy   : %d\n",ft_memcmp(str, str, 0));
//	printf("\norig : %d\n",memcmp(str, str, 0));
//	printf("\nmy   : %d\n",ft_memcmp(str, str1, 4));
//	printf("\norig : %d\n",memcmp(str, str1, 4));
//	printf("\nmy   : %d\n",ft_memcmp(str, str2, 3));
//	printf("\norig : %d\n",memcmp(str, str2, 3));
//	printf("\nmy   : %d\n",ft_memcmp(str, str3, 3));
//	printf("\norig : %d\n",memcmp(str, str3, 3));
//
//}
//
//void	ft_check_memchr()
//{
//	char str[] = "56789ABCD";
//	printf("\nmy   : %s\n",ft_memchr(str, 'A', 3));
//	printf("\norig : %s\n",memchr(str, 'A', 3));
//	printf("\nmy   : %s\n",ft_memchr(str, 'A', 9));
//	printf("\norig : %s\n",memchr(str, 'A', 9));
//	printf("\nmy   : %s\n",ft_memchr(str, '3',9));
//	printf("\norig : %s\n",memchr(str, '3', 9));
//}
//
//void 	ft_check_memmove()
//{
//	char str[] = "56789ABCD";
////	char str2[] = "zxcvbnm";
////	char str1[] = "56789ABCD";
//	printf("\nmy   : %s %s\n",ft_memmove(&str[1], &str[3], 4), str);
//	printf("\norig : %s %s",memmove(&str[1], &str[3], 4), str);
//}
//
//int		ft_check_memcpy()
//{
//	char str[] = "1234";
//	char str1[] = "5678";
//	int q[5] = {1, 1, 3, 4, 5};
//	int c[5] = {6, 7, 8, 9, 10};
//
//	printf("\nmy   : %s\n",ft_memcpy("", "", 0));
//	printf("\norig : %s\n",memcpy("", "", 0));
//	printf("\nmy   : %s\n",ft_memcpy("", "", 3));
//	printf("\norig : %s\n",memcpy("", "", 3));
//	size_t i = 1;
//	while (i < 5)
//	{
//		printf("my   :%s\n",ft_memcpy(str, str1, i));
//		printf("orig :%s\n",memcpy(str, str1, i));
//		i++;
//	}
//	i = 1;
//	while (i < 5)
//	{
//		printf("\nmy   :");
//		print_arr(ft_memcpy(q, c, i), 5);
//		printf("\norig :");
//		print_arr(memcpy(q, c, i), 5);
//		i++;
//	}
//
//	return (0);
//}
//
//// memset & bzero
//int		ft_check()
//{
//	char str[] = "1234";
//	char str1[] = "1234";
//	ft_bzero(str, 2);
//	bzero(str1, 2);
//	printf("ft_bzero = %c %c %c bzero = %c %c %c",str[0], str[1], str[2], str1[0], str1[1], str1[2]);
//	int q[5] = {1, 1, 3, 4, 5};
//	int c[5] = {1, 1, 3, 4, 5};
//
//	int *w = q;
//	size_t i = 5;
//	while (i != 0)
//	{
//		i--;
//		memset((w + i), 0, 1);
//	}
//	//ft_bzero(c, 5);
//	//bzero(q, 5);
//	print_arr(c, 5);
//	printf("\n");
//	print_arr(q, 5);
//	return (0);
//}
//
//void	ft_check_memset(int *w, int *q, int val, size_t num)
//{
//	ft_memset(w, val, num);
//	memset(q, val, num);
//	printf("\nft_memset : ");
//	print_arr(w, 5);
//	printf("\n memset : ");
//	print_arr(q, 5);
//}
//
//void	print_arr(int *arr, size_t len)
//{
//	size_t i;
//
//	i = 0;
//	while (i < len)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//}
