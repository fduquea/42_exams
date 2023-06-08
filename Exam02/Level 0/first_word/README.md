# :books: first_word
:arrow_right: [Subject file](./subject.en.txt) 
:arrow_right: [Answer here!](./first_word.c)


## Explanation

Since it's a program that takes a string, we are working with 'command-line arguments', which means our main function will look like this:
```C
int	main(int argc, char **argv);
```
The idea is simple, take argv[1] and print it without spaces/tabs.
If argv[1] has multiple words in it, then print each character until you find a space/tab.


## Subject

```
Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
```

# Found any issue? Contact me! 📥

◦ Email: fduque-a@student.42porto.com

# Might interest you!

### - Check my 42 common-core progress ↙️

[HERE](https://github.com/fduquea/42cursus)

### - My 42 intra profile ↙️
[HERE](https://profile.intra.42.fr/users/fduque-a)
