# :books: ft_atoi
:arrow_right: [Subject file](./subject.en.txt) 

:arrow_right: [Answer here!](./ft_atoi.c)

## Explanation

The provided code represents a function `ft_atoi` that converts a string argument `str` to an integer (type `int`) and returns it. The function follows the behavior of the standard `atoi(const char *str)` function.

Here's a brief overview of the implementation:

1. The function initializes variables `res` (result), `i` (index), and `sign` (sign indicator) to appropriate values.
2. It checks if the first character of the string is `'-'` or `'+'` to determine the sign of the resulting integer.
3. If the first character is `'-'`, the `sign` is set to `-1`, and the index `i` is incremented.
4. The function then iterates through the remaining characters of the string.
5. It converts each character to its corresponding numerical value and adds it to the result after multiplying it by 10 (to shift the previous digits).
6. The conversion is performed using the ASCII value of the character (`str[i] - 48`), where `'0'` has an ASCII value of `48`.
7. Finally, the resulting value is multiplied by the sign and returned as the integer result.

The function `ft_atoi` is declared as `int ft_atoi(const char *str)`, where `const char *str` represents the string argument.

The key here is to be able to add each digit in the correct order
``` C
res = res * 10 + str[i++] - 48
```
This adds a '0' to the end of the number by multiplying by 10 and then adds the current digit.
Don't forget to check in the beginning for any signal and return the number multiplied by the signal.

## Subject

```
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);

```

# Found any issue? Contact me! 📥

◦ Email: fduque-a@student.42porto.com

# Might interest you!

### - Check my 42 common-core progress ↙️

[HERE](https://github.com/fduquea/42cursus)

### - My 42 intra profile ↙️
[HERE](https://profile.intra.42.fr/users/fduque-a)