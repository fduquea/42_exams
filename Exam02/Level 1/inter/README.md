# :books: inter
:arrow_right: [Subject file](./subject.en.txt)

:arrow_right: [Answer here!](./inter.c)

## Explanation

The `inter` program is designed to compare two strings and display the characters that appear in both strings, without any duplicates. The characters are displayed in the order they appear in the first string.

Here is an overview of the implementation:

1. The program takes two strings as command-line arguments.
2. It initializes an array `arr` of size 256, which represents all possible ASCII characters. All elements of `arr` are initially set to 0.
3. If the number of command-line arguments is not 2, the program displays a newline character and exits.
4. It iterates over each character in the first string (`argv[1]`) using the index `i`.
5. Within the outer loop, it iterates over each character in the second string (`argv[2]`) using the index `k`.
6. If a character in the first string matches a character in the second string, the program checks if the character has been previously encountered (duplicates check) using the `arr` array.
7. If the character has not been encountered before, it is displayed using the `write` function and its corresponding element in the `arr` array is set to 1 to mark it as encountered.
8. After comparing all characters in the second string for a given character in the first string, the index `k` is reset to 0 to start the comparison for the next character in the first string.
9. The program continues iterating until all characters in the first string have been processed.
10. Finally, the program displays a newline character.

Ensure that only the `write` function is used, and no additional functions beyond the allowed ones are used.


## Subject

```
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$

```

# Found any issue? Contact me! 📥

◦ Email: fduque-a@student.42porto.com

# Might interest you!

### - Check my 42 common-core progress ↙️

[HERE](https://github.com/fduquea/42cursus)

### - My 42 intra profile ↙️
[HERE](https://profile.intra.42.fr/users/fduque-a)