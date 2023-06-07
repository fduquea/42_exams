/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 20:10:40 by fduque-a          #+#    #+#             */
/*   Updated: 2023/05/31 21:48:22 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
    int	i;
	int	j;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i > 9)
		{
			j = (i / 10) + 48;
			write(1, &j, 1);
			j = (i % 10) + 48;
			write(1, &j, 1);
		}
		else
		{
			j = i + 48;
			write(1, &j, 1);
		}
		write(1, "\n", 1);
		i++;
	}
}
