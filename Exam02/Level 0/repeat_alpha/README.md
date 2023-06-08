# :books: repeat_alpha
:arrow_right: [Subject file](./subject.en.txt) 

:arrow_right: [Answer](./repeat_alpha.c)

## Explanation

Another simple one, we basically need to make a variable that saves the index as 'a' being 1, 'b' being 2, etc.
How can we make 'a' = 1, 'b' = 2, etc?
On the ascii table, 'a' is 97, 'b' is 98, etc... so if we recognize the letter and take 96 out of it, for 'a' we get '97 - 96 = 1', for 'b' we get '98 - 96 = 2'... pretty simple, same for uppercase letters, simply change 96 to 64 ('A' is 65).

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