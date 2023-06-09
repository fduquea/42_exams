# :books: camel_to_snake
:arrow_right: [Subject file](./subject.en.txt) 

:arrow_right: [Answer here!](./camel_to_snake.c)

## Explanation

Disclaimer: This one is weird, the subject allows the use of malloc, free and realloc but honestly it looks such an easy subject that I don't see where I would need it. It also doesn't mention the number of arguments allowed or if it wants a new line after, but we can see that it wants the newline in the examples, and it also only uses 1 argument, so I also added a check that wants it to only be 1 argument or the program will only display a newline.

The provided code represents a program called `camel_to_snake` that converts a string from lowerCamelCase format to snake_case format. Here's a brief overview of the implementation:

- The program checks if there is exactly one command-line argument passed (excluding the program name).
- If there is a single argument, the program proceeds with the conversion operation.
- The program iterates through each character in the string `argv[1]`.
- If the current character is an uppercase letter (`'A'` to `'Z'`), the program writes an underscore (`'_'`) using the `write` function, followed by the lowercase version of the letter obtained by adding `32` to its ASCII value.
- If the current character is not an uppercase letter, the program simply writes the character using the `write` function.
- Finally, a newline character is printed using the `write` function.

## Subject

```
Assignment name  : camel_to_snake
Expected files   : camel_to_snake.c
Allowed functions: malloc, free, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in lowerCamelCase format
and converts it into a string in snake_case format.

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

Examples:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$

```

# Found any issue? Contact me! 📥

◦ Email: fduque-a@student.42porto.com

# Might interest you!

### - Check my 42 common-core progress ↙️

[HERE](https://github.com/fduquea/42cursus)

### - My 42 intra profile ↙️
[HERE](https://profile.intra.42.fr/users/fduque-a)