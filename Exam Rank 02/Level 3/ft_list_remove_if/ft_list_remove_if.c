/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 21:50:11 by fduque-a          #+#    #+#             */
/*   Updated: 2023/06/11 22:06:42 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*cur;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	cur = *begin_list;
	if (cmp(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	cur = *begin_list;
	ft_list_remove_if(&cur->next, data_ref, cmp);
}

// #include <stdio.h>

// // Example comparison function
// int compare_data(void *data1, void *data2)
// {
//     int *num1 = (int *)data1;
//     int *num2 = (int *)data2;

//     return (*num1 == *num2) ? 0 : 1;
// }

// // Example function to print the list
// void print_list(t_list *list)
// {
//     while (list != NULL)
//     {
//         printf("%d ", *((int *)list->data));
//         list = list->next;
//     }
//     printf("\n");
// }

// // Example function to free the list
// void free_list(t_list *list)
// {
//     t_list *temp;
//     while (list != NULL)
//     {
//         temp = list;
//         list = list->next;
//         free(temp->data);
//         free(temp);
//     }
// }

// int main()
// {
//     t_list *list = NULL;
//     t_list *node1 = (t_list *)malloc(sizeof(t_list));
//     t_list *node2 = (t_list *)malloc(sizeof(t_list));
//     t_list *node3 = (t_list *)malloc(sizeof(t_list));
//     t_list *node4 = (t_list *)malloc(sizeof(t_list));

//     int *data1 = (int *)malloc(sizeof(int));
//     int *data2 = (int *)malloc(sizeof(int));
//     int *data3 = (int *)malloc(sizeof(int));
//     int *data4 = (int *)malloc(sizeof(int));

//     *data1 = 10;
//     *data2 = 20;
//     *data3 = 10;
//     *data4 = 30;

//     node1->data = data1;
//     node1->next = node2;

//     node2->data = data2;
//     node2->next = node3;

//     node3->data = data3;
//     node3->next = node4;

//     node4->data = data4;
//     node4->next = NULL;

//     list = node1;

//     printf("Before removal: ");
//     print_list(list);

//     int reference_data = 10;
//     ft_list_remove_if(&list, &reference_data, compare_data);

//     printf("After removal: ");
//     print_list(list);

//     // Free the memory allocated for the list nodes
//     free_list(list);

//     return 0;
// }