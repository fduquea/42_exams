# :books: ft_strspn
:arrow_right: [Subject file](./subject.en.txt)

:arrow_right: [Answer here!](./ft_strspn.c)

## Explanation

The `ft_strspn` function is designed to replicate the behavior of the standard library function `strspn` as described in the manual page `man strspn`. It calculates the length of the initial segment of a string `s` that consists entirely of characters from another string `accept`.

The function works as follows:

1. Initialize variables `i` and `j` to 0.
2. Use a loop to iterate over each character in `accept` using the index `i`.
3. Within the outer loop, use another loop to iterate over each character in `s` using the index `j` and check if it matches the current character in `accept`.
4. If a match is found, reset `i` to 0 to continue checking subsequent characters in `accept`.
5. Increment `j` to move to the next character in `s`.
6. Repeat steps 3-5 until the end of `s` is reached or a character in `s` doesn't match any character in `accept`.
7. Return the value of `j`, which represents the length of the initial segment of `s` consisting entirely of characters from `accept`.

Here is the implementation of the `ft_strspn` function:

```c
size_t ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j;

    while (accept[i])
    {
        j = 0;
        while (s[j] && accept[i])
        {
            if (s[j] == accept[i])
            {
                i = 0;
                j++;
            }
            i++;
        }
    }
    return (j);
}
```

Ensure that no additional functions beyond the allowed ones are used and include the necessary header files for the function prototype.

## Subject

```
Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);


```

# Found any issue? Contact me! 📥

◦ Email: fduque-a@student.42porto.com

# Might interest you!

### - Check my 42 common-core progress ↙️

[HERE](https://github.com/fduquea/42cursus)

### - My 42 intra profile ↙️
[HERE](https://profile.intra.42.fr/users/fduque-a)
