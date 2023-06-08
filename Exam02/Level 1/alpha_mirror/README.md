# :books: alpha_mirror
:arrow_right: [Subject file](./subject.en.txt) 

:arrow_right: [Answer](./alpha_mirror.c)

## Explanation

Similar to [Level's '0' repeat_alpha](../../Level%200/repeat_alpha/repeat_alpha.c), same aproach, but different formula, we need to turn 'a' into 'z', 'Z' into 'M', etc...
Basically we take 'z + 1' and move down the current position in the ascii table.
For example:
If we have z = 26 and a = 1, b = 2, etc...
If our current character is b, we have 'z - b' == '27 - 2' == 25.
Since 'z' = 26, 'y' = 25, so 'b' would become 25, which we want.
But 'a' isnt 1, and 'z' isnt 26, 'a' is 97 and 'z' is 122, so we need to make it that "something - 'a'" is equal to 'z', so "something - 97" = 122
122 + 97 = 219, so our 'something' is 219.
We do the same to the capital letters and our 'something' becomes 155.
('man ascii' exists and is helpfull! Mess around with it)

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