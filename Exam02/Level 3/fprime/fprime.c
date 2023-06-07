/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:21:08 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/07 14:30:27 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_isprime(int n)
{
	int	i = 2;
	while (n > i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int n = atoi(argv[1]), i = 2, first = 1;
		if (n == 1)
			printf("1");
		while (n >= i)
		{
			if (n % i == 0 && ft_isprime(i))
			{
				if (first == 1)
				{
					printf("%i", i);
					first = 0;
				}
				else
					printf("*%i", i);
				n = n / i;
			}
			else 
				i++;
		}
	}
	printf("\n");
}