# :books: expand_str

[Subject File](./subject.en.txt) | [Solution File](expand_str.c)

## :clipboard: Explanation

The `expand_str` program takes a string as an argument and displays the string with exactly three spaces between each word, removing any extra spaces or tabs at the beginning or the end. Here's a brief overview of the implementation:

1. The program first checks if the number of arguments is 1 (i.e., one argument provided).
2. If the number of arguments is not 1, or if there are no words to display, it writes a newline character '\n' to the standard output using the `write` function and exits the program.
3. If the argument is provided, it assigns it to the `str` variable.
4. The program then iterates over the characters in the string.
5. It writes each character of a word to the standard output using the `write` function until it encounters a space/tab character or reaches the end of the string.
6. After writing a word, it skips any consecutive spaces/tabs by incrementing the index `i` until a non-space/tab character is found.
7. If `flag` is set (indicating that a word has already been written), it writes three space characters ' ' to the standard output using the `write` function.
8. The program continues this process until the end of the string is reached.
9. Finally, it writes a newline character '\n' to the standard output using the `write` function.

The program utilizes the `write` function for outputting characters and handles space/tab removal and word separation with exactly three spaces based on the given logic.

## :pencil: Subject

```
Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./expand_str "See? It's easy to print the same thing" | cat -e
See?   It's   easy   to   print   the   same   thing$
$> ./expand_str " this        time it      will     be    more complex  " | cat -e
this   time   it   will   be   more   complex$
$> ./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./expand_str "" | cat -e
$
$>

$> ./expand_str "vous   voyez   c'est   facile   d'afficher   la   meme   chose" | cat -e
vous   voyez   c'est   facile   d'afficher   la   meme   chose$
$> ./expand_str " seulement          la c'est      plus dur " | cat -e
seulement   la   c'est   plus   dur$
$> ./expand_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./expand_str "" | cat -e
$
$>

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: