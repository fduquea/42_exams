# :books: seach_and_replace

[Subject File](./subject.en.txt) | [Solution File](./search_and_replace.c)

## :clipboard: Explanation

The provided subject asks for a program that takes three command-line arguments: a string, a character to search for, and a character to replace it with. The program performs a search-and-replace operation on the string and displays the modified string. Here's a brief overview of the implementation:

1. The program checks if there are exactly three command-line arguments passed (excluding the program name) and verifies certain conditions:
   - The second and third arguments are single characters.
   - The second character argument is a letter (lowercase or uppercase).
   - The third character argument is a letter (lowercase or uppercase).
2. If the conditions are met, the program proceeds with the search-and-replace operation.
3. The program iterates through each character in the string `argv[1]`.
4. If the character matches the second argument (`argv[2]`), it is replaced with the third argument (`argv[3]`).
5. The modified character or the original character is printed using the `write` function.
6. Finally, a newline character is printed using the `write` function.

## :pencil: Subject

```
Assignment name  : search_and_replace
Expected files   : search_and_replace.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program called search_and_replace that takes 3 arguments, the first
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.

Examples:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: