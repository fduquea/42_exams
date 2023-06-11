/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 23:10:20 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/10 17:38:10 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	arr[256] = {0};
	int	i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (arr[(int)argv[1][i]] == 0)
			{
				write(1, &(argv[1][i]), 1);
				arr[(int)argv[1][i]] = 1;
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (arr[(int)argv[2][i]] == 0)
			{
				write(1, &(argv[2][i]), 1);
				arr[(int)argv[2][i]] = 1;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
