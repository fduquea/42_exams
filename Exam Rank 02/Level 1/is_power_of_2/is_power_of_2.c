/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:33:17 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/05 17:46:57 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	while (n > 0)
	{
		if (n == 2)
			return (1);
		if (n % 2 != 0)
			return (0);
		n = n / 2;
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (0);
// 	int test1 = atoi(argv[1]);
// 	int	test2 = is_power_of_2(test1);
// 	printf("%i\n", test2);
// }
