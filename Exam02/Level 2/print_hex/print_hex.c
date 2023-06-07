/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:35:52 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/06 23:44:35 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int res = 0, i = 0;
	while (str[i])
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res);
}

void	ft_putnbr_hex(int n)
{
	char *base = "0123456789abcdef";
	if (n > 16)
		ft_putnbr_hex(n / 16);
	int i = n % 16;
	char c = base[i];
	write(1, &c, 1);
	
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	n = ft_atoi(argv[1]);
		ft_putnbr_hex(n);
	}
	write(1, "\n", 1);
}
