/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:15:32 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/09 14:28:42 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	temp;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
//     char str[] = "Hello, World!";
//     printf("Original string: %s\n", str);
//     ft_strrev(str);
//     printf("Reversed string: %s\n", str);
//     return 0;
// }
