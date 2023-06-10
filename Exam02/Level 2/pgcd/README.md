# :books: pgcd

[Subject File](./subject.en.txt) | [Solution File](pgcd.c)

## :clipboard: Explanation

The `pgcd` program calculates and displays the highest common denominator (GCD) of two strictly positive integers provided as command-line arguments. Here's an overview of the implementation:

1. The program checks if the number of arguments (`argc`) is equal to 3, which means two integers were provided.
2. It converts the command-line arguments `argv[1]` and `argv[2]` to integers using the `atoi` function.
3. The program determines the initial value for the GCD calculation. It sets `n` to the smaller of the two integers.
4. The program enters a loop that iterates while `n` is greater than 0.
5. Inside the loop, it checks if both integers are divisible by `n` using the modulo operator. If both are divisible, it means `n` is their greatest common divisor.
6. The program then displays the GCD using the `printf` function and returns from the function.
7. If the loop completes without finding a common divisor, the program displays a newline character to indicate that no GCD was found.
8. Finally, the program ends.

The `pgcd` program correctly calculates and displays the highest common denominator of the two provided integers.

## :pencil: Subject

```
Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e 
1$
$> ./pgcd | cat -e
$

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: