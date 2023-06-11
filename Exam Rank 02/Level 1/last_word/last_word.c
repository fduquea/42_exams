/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:47:35 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/10 17:41:17 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		i--;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i--;
		while (argv[1][i] != ' ' && argv[1][i] != '\t')
			i--;
		i++;
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write(1, &(argv[1][i]), 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
