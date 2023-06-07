/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:45:12 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/07 12:18:46 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

int ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		char c;
		int i = 1;
		while (argv[i])
		{
			int j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] != '\t' && argv[i][j] != ' ' && \
				(argv[i][j+1] == '\t' || argv[i][j+1] == ' ' || argv[i][j+1] == '\0'))
				{
					c = ft_toupper(argv[i][j]);
					write(1, &c, 1);
				}
				else 
				{
					c = ft_tolower(argv[i][j]);
					write(1, &c, 1);
				}
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}