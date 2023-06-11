/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:51:37 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/10 18:03:36 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	c;
	int		i;
	int		j;
	int		res;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		res = 0;
		while (argv[2][i])
		{
			if (argv[2][i] == argv[1][j])
			{
				j++;
			}
			if (!argv[1][j])
				res = 1;
			i++;
		}
		c = res + 48;
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}
