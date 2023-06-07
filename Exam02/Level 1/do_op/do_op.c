/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:27:47 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/05 16:37:21 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[3]);
		int	res = 0;
		if (argv[2][0] == '*')
			res = n1 * n2;
		else if (argv[2][0] == '/')
			res = n1 / n2;
		else if (argv[2][0] == '-')
			res = n1 - n2;
		else if (argv[2][0] == '+')
			res = n1 + n2;
		else if (argv[2][0] == '%')
			res = n1 % n2;
		printf("%i", res);
	}
	printf("\n");
}
