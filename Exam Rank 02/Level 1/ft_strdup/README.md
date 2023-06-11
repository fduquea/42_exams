# :books: ft_strdup

[Subject File](./subject.en.txt) | [Solution File](./ft_strdup.c)

## :clipboard: Explanation

The provided code represents a function `ft_strdup` that reproduces the behavior of the standard `strdup` function. It duplicates a string `src` by allocating memory for a new string, copying the contents of `src` into the new string, and returning a pointer to the new string.

Here's a brief overview of the implementation:

1. The function starts by calculating the length of the string `src` by iterating through the characters until it encounters a null character (`'\0'`).
2. It then allocates memory for the new string `dup` using `malloc`, with a size equal to the length of `src` plus one additional byte for the null character.
3. If the memory allocation fails (i.e., `malloc` returns `NULL`), the function returns `NULL`.
4. If the memory allocation is successful, the function proceeds to copy the contents of `src` into `dup` character by character using a loop.
5. After copying all characters, it appends the null character at the end of `dup` to ensure it is a valid string.
6. Finally, the function returns the pointer to the newly allocated and duplicated string `dup`.

The function `ft_strdup` is declared as `char *ft_strdup(char *src)`, where `char *src` represents the string to duplicate.

! Don't forget to allocate memory for the '\0' character. !

## :pencil: Subject

```
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: