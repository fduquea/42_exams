# :books: wdmatch

[Subject File](./subject.en.txt) | [Solution File](wdmatch.c)

## :clipboard: Explanation

The `wdmatch` program takes two strings and checks whether it's possible to write the first string with characters from the second string while respecting the order in which these characters appear in the second string. Here's a brief overview of the implementation:

1. The program iterates over the characters of the second string `argv[2]` and checks if each character matches the current character of the first string `argv[1]`.
2. If a match is found, it increments the index `i` of the first string.
3. After iterating through all the characters of the second string, it checks if the entire first string has been matched by verifying if `argv[1][i]` is null ('\0').
4. If the entire first string has been matched, it calls the `ft_putstr` function to write the first string to the standard output using the `write` function.
5. Finally, it writes a newline character '\n' to complete the output.

## :pencil: Subject

```
Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$

```

## Found any issue? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: