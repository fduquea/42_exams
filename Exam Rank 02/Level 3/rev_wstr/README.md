# :books: rev_wstr

[Subject File](./subject.en.txt) | [Solution File](rev_wstr.c)

## :clipboard: Explanation

The `rev_wstr` program takes a string as a parameter and prints its words in reverse order. A "word" is defined as a part of the string bounded by spaces and/or tabs, or the beginning/end of the string.

The implementation follows these steps:

1. If the number of command-line arguments (`argc`) is not equal to 2, the program displays a newline character and terminates.
2. If `argc` is equal to 2, the program proceeds with the reverse word printing logic.
3. The program initializes two variables `i` and `j` to keep track of indices in the string.
4. The program iterates through the characters of the input string `argv[1]` in reverse order.
5. When a space or tab character is encountered, the program identifies the word and prints it in reverse order by iterating from the current index `j` to `i+1`. It writes each character to the standard output using the `write` function.
6. After printing a word, if there are more words to print, a space character is written to the standard output.
7. The program continues this process until it has processed all the words in the input string.
8. Finally, a newline character is written to the standard output.

## :pencil: Subject

```
Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter, and prints its words in 
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the 
begin/end of the string.

If the number of parameters is different from 1, the program will display 
'\n'.

In the parameters that are going to be tested, there won't be any "additional" 
spaces (meaning that there won't be additionnal spaces at the beginning or at 
the end of the string, and words will always be separated by exactly one space).

Examples:

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: