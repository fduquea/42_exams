# :books: sort_int_tab

[Subject File](./subject.en.txt) | [Solution File](sort_int_tab.c)

## :clipboard: Explanation

The `sort_int_tab` function sorts an integer array `tab` in ascending order. It performs an in-place sorting algorithm to rearrange the elements of the array.

The implementation follows these steps:

1. It initializes a variable `i` to 0.
2. It enters a while loop that continues until `i` reaches the second-to-last element of the array (`size - 1`).
3. Inside the loop, it compares `tab[i]` with `tab[i + 1]`.
   - If `tab[i]` is greater than `tab[i + 1]`, it means the elements are out of order and need to be swapped.
     - It uses a temporary variable `temp` to store the value of `tab[i]`.
     - It assigns `tab[i + 1]` to `tab[i]` and `temp` to `tab[i + 1]` to perform the swap.
     - It sets `i` back to 0 to start comparing elements from the beginning of the array.
   - If `tab[i]` is not greater than `tab[i + 1]`, it means the elements are in order, and it increments `i` to move to the next pair of elements.
4. Once the loop completes, the array `tab` will be sorted in ascending order.

## :pencil: Subject

```
Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: