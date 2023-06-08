# :books: camel_to_snake
:arrow_right: [Subject file](./subject.en.txt) 

:arrow_right: [Answer](./camel_to_snake.c)

## Explanation

Disclaimer: This one is weird, the subject allows the use of malloc, free and realloc but honestly it sounds so easy the way it's asked that I don't see where is needed. It also don't mention the number of arguments allowed or if it wants a new line after, but we can see that it wants the newline in the examples, and it also only uses 1 argument, so I also added a check that wants it to only be 1 argument or the program will only display a newline.

Basically everytime you find a capital letter, you print a '_' and the letter in lowercase.

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