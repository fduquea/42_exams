/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 23:20:48 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/06 12:55:12 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	while (str[i])
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res);
}

void ft_putnbr(int n)
{
    if (n <= 9)
    {
        char c = n + '0';
        write(1, &c, 1);
    }
    else
    {
        ft_putnbr(n / 10);
        char c = (n % 10) + '0';
        write(1, &c, 1);
    }
}

int	ft_isprime(int n)
{
	int i = 2;
	while (n > i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_add_prime_sum(int n)
{
	int res = 0;
	int	i = 2;
	while (n >= i)
	{
		if (ft_isprime(i))
			res += i;
		i++;
	}
	return (res);
}

int	main(int argc, char **argv)
{
	int n;
	if (argc == 2 && (n = ft_atoi(argv[1])))
	{
		ft_putnbr(ft_add_prime_sum(n));
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}
