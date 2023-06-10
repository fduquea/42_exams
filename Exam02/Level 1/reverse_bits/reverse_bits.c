/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 14:33:51 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/10 17:36:19 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	res;

	i = 0;
	res = 0;
	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

// #include <stdio.h>
// int main(void)
// {
//     unsigned char octet = 60;
    
//     printf("\nOriginal octet: %u\n", octet);
    
//     unsigned char reversed = reverse_bits(octet);
    
//     printf("Reversed octet: %u\n\n", reversed);

// 	octet = 61;
    
//     printf("Original octet: %u\n", octet);
    
//     reversed = reverse_bits(octet);
    
//     printf("Reversed octet: %u\n\n", reversed);
    
//     return 0;
// }
