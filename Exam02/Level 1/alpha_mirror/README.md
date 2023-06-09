# :books: alpha_mirror
:arrow_right: [Subject file](./subject.en.txt) 

:arrow_right: [Answer here!](./alpha_mirror.c)

## Explanation

The provided code represents a program called `alpha_mirror` that takes a string as a command-line argument and replaces each alphabetical character with its opposite alphabetical character while leaving other characters unchanged. The opposite alphabetical character is determined based on its position in the ASCII table. Here's a brief overview of the implementation:

1. The program checks if there is exactly one command-line argument passed (excluding the program name).
2. If there is a single argument, the program proceeds with the character replacement operation.
3. The program iterates through each character in the string `argv[1]`.
4. If the character is a lowercase letter (`'a'` to `'z'`), it is replaced by subtracting it from `219`, which gives the opposite alphabetical character in the ASCII table.
5. If the character is an uppercase letter (`'A'` to `'Z'`), it is replaced by subtracting it from `155`.
6. The modified character or the original character is printed using the `write` function.
7. Finally, a newline character is printed using the `write` function.

Similar to [Level's '0' repeat_alpha](../../Level%200/repeat_alpha/repeat_alpha.c), same approach, but different formula, we need to turn 'a' into 'z', 'Z' into 'M', etc...
We take 'z + 1' and move down the current position in the ASCII table.
For example:
If we have z = 26 and a = 1, b = 2, etc...
If our current character is b, we have 'z - b' == '27 - 2' == 25.
Since 'z' = 26, 'y' = 25, so 'b' would become 25, which we want.
But 'a' isn't 1, and 'z' isn't 26, 'a' is 97 and 'z' is 122, so we need to make it so "something - 'a'" is equal to 'z', so "something - 97" = 122
122 + 97 = 219, so our 'something' is 219.
We do the same to the capital letters and our 'something' becomes 155.
('man ascii' exists and is helpful! Mess around with it)

## Subject

```
Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
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