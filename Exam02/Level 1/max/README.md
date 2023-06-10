# :books: max

[Subject File](./subject.en.txt) | [Solution File](max.c)

## :clipboard: Explanation

The provided code represents a function named `max` that finds the largest number in an array of integers.

Here's a brief overview of the implementation:

1. The function takes two parameters: `tab`, which is a pointer to the first element of the array, and `len`, which represents the number of elements in the array.
2. It initializes a variable `res` with the value of the first element in the array (`tab[0]`).
3. Using a `while` loop, the function iterates through the array in reverse order, starting from the last element and moving towards the beginning.
4. Inside the loop, it compares each element with the current maximum value (`res`), and if an element is greater than `res`, it updates `res` with the new maximum value.
5. After iterating through all the elements, the function returns the final maximum value (`res`).
6. If the array is empty (i.e., `len` is 0), the function returns 0.

The function does not require any additional functions or headers.

## :pencil: Subject

```
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: