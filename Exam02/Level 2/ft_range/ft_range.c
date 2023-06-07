/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:03:17 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/06 22:50:54 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int size = abs(end - start) + 1;
	int *res = malloc(sizeof(int) * size);
	if (!res)
		return NULL;
	int i = 0;
	if (start > end)
	{
		while (start >= end)
		{
			res[i] = start;
			start -= 1;
			i++;
		}
	}
	else
	{
		while (start <= end)
		{
			res[i] = start;
			start += 1;
			i++;
		}
	}
	return (res);
}

// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	if (argc < 3)
// 		return 0;
// 	int a = atoi(argv[1]);
// 	int b = atoi(argv[2]);
// 	int *test = ft_range(a, b);
// 	int i = 0;
// 	printf("Output:");
// 	while (i <= abs(b - a))
// 	{
// 		printf(" %i", test[i]);
// 		i++;
// 	}
//  free(test);
// }

// Example: ./a.out  -10   10
//			  av[0]  av[1] av[2]