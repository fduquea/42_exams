/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:12:24 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/05 18:25:35 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int	res = tab[0];
	while (len-- > 0)
	{
		if (tab[len] > res)
			res = tab[len];
	}
	return (res);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int argc, char **argv)
// {
// 	if (argc == 1)
// 		return (0);
// 	int	len = atoi(argv[1]);
// 	int	tab[len];
// 	int	i = 0;
// 	int	j = 2;
// 	while (len > i)
// 		tab[i++] = atoi(argv[j++]);
// 	int test = max(tab, len);
// 	printf("%i\n", test);
// }

//argv[1] = number of elements in the array
//argv[2-x] = elements of the array
//example: "./a.out 5       3 12 432 123 2"
//                argv[1]     argv[2-6]
