/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 09:52:40 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/09 14:27:44 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	j;
	int	i;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *)(s1 + i));
			j++;
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main() {
//     // Test 1
//     const char *str1 = "Hello, world!";
//     const char *str2 = "aeiou";
//     char *result = ft_strpbrk(str1, str2);
//     if (result != NULL) {
//         printf("Test 1: Found matching character '%c'\n", *result);
//     } else {
//         printf("Test 1: No matching character found\n");
//     }

//     // Test 2
//     const char *str3 = "Intra 42";
//     const char *str4 = "xyz";
//     result = ft_strpbrk(str3, str4);
//     if (result != NULL) {
//         printf("Test 2: Found matching character '%c'\n", *result);
//     } else {
//         printf("Test 2: No matching character found\n");
//     }

//     // Test 3
//     const char *str5 = "1234567890";
//     const char *str6 = "aeiou";
//     result = ft_strpbrk(str5, str6);
//     if (result != NULL) {
//         printf("Test 3: Found matching character '%c'\n", *result);
//     } else {
//         printf("Test 3: No matching character found\n");
//     }

//     return 0;
// }
