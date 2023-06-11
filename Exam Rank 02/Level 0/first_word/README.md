# :books: first_word

[Subject File](./subject.en.txt) | [Solution File](./first_word.c)

## :clipboard: Explanation

The `first_word` program is designed to take a string as input and display its first word, followed by a newline. A word is defined as a section of the string delimited by spaces, tabs, or the start/end of the string.

Here is an overview of the implementation:

1. The program takes command-line arguments `argc` (argument count) and `argv` (argument vector) as input.
2. It initializes a variable `i` to 0.
3. If the `argc` is equal to 2 (indicating a single argument provided), the program proceeds.
4. It skips leading spaces and tabs in the input string by incrementing `i` until a non-space/tab character is encountered.
5. The program then enters a loop that continues as long as there are characters in the string (`argv[1][i]`) and the current character is not a space or tab.
6. Within the loop, it writes the current character to the standard output using the `write` function.
7. It increments `i` to move to the next character in the string.
8. Once the loop ends, the program writes a newline character to the standard output.
9. The program terminates and returns 0.

The allowed function `write` is used to output characters.

## :pencil: Subject

```
Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette:
