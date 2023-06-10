# :books: repeat_alpha
:arrow_right: [Subject file](./subject.en.txt) 

:arrow_right: [Answer here!](./repeat_alpha.c)

## Explanation

The provided subject asks for a program that takes a command-line argument as a string and prints each alphabetical character in the string repeated based on its alphabetical index. Here's a brief overview of the implementation:

1. The program checks if there is exactly one command-line argument passed (excluding the program name).
2. If there is a single argument, the program proceeds with the repeat alpha operation.
3. The variable `i` is initialized to 0, and the pointer `str` is assigned to the first command-line argument (`argv[1]`).
4. The program iterates through each character in the string `str`.
5. For each alphabetical character, the program determines its alphabetical index `k`:
   - If the character is a lowercase letter ('a' to 'z'), `k` is set to the character's ASCII value minus 96.
   - If the character is an uppercase letter ('A' to 'Z'), `k` is set to the character's ASCII value minus 64.
   - If the character is not an alphabetical character, `k` remains 1.
6. The program uses the `write` function to print the current character `str[i]` `k` number of times.
7. Finally, a newline character is printed using the `write` function.

We basically need to make a variable that saves the index as 'a' being 1, 'b' being 2, etc.
How can we make 'a' = 1, 'b' = 2, etc?
On the ASCII table, 'a' is 97, 'b' is 98, etc... so if we recognize the letter and take 96 out of it, for 'a' we get '97 - 96 = 1', for 'b' we get '98 - 96 = 2'... very simple, same for uppercase letters, simply change 96 to 64 ('A' is 65).

## Subject

```
Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
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