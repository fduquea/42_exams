# :books: ft_strcmp

[Subject File](./subject.en.txt) | [Solution File](./ft_strcmp.c)

## :clipboard: Explanation

The provided code represents a function `ft_strcmp` that reproduces the behavior of the standard `strcmp` function. It compares two strings `s1` and `s2` and returns an integer value based on their lexicographical order.

Here's a brief overview of the implementation:

1. The function initializes a variable `i` as the index to iterate through the characters of the strings.
2. It enters a while loop that continues as long as both `s1[i]` and `s2[i]` are not null characters (`'\0'`) and the characters at the current index are equal (`s1[i] == s2[i]`).
3. Inside the while loop, the index `i` is incremented to move to the next character in the strings.
4. After the loop terminates, the function calculates the difference between `s1[i]` and `s2[i]` and returns the result.
   - If the strings are equal, the difference will be 0.
   - If `s1` is lexicographically less than `s2`, the difference will be negative.
   - If `s1` is lexicographically greater than `s2`, the difference will be positive.

The function `ft_strcmp` is declared as `int ft_strcmp(char *s1, char *s2)`, where `char *s1` and `char *s2` represent the two strings to be compared.

TL:DR: compare the characters of both strings until one is different or one string reaches the end, then return the difference of the first string to the second, returning '> 0' if the first string is bigger, '0' if they are the same, and '< 0' if the first string is smaller.

## :pencil: Subject

```
Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: