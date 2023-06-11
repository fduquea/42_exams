# :books: sort_list

[Subject File](./subject.en.txt) | [Solution File](sort_list.c) | [Header](./list.h)

## :clipboard: Explanation

The `sort_list` function takes a linked list `lst` and a comparison function `cmp` as parameters. It sorts the list in ascending order based on the comparison function and returns a pointer to the first element of the sorted list.

The implementation follows these steps:

1. The function initializes a variable `tmp` to store the temporary data during swapping and a pointer `curr` to keep track of the original head of the list.
2. It iterates through the list using a while loop and stops at the last element.
3. Inside the loop, it compares the data of the current node with the data of the next node using the `cmp` function.
4. If the comparison returns 0, indicating that the current node should be swapped with the next node, the function performs the swap by exchanging their data values.
5. After swapping, it resets the `lst` pointer to the original head of the list using the `curr` pointer.
6. If no swap is performed, it moves to the next node in the list.
7. Once the loop reaches the end of the list, the function returns the `lst` pointer, which now points to the first element of the sorted list.

## :pencil: Subject

```
Assignment name  : sort_list
Expected files   : sort_list.c
Allowed functions: 
--------------------------------------------------------------------------------

Write the following functions:

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

This function must sort the list given as a parameter, using the function 
pointer cmp to select the order to apply, and returns a pointer to the 
first element of the sorted list.

Duplications must remain.

Inputs will always be consistent.

You must use the type t_list described in the file list.h 
that is provided to you. You must include that file 
(#include "list.h"), but you must not turn it in. We will use our own 
to compile your assignment.

Functions passed as cmp will always return a value different from 
0 if a and b are in the right order, 0 otherwise.

For example, the following function used as cmp will sort the list 
in ascending order:

int ascending(int a, int b)
{
	return (a <= b);
}

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: