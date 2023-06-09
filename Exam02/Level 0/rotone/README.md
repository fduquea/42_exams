# :books: rotone
:arrow_right: [Subject file](./subject.en.txt) 

:arrow_right: [Answer here!](./rotone.c)

## Explanation

The provided code represents a program that takes a command-line argument as a string and applies the ROTone encryption algorithm to each letter in the string. Here's a brief overview of the implementation:

1. The program checks if there is exactly one command-line argument passed (excluding the program name).
2. If there is a single argument, the program proceeds with the ROTone encryption.
3. The program iterates through each character in the string `argv[1]`.
4. For each character, if it is a lowercase or uppercase letter (excluding 'z' and 'Z'), the program increments its ASCII value by 1 to get the next letter in alphabetical order.
5. If the character is 'z' or 'Z', the program wraps around to 'a' or 'A' by subtracting 25 from its ASCII value.
6. The encrypted character is then printed using the `write` function.
7. Finally, a newline character is printed using the `write` function.

Basically, if the current character is a letter and is different than 'z'/'Z', move up one position in the ASCII table and print it. If it's 'z'/'Z', move down 25 positions in the ASCII table and print it.

## Subject

```
Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
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