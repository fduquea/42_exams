# :books: ft_rrange

[Subject File](./subject.en.txt) | [Solution File](ft_rrange.c)

## :clipboard: Explanation

The `ft_rrange` function allocates an array of integers using `malloc()` and fills it with consecutive values from `end` to `start`, inclusive. Here's an overview of the implementation:

1. The function calculates the size of the array by taking the absolute difference between `end` and `start`, and adding 1 to account for inclusive range.
2. It allocates memory for the array using `malloc()` and checks if the allocation was successful. If not, it returns `NULL`.
3. Depending on whether `start` is greater than `end` or not, the function iterates from `end` to `start` or from `start` to `end`.
4. In each iteration, it assigns the current value to the corresponding index in the array and increments/decrements `end` accordingly.
5. Finally, it returns the pointer to the first value of the array.

The function correctly handles both increasing and decreasing ranges, and returns the expected array of consecutive values.

## :pencil: Subject

```
Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: