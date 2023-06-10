# :books: last_word
:arrow_right: [Subject file](./subject.en.txt) 

:arrow_right: [Answer here!](last_word.c)

## Explanation

Here's a brief overview of the implementation:

1. The program starts by checking if the number of command-line parameters is exactly 2 (i.e., the program name and one additional argument). If the number of parameters is not 2, the program simply displays a newline and terminates.
2. If the number of parameters is 2, the program proceeds to find the last word in the input string.
3. It iterates through the characters of the input string in reverse order, starting from the last character and moving towards the beginning.
4. It skips any trailing spaces or tabs by decrementing the index `i` until a non-whitespace character is encountered.
5. Once a non-whitespace character is found, the program continues moving backward until it reaches the start of the last word (either a space/tab or the beginning of the string).
6. After locating the start of the last word, the program moves forward again, printing each character of the last word using the `write` function.
7. Finally, the program displays a newline character (`'\n'`) to complete the output.

The program does not require any additional functions or headers other than `unistd.h` for the `write` function.

## Subject

```
Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>

```

# Found any issue? Contact me! 📥

◦ Email: fduque-a@student.42porto.com

# Might interest you!

### - Check my 42 common-core progress ↙️

[HERE](https://github.com/fduquea/42cursus)

### - My 42 intra profile ↙️
[HERE](https://profile.intra.42.fr/users/fduque-a)