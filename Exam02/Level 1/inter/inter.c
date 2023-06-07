/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:14:49 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/05 17:31:47 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int	arr[256] = {0};
		int	i = 0;
		int	k = 0;
		while (argv[1][i])
		{
			while (argv[2][k])
			{
				if (argv[1][i] == argv[2][k])
				{
					if (arr[(int)argv[1][i]] == 0)
					{
						write(1, &(argv[1][i]), 1);
						arr[(int)argv[1][i]] = 1;
					}
				}
				k++;
			}
			k = 0;
			i++;
		}
	}
	write(1, "\n", 1);
}
