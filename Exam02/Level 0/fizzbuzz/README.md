# :books: fizzbuzz
:arrow_right: [Subject file](./subject.en.txt) 
:arrow_right: [Answer here!](fizzbuzz.c)

## Explanation

This one is a specific case. Even tough it's a program, the output will always be the same, which means it's not affected by the 'command-line' arguments.
So, it's a program, therefore our 'fizzbuzz.c' file needs to have a main function, we wont use arguments.
Our main function will be this:
``` C
int main(void)
```
How to check if a number is multiple of 3 or 5?
If the result of 'x % 3' = 0, then x is multiple of 3, because '%' is the rest.
Example:
'9 % 3' = 0, how many times does 3 fit inside 9? 3. 3 * 3 = 9. 9 - 9 = 0;
'9 % 5' = 4, how many times does 5 fit inside 9? 1. 1 * 5 = 5. 9 - 5 = 4;
5 is not a multiple of 9 and 3 is a multiple of 9, so when the number is 9 it should print "fizz".

## Subject

```
Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$> 

```

# Found any issue? Contact me! 📥

◦ Email: fduque-a@student.42porto.com

# Might interest you!

### - Check my 42 common-core progress ↙️

[HERE](https://github.com/fduquea/42cursus)

### - My 42 intra profile ↙️
[HERE](https://profile.intra.42.fr/users/fduque-a)
