/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:51:37 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/10 19:12:53 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int	count_words(char *str)
{
	int	res;

	res = 0;
	while (*str)
	{
		if (!is_space(*str))
		{
			res++;
			while (!is_space(*str) && *str)
				str++;
		}
		else
			str++;
	}
	return (res);
}

char	*put_word(char *str)
{
	int		i;
	char	*res;

	i = 0;
	while (!is_space(str[i]) && str[i])
		i++;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && !is_space(str[i]))
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char *str)
{
	char	**words;
	int		i;

	words = (char **)malloc(sizeof(char *) * (count_words(str) + 1));
	if (!words)
		return (NULL);
	i = 0;
	while (*str)
	{
		if (!is_space(*str))
		{
			words[i] = put_word(str);
			i++;
			while (!is_space(*str) && *str)
				str++;
		}
		else
			str++;
	}
	words[i] = NULL;
	return (words);
}

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	if (argc == 1)
// 		return 0;
// 	char	*s = argv[1];
// 	char **words = ft_split(s);
// 	int count = count_words(s);

// 	for(int i = 0; i < count; i++)
// 	{
// 		printf("%s\n", words[i]);
// 		free(words[i]);
// 	}
// 	free(words);
// }