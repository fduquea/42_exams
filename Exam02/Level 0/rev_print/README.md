# :books: rev_print
:arrow_right: [Subject file](./subject.en.txt) 

:arrow_right: [Answer here!](./rev_print.c)

## Explanation

The provided subject asks for a program that takes a command-line argument as a string and prints the string in reverse order, followed by a newline character. Here's a brief overview of the implementation:

1. The program checks if there is exactly one command-line argument passed (excluding the program name).
2. If there is a single argument, the program proceeds with the reverse printing operation.
3. The variable `i` is initialized to 0, and the pointer `str` is assigned to the first command-line argument (`argv[1]`).
4. The program iterates through each character in the string `str` to find its length.
5. Starting from the end of the string, the program uses the `write` function to print each character in reverse order.
6. Finally, a newline character is printed using the `write` function.

The only allowed function in the subject is `write`.

## Subject

```
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$

```

# Found any issue? Contact me! 📥

◦ Email: fduque-a@student.42porto.com

# Might interest you!

### - Check my 42 common-core progress ↙️

[HERE](https://github.com/fduquea/42cursus)

### - My 42 intra profile ↙️
[HERE](https://profile.intra.42.fr/users/fduque-a)