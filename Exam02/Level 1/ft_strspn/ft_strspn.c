/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:37:28 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/09 14:29:11 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;
	int	j;

	i = 0;
	while (accept[i])
	{
		j = 0;
		while (s[j] && accept[i])
		{
			if (s[j] == accept[i])
			{
				i = 0;
				j++;
			}
			i++;
		}
	}
	return (j);
}

// int main(void)
// {
//     const char *s = "Hello, World!";
//     const char *accept = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
//     size_t result = ft_strspn(s, accept);
//     printf("Input string: %s\n", s);
//     printf("Accepted characters: %s\n", accept);
//     printf("Length of initial segment: %zu\n", result);
//     return 0;
// }
