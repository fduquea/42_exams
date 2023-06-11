/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 22:05:02 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/11 22:29:05 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				temp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	tab[8] = {1, 100, 32, 12, 543, 2, 123, 543};
// 	int	i = 0;
// 	while (i < 8)
// 	{
// 		printf("%i ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	sort_int_tab(tab, 8);
// 	i = 0;
// 	while (i < 8)
// 	{
// 		printf("%i ", tab[i]);
// 		i++;
// 	}
// }
