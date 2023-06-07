/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:51:37 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/06 22:59:03 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		char *s1 = argv[1];
		char *s2 = argv[2];
		int i = 0, j = 0, res = 0;
		while (s2[i])
		{
			if (s2[i] == s1[j])
			{
				j++;
			}
			if (!s1[j])
				res = 1;
			i++;
		}
		char c = res + 48;
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}