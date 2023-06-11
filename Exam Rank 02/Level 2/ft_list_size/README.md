# :books: ft_list_size

[Subject File](./subject.en.txt) | [Solution File](ft_list_size.c)

## :clipboard: Explanation

The `ft_list_size` function returns the number of elements in the linked list passed to it. Here's a brief overview of the implementation:

1. The function initializes a variable `i` to 1 as a starting count.
2. If the `begin_list` pointer is `NULL`, indicating an empty list, the function returns 0.
3. The function iterates through the linked list by traversing the `next` pointers until it reaches the last element.
4. For each element, it increments the count variable `i`.
5. Finally, the function returns the count `i`, which represents the number of elements in the linked list.

The function accurately determines the size of the linked list and returns the correct count of elements.

## :pencil: Subject

```
Assignment name  : ft_list_size
Expected files   : ft_list_size.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure in your program ft_list_size.c :

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: