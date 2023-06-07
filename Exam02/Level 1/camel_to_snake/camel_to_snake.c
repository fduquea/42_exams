/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:26:43 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/05 15:38:35 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *s = argv[1];
		int i = 0;
		int	c;
		while (s[i])
		{
			if(s[i] >= 'A' && s[i] <= 'Z')
			{
				write(1, "_", 1);
				c = s[i] + 32;
				write(1, &c, 1);
			}
			else
				write(1, &s[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
