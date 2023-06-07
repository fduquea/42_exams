/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:55:43 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/05 17:05:52 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t	i = 0;
	size_t	j = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (reject[j] == s[i])
				return (i);
			else
				j++;
		}
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	if (argc != 3)
// 		return (0);
// 	size_t test = ft_strcspn(argv[1], argv[2]);
// 	printf("%li\n", test);
// }