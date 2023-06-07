/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 22:41:36 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/05 22:56:44 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	i = 0;
		char updated;
		while (argv[1][i])
		{
			if (argv[1][i] == '_')
			{
				i++;
				updated = argv[1][i] - 32;
				write(1, &updated, 1);
			}
			else
				write(1, &(argv[1][i]), 1);
			i++;
		}
	}
	write(1, "\n", 1);
}