# :books: fprime

[Subject File](./subject.en.txt) | [Solution File](fprime.c)

## :clipboard: Explanation

The `fprime` program takes a positive integer as input and displays its prime factors on the standard output, separated by `*`. The factors are displayed in ascending order.

The implementation follows these steps:

1. The `ft_isprime` function is defined, which takes an integer `n` as input and returns 1 if `n` is prime and 0 otherwise.
2. Inside the `ft_isprime` function, a loop is used to check if any number from 2 to `n-1` divides `n` evenly. If it does, `n` is not prime, and the function returns 0. If no number divides `n` evenly, `n` is prime, and the function returns 1.
3. The `main` function is defined, which handles the program's execution.
4. If the number of command-line arguments is not 2, meaning there is no input, the program simply displays a newline and exits.
5. If there is an input, the input is converted to an integer using the `atoi` function and stored in the variable `n`.
6. A loop is used to find the prime factors of `n`. Starting from 2, each number is checked if it divides `n` evenly and is prime.
7. If a prime factor is found, it is displayed using `printf`. The first prime factor is displayed without the `*` separator, while the rest are displayed with the `*` separator.
8. After displaying all the prime factors, a newline is printed.

## :pencil: Subject

```
Assignment name  : fprime
Expected files   : fprime.c
Allowed functions: printf, atoi
--------------------------------------------------------------------------------

Write a program that takes a positive int and displays its prime factors on the
standard output, followed by a newline.

Factors must be displayed in ascending order and separated by '*', so that
the expression in the output gives the right result.

If the number of parameters is not 1, simply display a newline.

The input, when there is one, will be valid.

Examples:

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: