# :books: rstr_capitalizer

[Subject File](./subject.en.txt) | [Solution File](rstr_capitalizer.c)

## :clipboard: Explanation

The `rstr_capitalizer` program takes one or more strings as command-line arguments and capitalizes the last letter of each word while keeping the rest of the word in lowercase. Here's an overview of the implementation:

1. The program checks if the number of arguments (`argc`) is greater than 1, which means at least one argument was provided.
2. It iterates over each argument using a loop starting from index 1 (`i = 1`).
3. For each argument, it iterates over each character using another loop starting from index 0 (`j = 0`).
4. Inside the inner loop, it checks if the current character is not a space, tab, or the end of the string (`argv[i][j+1] == '\t' || argv[i][j+1] == ' ' || argv[i][j+1] == '\0'`).
5. If the condition is true, it means the current character is the last letter of a word, so it calls the `ft_toupper` function to convert it to uppercase and displays it using the `write` function.
6. Otherwise, it calls the `ft_tolower` function to convert the character to lowercase and displays it using the `write` function.
7. After iterating over all characters of an argument, it displays a newline character (`'\n'`) using the `write` function.
8. The program continues this process for each argument, displaying the modified strings followed by newlines.
9. If no arguments were provided, the program displays a newline character to complete the output.
10. Finally, the program ends.

The `rstr_capitalizer` program correctly capitalizes the last letter of each word in the given strings while keeping the rest of the words in lowercase.

## :pencil: Subject

```
Assignment name  : rstr_capitalizer
Expected files   : rstr_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or more strings and, for each argument, puts 
the last character that is a letter of each word in uppercase and the rest
in lowercase, then displays the result followed by a \n.

A word is a section of string delimited by spaces/tabs or the start/end of the
string. If a word has a single letter, it must be capitalized.

A letter is a character in the set [a-zA-Z]

If there are no parameters, display \n.

Examples:

$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
$> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
seconD tesT A littlE biT   moaR compleX$
   but... thiS iS noT thaT compleX$
     okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
$>

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: