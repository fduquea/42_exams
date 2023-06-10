# :books: ft_strcpy

[Subject File](./subject.en.txt) | [Solution File](./ft_strcpy.c)

## :clipboard: Explanation

The `ft_strcpy` function is designed to replicate the behavior of the `strcpy` function, which copies a string from `s2` to `s1`. Here's a brief overview of the implementation:

1. The function `ft_strcpy` is defined with two parameters: `char *s1` and `char *s2`, representing the destination and source strings, respectively.
2. Inside the function, an integer variable `i` is initialized to 0.
3. The function enters a loop that continues until the end of the source string `s2` is reached (indicated by the null character `'\0'`).
4. Inside the loop, the function copies the character at the current index `i` of `s2` to the corresponding index `i` of `s1`.
5. The function increments `i` to move to the next character in both `s1` and `s2`.
6. The loop continues until the end of the source string `s2` is reached.
7. After the loop, the null character `'\0'` is appended to the end of the destination string `s1`, indicating the end of the copied string.
8. The function returns the destination string `s1`.

## :pencil: Subject

```
Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: 
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: