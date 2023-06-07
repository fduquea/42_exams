/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:28:58 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/06 23:33:45 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int n;
		if (a > b)
			n = b;
		else
			n = a;
		while (n)
		{
			if (a % n == 0 && b % n == 0)
				return(printf("%i\n", n));
			n--;
		}		
	}
	printf("\n");
}
