/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:55:07 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/06 15:05:11 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int	i = 0, flag = 0;
		while (str[i])
		{
			while (str[i] && str[i] != '\t' && str[i] != ' ')
			{
				flag = write(1, &str[i], 1);
				i++;
			}
			while (str[i] && (str[i] == ' ' || str[i] == '\t'))
				i++;
			if (str[i] && flag)
				write (1, "   ", 3);
		}
	}
	write(1, "\n", 1);
}
