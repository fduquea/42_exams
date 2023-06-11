# :books: hidenp

[Subject File](./subject.en.txt) | [Solution File](hidenp.c)

## :clipboard: Explanation

The `hidenp` program takes two strings as input and determines whether the first string is hidden in the second string. Here's an overview of the implementation:

1. The program checks if the number of parameters is exactly 2. If not, it displays a newline and terminates.
2. It initializes variables `i`, `j`, and `res` to keep track of the positions in the strings and the result.
3. The program iterates over the characters of the second string (`argv[2]`) using `i`.
4. If the character at index `i` in the second string matches the character at index `j` in the first string (`argv[1]`), it increments `j`.
5. If `j` reaches the end of the first string (indicating that all characters from the first string have been found in order), it sets `res` to 1.
6. Finally, it converts `res` to a character by adding 48 (ASCII value of '0') and writes it to the standard output using the `write()` function. Then, it writes a newline character.

The program correctly determines whether the first string is hidden in the second string and displays the result accordingly.

## :pencil: Subject

```
Assignment name  : hidenp
Expected files   : hidenp.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program named hidenp that takes two strings and displays 1
followed by a newline if the first string is hidden in the second one,
otherwise displays 0 followed by a newline.

Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
find each character from s1 in s2, in the same order as they appear in s1.
Also, the empty string is hidden in any string.

If the number of parameters is not 2, the program displays a newline.

Examples :

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$>

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: