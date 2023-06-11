# :books: ft_split

[Subject File](./subject.en.txt) | [Solution File](ft_split.c)

## :clipboard: Explanation

The `ft_split` function takes a string (`str`) as input and splits it into words. It returns a NULL-terminated array of strings, where each string represents a word.

The implementation follows these steps:

1. The `is_space` function is defined to check whether a character is a space, tab, or newline.
2. The `count_words` function is defined to count the number of words in the input string. It iterates through the string, incrementing the count when a non-space character is encountered, and skips over the word until the next space character is found.
3. The `put_word` function is defined to extract a word from the input string. It determines the length of the word by counting characters until a space is encountered or the end of the string is reached. Then, it allocates memory for the word and copies the characters from the input string into the allocated memory.
4. The `ft_split` function begins by allocating memory for an array of strings (`words`) to hold the words. The size of the allocated memory is `count_words(str) + 1` to accommodate the words and the NULL terminator.
5. It iterates through the input string, identifying words and adding them to the `words` array. When a non-space character is encountered, it calls the `put_word` function to extract the word and stores it in the `words` array. It then increments the index (`i`) and skips over the word until the next space character is found.
6. Once all words have been processed, the `words` array is terminated with a NULL pointer.
7. The `words` array is returned.

## :pencil: Subject

```
Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: