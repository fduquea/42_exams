# :books: str_capitalizer

[Subject File](./subject.en.txt) | [Solution File](str_capitalizer.c)

## :clipboard: Explanation

The `str_capitalizer` program takes one or more strings as command-line arguments and capitalizes the first character of each word while keeping the rest of the word in lowercase. Here's an overview of the implementation:

1. The program checks if the number of arguments (`argc`) is greater than 1, which means at least one argument was provided.
2. It iterates over each argument using a loop starting from index 1 (`i = 1`).
3. For each argument, it iterates over each character using another loop starting from index 0 (`j = 0`).
4. Inside the inner loop, it checks if the current character is not a space and if the previous character is a space or if it's the first character of the word (`argv[i][j] != ' ' && (argv[i][j-1] == ' ' || j == 0)`).
5. If the condition is true, it means the current character is the first letter of a word, so it calls the `ft_toupper` function to convert it to uppercase and displays it using the `write` function.
6. Otherwise, it calls the `ft_tolower` function to convert the character to lowercase and displays it using the `write` function.
7. After iterating over all characters of an argument, it displays a newline character (`'\n'`) using the `write` function.
8. The program continues this process for each argument, displaying the modified strings followed by newlines.
9. If no arguments were provided, the program displays a newline character to complete the output.
10. Finally, the program ends.

The `str_capitalizer` program correctly capitalizes the first letter of each word in the given strings while keeping the rest of the words in lowercase.

## :pencil: Subject

```
Assignment name  : str_capitalizer
Expected files   : str_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or several strings and, for each argument,
capitalizes the first character of each word (If it's a letter, obviously),
puts the rest in lowercase, and displays the result on the standard output,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string. If a word only has one letter, it must be
capitalized.

If there are no arguments, the progam must display \n.

Example:

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
     Okay, This Is The Last 1239809147801 But Not    The Least    T$
$>

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: