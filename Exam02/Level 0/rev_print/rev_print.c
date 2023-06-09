/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:50:47 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/09 10:10:31 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	if (argc == 2)
	{
		i = 0;
		str = argv[1];
		while (str[i])
			i++;
		while (i > 0)
		{
			write(1, &(str[i - 1]), 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
