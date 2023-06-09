# :books: rot_13
:arrow_right: [Subject file](./subject.en.txt) 

:arrow_right: [Answer here!](./rot_13.c)

## Explanation


The provided code represents a program that takes a command-line argument as a string and applies the ROT13 encryption algorithm to each letter in the string. Here's a brief overview of the implementation:

1. The program checks if there is exactly one command-line argument passed (excluding the program name).
2. If there is a single argument, the program proceeds with the ROT13 encryption.
3. The program iterates through each character in the string `argv[1]`.
4. For each character, if it is a lowercase or uppercase letter, the program applies the ROT13 encryption by adding or subtracting 13 to its ASCII value.
5. The encrypted character is then printed using the `write` function.
6. Finally, a newline character is printed using the `write` function.

Simple, if the current character is in the first half of the alphabet, move up 13 positions in the ASCII table and print it, if it's in the second half of the alphabet, move down 13 positions in the ASCII table and print it.

## Subject

```
Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>

```

# Found any issue? Contact me! 📥

◦ Email: fduque-a@student.42porto.com

# Might interest you!

### - Check my 42 common-core progress ↙️

[HERE](https://github.com/fduquea/42cursus)

### - My 42 intra profile ↙️
[HERE](https://profile.intra.42.fr/users/fduque-a)