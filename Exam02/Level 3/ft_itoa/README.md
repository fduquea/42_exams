# :books: ft_itoa

[Subject File](./subject.en.txt) | [Solution File](ft_itoa.c)

## :clipboard: Explanation

The `ft_itoa` function takes an integer (`nbr`) as input and converts it to a null-terminated string. The function returns the resulting string in a dynamically allocated character array.

The implementation follows these steps:

1. The variables `i`, `len`, `sign`, `cpy`, and `copy` are initialized. `i` is used as a loop counter, `len` keeps track of the length of the resulting string, `sign` determines whether the number is negative, `cpy` stores the absolute value of `nbr`, and `copy` is used for manipulation without modifying the original value of `nbr`.
2. If `nbr` is negative, `cpy` is made positive, and `sign` is set to 1.
3. A loop is used to calculate the length of the resulting string by dividing `cpy` by 10 until it becomes less than or equal to 9.
4. After the loop, `len` is incremented by 1 to account for the last digit.
5. Memory is allocated for the resulting string using `malloc`. The size of the allocated memory is `len + 1 + sign` to accommodate the digits, null terminator, and negative sign if necessary.
6. If the allocation fails, `NULL` is returned.
7. The null terminator is placed at the end of the allocated memory.
8. If `sign` is 1, indicating a negative number, the negative sign is placed at the beginning of the resulting string, and `copy` is made negative.
9. A loop is used to populate the resulting string with digits from `copy`. The digits are obtained by taking the remainder of `copy` divided by 10 and adding 48 to convert the remainder to its corresponding character representation.
10. After each iteration, `len` is decremented, and the character is placed in the resulting string.
11. The resulting string is returned.

## :pencil: Subject

```
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: