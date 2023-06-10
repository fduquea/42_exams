/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:02:46 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/10 17:59:33 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		flag;

	if (argc == 2)
	{
		*str = argv[1];
		i = 0;
		flag = 0;
		while (str[i])
		{
			while (str[i] && (str[i] == '\t' || str[i] == ' '))
				i++;
			if (str[i] && flag)
				write(1, " ", 1);
			while (str[i] && str[i] != ' ' && str[i] != '\t')
			{
				flag = write(1, &str[i], 1);
				i++;
			}
			if (str[i])
				i++;
		}	
	}
	write(1, "\n", 1);
}
