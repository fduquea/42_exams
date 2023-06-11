/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:06:02 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/06 15:31:27 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int str_base)
{
	if (str_base < 2 || str_base > 16)
		return (0);
	int	sign = 1, i = 0, res = 0, c = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			c = str[i] - 48;
		else if (str[i] >= 'a' && str[i] <= 'f')
			c = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			c = str[i] - 'A' + 10;
		else
			return (0);
		res = res * str_base + c;
		i++;
	}
	return (res * sign);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int a = ft_atoi_base("101010", 2);
// 	printf("%i", a);
// }

// The key is the line 36

// 0 * 2 + 1 = 1
// 1 * 2 + 0 = 2
// 2 * 2 + 1 = 5
// 5 * 2 + 0 = 10
// 10 * 2 + 1 = 21
// 21 * 2 + 0 = 42