# :books: print_hex

[Subject File](./subject.en.txt) | [Solution File](print_hex.c)

## :clipboard: Explanation

The `print_hex` program takes a positive (or zero) number expressed in base 10 as a command-line argument and displays it in base 16 (lowercase letters) followed by a newline. Here's an overview of the implementation:

1. The program checks if the number of arguments (`argc`) is equal to 2, which means one argument was provided.
2. It converts the command-line argument `argv[1]` to an integer using the `ft_atoi` function.
3. The program calls the `ft_putnbr_hex` function to convert and display the number in base 16.
4. The `ft_putnbr_hex` function works recursively. If the number is greater than 16, it recursively calls itself with the quotient of the number divided by 16.
5. Inside the `ft_putnbr_hex` function, it calculates the remainder of the number divided by 16 and maps it to the corresponding hexadecimal digit using an array of characters (`base`).
6. The function then displays the hexadecimal digit using the `write` function.
7. The program displays a newline character to complete the output.
8. Finally, the program ends.

The `print_hex` program correctly converts and displays the given number in base 16.

## :pencil: Subject

```
Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: