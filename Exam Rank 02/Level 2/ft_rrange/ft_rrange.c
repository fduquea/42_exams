/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:39:13 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/06 22:51:07 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int size = abs(end - start) + 1;
	int *res = malloc(sizeof(int) * size);
	int i = 0;
	if (start > end)
	{
		while (start >= end)
		{
			res[i] = end;
			end += 1;
			i++; 
		}
	}
	else
	{
		while (start <= end)
		{
			res[i] = end;
			end -= 1;
			i++;
		}
	}
	return (res);
}

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	if (argc < 3)
// 		return (0);
// 	int a = atoi(argv[1]);
// 	int b = atoi(argv[2]);
// 	int *test = ft_rrange(a, b);
// 	int i = 0;
// 	printf("Output:");
// 	while (i <= abs(b - a))
// 	{
// 		printf(" %i", test[i]);
// 		i++;
// 	}
// 	free(test);
// }
