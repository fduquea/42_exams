# :books: ft_atoi_base

[Subject File](./subject.en.txt) | [Solution File](ft_atoi_base.c)

## :clipboard: Explanation

The `ft_atoi_base` function converts a string argument `str` (base N <= 16) to an integer (base 10) and returns it. It supports base conversion from 2 to 16.

Here's a brief overview of the implementation:

1. The function first checks if the base (`str_base`) is within the valid range of 2 to 16. If it's not, the function returns 0.
2. It initializes variables `sign` (to handle the sign of the number), `i` (as an iterator for the string), `res` (to store the result), and `c` (to store the converted value of a character).
3. The function skips leading spaces and tabs in the string by incrementing the index `i` until a non-space/tab character is found.
4. If the first character after the spaces/tabs is a minus sign ('-'), the `sign` variable is set to -1. If it's a plus sign ('+'), the `sign` variable remains 1. In both cases, the index `i` is incremented to move to the next character.
5. The function then iterates over the remaining characters in the string.
6. For each character, it checks if it falls within the valid range of the specified base. If it's a digit character ('0' to '9'), the corresponding value is calculated by subtracting '0'. If it's a lowercase letter ('a' to 'f'), the corresponding value is calculated by subtracting 'a' and adding 10. If it's an uppercase letter ('A' to 'F'), the corresponding value is calculated by subtracting 'A' and adding 10.
7. If the character is not within the valid range, the function returns 0 to indicate an error.
8. The function accumulates the converted value by multiplying the result by the base and adding the converted value of the current character.
9. Finally, it returns the calculated result multiplied by the sign.

The function performs base conversion from the specified base to base 10, handling sign interpretation and error conditions.

## :pencil: Subject

```
Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: