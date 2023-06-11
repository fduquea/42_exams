# :books: ft_strcspn

[Subject File](./subject.en.txt) | [Solution File](./ft_strcspn.c)

## :clipboard: Explanation

The provided code represents a function `ft_strcspn` that reproduces the behavior of the standard `strcspn` function. It calculates the length of the initial segment of a string `s` that does not contain any characters from a set of characters `reject`.

Here's a brief overview of the implementation:

1. The function initializes two variables `i` and `j` as indices to iterate through the characters of the strings `s` and `reject`.
2. It enters a while loop that continues as long as `s[i]` is not a null character (`'\0'`).
3. Inside the loop, it enters another while loop that continues as long as `reject[j]` is not a null character (`'\0'`).
4. It checks if the current character `reject[j]` is equal to the character `s[i]`. If they match, it means `s[i]` is present in the `reject` string, so the function returns the current index `i`.
5. If the characters don't match, it increments the index `j` to move to the next character in the `reject` string.
6. After the inner loop terminates, it increments the index `i` to move to the next character in the `s` string.
7. If no match is found, the function continues to the next iteration of the outer loop until it reaches the end of the string `s`.
8. Finally, if no match is found throughout the string `s`, the function returns the length of the string `s`.

The function `ft_strcspn` is declared as `size_t ft_strcspn(const char *s, const char *reject)`, where `const char *s` represents the string to search in and `const char *reject` represents the set of characters to reject.

## :pencil: Subject

```
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);
```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: