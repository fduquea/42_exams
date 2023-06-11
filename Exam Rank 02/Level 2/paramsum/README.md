# :books: paramsum

[Subject File](./subject.en.txt) | [Solution File](paramsum.c)

## :clipboard: Explanation

The `paramsum` program counts the number of arguments passed to it and displays the count followed by a newline. Here's an overview of the implementation:

1. The program checks if `argv[1]` is `NULL`, which means no arguments were provided except for the program name itself. In this case, it returns 0 followed by a newline.
2. If there are arguments, the program calculates the number of arguments by subtracting 1 from the `argc` value, which represents the total number of command-line arguments including the program name.
3. The program calls the `ft_putnbr` function to convert the argument count to a string and display it using the `write` function.
4. Finally, the program writes a newline character to complete the output.

The `paramsum` program correctly counts and displays the number of arguments passed to it.

## :pencil: Subject

```
Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: