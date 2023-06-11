/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:44:56 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/09 13:12:43 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		i;

	if (argc == 2)
	{
		i = 0;
		str = argv[1];
		while (str[i])
		{
			if ((str[i] >= 'a' && str[i] <= 'y')
				|| (str[i] >= 'A' && str[i] <= 'Y'))
				str[i] = str[i] + 1;
			else if (str[i] == 'Z' || str[i] == 'z')
				str[i] = str[i] - 25;
			write(1, &(str[i]), 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
