# :books: add_prime_sum

[Subject File](./subject.en.txt) | [Solution File](add_prime_sum.c)

## :clipboard: Explanation

The `add_prime_sum` program takes a positive integer as an argument and displays the sum of all prime numbers that are less than or equal to the given number. Here's a brief overview of the implementation:

1. The program first checks if the number of arguments is 1 (i.e., one argument provided).
2. If the number of arguments is not 1, or the argument is not a positive number, it writes "0" to the standard output using the `write` function and exits the program.
3. If the argument is a positive number, it converts the argument from a string to an integer using the `ft_atoi` function.
4. It then calls the `ft_add_prime_sum` function with the converted integer as an argument to calculate the sum of all prime numbers less than or equal to the given number.
5. Finally, it uses the `ft_putnbr` function to write the sum to the standard output using the `write` function, followed by a newline character '\n'.

The program utilizes the `ft_atoi`, `ft_putnbr`, `ft_isprime`, and `ft_add_prime_sum` functions for number conversion, output, prime number checking, and sum calculation, respectively.

## :pencil: Subject

```
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: