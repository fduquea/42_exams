/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:32:13 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/05 12:50:13 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int k;
	char *str;

	if (argc == 2)
	{
		i = 0;
		str = argv[1];
		while (str[i])
		{
			k = 1;
			if (str[i] >= 'a' && str[i] <= 'z')
				k = str[i] - 96;
			else if (str[i] >= 'A' && str[i] <= 'Z')
				k = str[i] - 64;
			while (k > 0)
			{
				write(1, &str[i], 1);
				k--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
