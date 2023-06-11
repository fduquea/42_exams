/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 21:26:29 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/11 22:07:23 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		f(begin_list->data);
		begin_list = begin_list->next;
	}
}

// #include <stdlib.h>
// #include <stdio.h>

// void print_data(void *data)
// {
// 	printf("%d\n", *(int*)data);
// }

// int main()
// {
// 	// Create a linked list with some integer values
// 	t_list *list = (t_list*)malloc(sizeof(t_list));
// 	t_list *node1 = (t_list*)malloc(sizeof(t_list));
// 	t_list *node2 = (t_list*)malloc(sizeof(t_list));
// 	t_list *node3 = (t_list*)malloc(sizeof(t_list));
// 	int data1 = 10;
// 	int data2 = 20;
// 	int data3 = 30;
// 	int	data4 = 40;
// 	list->data = &data1;
// 	list->next = node1;
// 	node1->data = &data2;
// 	node1->next = node2;
// 	node2->data = &data3;
// 	node2->next = node3;
// 	node3->data = &data4;
// 	node3->next = NULL;
// 	// Call ft_list_foreach to print each data value
// 	ft_list_foreach(list, print_data);
// 	// Free the memory allocated for the list nodes
// 	free(node3);
// 	free(node2);
// 	free(node1);
// 	free(list);
// }
