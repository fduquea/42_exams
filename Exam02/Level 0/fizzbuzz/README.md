# :books: fizzbuzz
:arrow_right: [Subject file](./subject.en.txt) 

:arrow_right: [Answer here!](fizzbuzz.c)

## Explanation

The `fizzbuzz` program is a classic programming exercise that prints numbers from 1 to 100, with some variations based on divisibility rules. Here's an overview of the implementation:

1. The program includes the necessary header file `<unistd.h>` for the `write` function.
2. There's a helper function `print_number` that takes an integer `i` as input and prints it to the standard output using the `write` function. This function handles both single-digit and double-digit numbers.
3. The main function `main` is defined without any arguments (`int main(void)`).
4. Inside the main function, an integer variable `i` is initialized to 1.
5. The program enters a loop that continues while `i` is less than or equal to 100.
6. Inside the loop, the program checks the divisibility of `i` using the modulo operator (`%`).
7. If `i` is divisible by both 3 and 5, the program writes the string "fizzbuzz" to the standard output using the `write` function.
8. If `i` is only divisible by 3, the program writes the string "fizz" to the standard output.
9. If `i` is only divisible by 5, the program writes the string "buzz" to the standard output.
10. If none of the above conditions are met, the program calls the `print_number` function to print the value of `i`.
11. After printing the corresponding value, the program writes a newline character (`\n`) to the standard output using the `write` function.
12. Finally, the program increments `i` and continues the loop until `i` reaches 101.
13. The program terminates and returns 0.

The allowed function `write` is used to output characters.


How to check if a number is multiple of 3 or 5?
If the result of 'x % 3' = 0, then x is multiple of 3, because '%' is the rest.
Example:
'9 % 3' = 0, how many times does 3 fit inside 9? 3. 3 * 3 = 9. 9 - 9 = 0;
'9 % 5' = 4, how many times does 5 fit inside 9? 1. 1 * 5 = 5. 9 - 5 = 4;
5 is not a multiple of 9 and 3 is a multiple of 9, so when the number is 9 it should print "fizz".

## Subject

```
Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$> 

```

# Found any issue? Contact me! 📥

◦ Email: fduque-a@student.42porto.com

# Might interest you!

### - Check my 42 common-core progress ↙️

[HERE](https://github.com/fduquea/42cursus)

### - My 42 intra profile ↙️
[HERE](https://profile.intra.42.fr/users/fduque-a)
