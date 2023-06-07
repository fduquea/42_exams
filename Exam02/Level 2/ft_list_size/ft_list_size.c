/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:52:07 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/06 16:02:43 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

int	ft_list_size(t_list *begin_list)
{
	if (!begin_list)
		return (0);
	int	i = 1;
	while (begin_list->next)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	t_list *a = malloc(sizeof(t_list));
// 	t_list *b = malloc(sizeof(t_list));
// 	t_list *c = malloc(sizeof(t_list));
// 	t_list *d = malloc(sizeof(t_list));

// 	int i = 42;
// 	a->next = b;
// 	b->next = c;
// 	c->next = d;
// 	d->next = NULL;
// 	a->data = (void*)&i;
// 	b->data = (void*)&i;
// 	c->data = (void*)&i;
// 	d->data = (void*)&i;
// 	printf("Size list: %i elements.\n", ft_list_size(a));
// }