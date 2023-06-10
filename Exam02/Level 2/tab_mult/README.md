# :books: tab_mult

[Subject File](./subject.en.txt) | [Solution File](tab_mult.c)

## :clipboard: Explanation

The `tab_mult` program takes a positive number as a command-line argument and displays its multiplication table. Here's an overview of the implementation:

1. The program checks if the number of arguments (`argc`) is equal to 2, which means one argument was provided.
2. It uses the `ft_atoi` function to convert the argument from a string to an integer and assigns it to the variable `n`.
3. It initializes a loop counter `i` to 1.
4. It enters a loop that repeats 9 times (from `i = 1` to `i <= 9`).
5. Inside the loop, it displays the value of `i` using the `ft_putnbr` function, followed by the string " x " and the value of `n`.
6. It displays the string " = " and the result of `n * i` using the `ft_putnbr` function.
7. It displays a newline character (`'\n'`) using the `write` function to move to the next line.
8. After completing the loop, the program ends.
9. If no arguments were provided or more than one argument was provided, the program displays a newline character to complete the output.

The `tab_mult` program correctly displays the multiplication table of the given positive number.

## :pencil: Subject

```
Assignment name  : tab_mult
Expected files   : tab_mult.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a number's multiplication table.

The parameter will always be a strictly positive number that fits in an int,
and said number times 9 will also fit in an int.

If there are no parameters, the program displays \n.

Examples:

$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$>

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: