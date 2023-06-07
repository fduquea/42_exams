/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:31:40 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/07 14:50:53 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_itoa(int nbr)
{
	int i = 0, len = 0, sign = 0;
	long cpy = nbr, copy = nbr;
	char *res;
	if (cpy < 0)
	{
		cpy *= -1;
		sign = 1;
	}
	while (cpy > 9)
	{
		len++;
		cpy /= 10;
	}
	len++;
	res = malloc(sizeof(char) * len + 1 + sign);
	if (!res)
		return (NULL);
	res[len + sign] = '\0';
	if (sign == 1)
	{
		res[0] = '-';
		copy *= -1;
		i++;
		len += 1;
	}
	while (copy != 0)
	{
		len--;
		res[len] = copy % 10 + 48;
		copy = copy / 10;
	}
	return (res);
}

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return 0;
// 	int n = atoi(argv[1]);
// 	char *str = ft_itoa(n);
// 	printf("%s\n", str);
// }