# :books: ft_strpbrk
:arrow_right: [Subject file](./subject.en.txt) 

:arrow_right: [Answer here!](./ft_strpbrk.c)

## Explanation

The ft_strpbrk function is designed to replicate the behavior of the standard library function strpbrk as described in the manual page man strpbrk. It searches a string s1 for any character that matches a character in the string s2 and returns a pointer to the first occurrence of such character.

The function works by iterating over each character in s1 and comparing it to each character in s2. If a match is found, a pointer to the matching character in s1 is returned. If no match is found, the function returns NULL.

Here is an overview of the implementation:

1.   Initialize variables i and j to 0.
2.   Start a loop to iterate over each character in s1 using the index i.
3.   Within the outer loop, start another loop to iterate over each character in s2 using the index j.
4.   Check if the current character in s1 (accessed using s1[i]) matches the current character in s2 (accessed using s2[j]).
5.   If there is a match, return a pointer to the matching character in s1 by casting (char *)(s1 + i).
6.   If no match is found within the inner loop, increment j and continue searching for matches.
7.   After the inner loop completes, increment i to move to the next character in s1.
8.   Repeat steps 3-7 until the end of s1 is reached.
9.   If no match is found after iterating through all characters in s1, return NULL to indicate no match was found.

Make sure to include the necessary header file stddef.h for the function prototype.

## Subject

```
Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);

```

# Found any issue? Contact me! 📥

◦ Email: fduque-a@student.42porto.com

# Might interest you!

### - Check my 42 common-core progress ↙️

[HERE](https://github.com/fduquea/42cursus)

### - My 42 intra profile ↙️
[HERE](https://profile.intra.42.fr/users/fduque-a)