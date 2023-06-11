# :books: ft_list_remove_if

[Subject File](./subject.en.txt) | [Solution File](ft_list_remove_if.c) |  [Header](./ft_list.h)

## :clipboard: Explanation

The `ft_list_remove_if` function removes elements from a linked list based on a given reference data value. It iterates through the list and removes any element whose data is "equal" to the reference data.

The implementation follows these steps:

1. If the `begin_list` or `*begin_list` is `NULL`, the function returns without any action.
2. It defines a pointer `cur` and assigns `*begin_list` to it as the current node.
3. If the data of the current node is "equal" to the reference data (as determined by the `cmp` function), the function removes the current node from the list.
   - It updates `*begin_list` to skip the current node (`cur->next`).
   - It frees the memory allocated for the current node using the `free` function.
   - It recursively calls `ft_list_remove_if` to continue removing elements from the updated list.
4. It updates `cur` to the next node (`cur->next`).
5. It recursively calls `ft_list_remove_if` with the updated `cur` and the same reference data and `cmp` function to process the remaining nodes in the list.

## :pencil: Subject

```
Assignment name  : ft_list_remove_if
Expected files   : ft_list_remove_if.c
Allowed functions: free
--------------------------------------------------------------------------------

Write a function called ft_list_remove_if that removes from the
passed list any element the data of which is "equal" to the reference data.

It will be declared as follows :

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

cmp takes two void* and returns 0 when both parameters are equal.

You have to use the ft_list.h file, which will contain:

$>cat ft_list.h
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;
$>
```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: