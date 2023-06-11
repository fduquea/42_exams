# :books: ft_list_foreach

[Subject File](./subject.en.txt) | [Solution File](ft_list_foreach.c) | [Header](./ft_list.h)

## :clipboard: Explanation

The `ft_list_foreach` function takes a list and a function pointer as parameters. It applies the given function to each element of the list.

The implementation follows these steps:

1. The `ft_list_foreach` function iterates through the list starting from the `begin_list` pointer.
2. For each node in the list, it calls the function `f` and passes the `data` field of the current node as an argument.
3. The function `f` is responsible for performing the desired operation on each element of the list.

## :pencil: Subject

```
Assignment name  : ft_list_foreach
Expected files   : ft_list_foreach.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a list and a function pointer, and applies this
function to each element of the list.

It must be declared as follows:

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

The function pointed to by f will be used as follows:

(*f)(list_ptr->data);

You must use the following structure, and turn it in as a file called
ft_list.h:

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