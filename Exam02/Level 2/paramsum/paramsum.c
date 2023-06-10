/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:19:17 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/10 18:05:06 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 9)
		ft_putnbr(n / 10);
	c = n % 10 + 48;
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (!argv[1])
		return (write(1, "0\n", 2));
	ft_putnbr(argc - 1);
	write(1, "\n", 1);
}
