# :books: rostring

[Subject File](./subject.en.txt) | [Solution File](rostring.c)

## :clipboard: Explanation

The `rostring` program takes a string as a parameter and rotates it one word to the left. The first word becomes the last, and the other words stay in the same order. A "word" is defined as a part of a string delimited by spaces/tabs or by the start/end of the string.

The implementation follows these steps:

1. If the number of command-line arguments (`argc`) is less than or equal to 1, the program displays a newline character and terminates.
2. If `argc` is greater than 1, the program proceeds with the word rotation logic.
3. The program initializes variables `i`, `flag`, and `flag2` to keep track of indices and flags.
4. The program iterates through the characters of the input string `av[1]`.
5. It skips any leading spaces in the string.
6. When a non-space character is encountered, the program identifies the word and writes it to the standard output using the `write` function.
7. After writing the word, the program checks if there are more words to write. If so, it writes a space character to separate the words.
8. The program continues this process until it has processed all the words in the input string.
9. Finally, a newline character is written to the standard output.

## :pencil: Subject

```
Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter, and prints its words in 
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the 
begin/end of the string.

If the number of parameters is different from 1, the program will display 
'\n'.

In the parameters that are going to be tested, there won't be any "additional" 
spaces (meaning that there won't be additionnal spaces at the beginning or at 
the end of the string, and words will always be separated by exactly one space).

Examples:

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: