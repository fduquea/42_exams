# :books: ft_strrev
:arrow_right: [Subject file](./subject.en.txt)

:arrow_right: [Answer here!](./ft_strrev.c)

## Explanation

The `ft_strrev` function is designed to reverse a string in-place. It takes a string `str` as input, modifies the string by reversing its characters, and returns a pointer to the reversed string.

The function works as follows:

1. Initialize variables `temp`, `len`, and `i`.
2. Calculate the length of the string by iterating over each character of `str` using the variable `len`.
3. Use a loop to swap characters from the beginning and end of the string until the middle is reached.
   - Swap `str[i]` with `str[len - 1 - i]` using a temporary variable `temp`.
   - Increment `i` in each iteration.
   - The loop iterates until `i` reaches `len / 2` to avoid swapping already reversed characters.
4. Return the modified string `str`.

Here is my implementation of the `ft_strrev` function:

``` C
char *ft_strrev(char *str)
{
    char temp;
    int len;
    int i;

    i = 0;
    len = 0;
    while (str[len])
        len++;
    while (i < len / 2)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
        i++;
    }
    return (str);
}
```

## Subject

```
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);

```

# Found any issue? Contact me! 📥

◦ Email: fduque-a@student.42porto.com

# Might interest you!

### - Check my 42 common-core progress ↙️

[HERE](https://github.com/fduquea/42cursus)

### - My 42 intra profile ↙️
[HERE](https://profile.intra.42.fr/users/fduque-a)