# :books: union

[Subject File](./subject.en.txt) | [Solution File](union.c)

## :clipboard: Explanation

The `union` program takes two strings and displays, without duplicates, the characters that appear in either one of the strings. Here's a brief overview of the implementation:

1. The program uses an array `arr` of size 256 to keep track of characters that have already been displayed.
2. It iterates over the characters of the first string `argv[1]` and checks if the corresponding entry in `arr` is 0.
3. If the entry is 0, it means the character hasn't been encountered before, so it writes the character to the standard output using the `write` function and updates the corresponding entry in `arr` to 1.
4. It then repeats the same process for the characters of the second string `argv[2]`.
5. Finally, it writes a newline character `\n` to complete the output.

## :pencil: Subject

```
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: