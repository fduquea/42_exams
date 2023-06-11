# :books: snake_to_camel

[Subject File](./subject.en.txt) | [Solution File](snake_to_camel.c)

## :pencil: Explanation

The `snake_to_camel` program takes a single string in snake_case format and converts it into a string in lowerCamelCase format. Here's a brief overview of the implementation:

1. The program checks if the number of command-line parameters is exactly 2 (i.e., the program name and one additional argument).
2. If there are 2 parameters, the program proceeds to convert the snake_case string to lowerCamelCase.
3. The program iterates through each character of the input string.
4. If the character is an underscore '_', the program increments the index `i`, converts the next character to uppercase by subtracting 32 (the ASCII difference between lowercase and uppercase letters), and writes the updated character to the standard output using the `write` function.
5. If the character is not an underscore, the program simply writes the character to the standard output.
6. Finally, the program writes a newline character '\n' to complete the output.

The program uses the `write` function from the `unistd.h` header to display the converted string.

## :pencil: Subject

```
Assignment name  : snake_to_camel
Expected files   : snake_to_camel.c
Allowed functions: malloc, free, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in snake_case format
and converts it into a string in lowerCamelCase format.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

Examples:
$>./snake_to_camel "here_is_a_snake_case_word"
hereIsASnakeCaseWord
$>./snake_to_camel "hello_world" | cat -e
helloWorld$
$>./snake_to_camel | cat -e
$

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: