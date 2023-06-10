# :books: ulstr
:arrow_right: [Subject file](./subject.en.txt) 

:arrow_right: [Answer here!](./ulstr.c)

## Explanation

The provided subject asks for a program that takes a string as a command-line argument and reverses the case of all its letters while leaving other characters unchanged. Here's a brief overview of the implementation:

1. The program checks if there is exactly one command-line argument passed (excluding the program name).
2. If there is a single argument, the program proceeds with the case reversal operation.
3. The program iterates through each character in the string `argv[1]`.
4. If the character is a lowercase letter (`'a'` to `'z'`), it is converted to uppercase by subtracting `32` from its ASCII value.
5. If the character is an uppercase letter (`'A'` to `'Z'`), it is converted to lowercase by adding `32` to its ASCII value.
6. The modified character or the original character is printed using the `write` function.
7. Finally, a newline character is printed using the `write` function.

## Subject

```
Assignment name  : ulstr
Expected files   : ulstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.

You must display the result followed by a '\n'.

If the number of arguments is not 1, the program displays '\n'.

Examples :

$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
$

```

# Found any issue? Contact me! 📥

◦ Email: fduque-a@student.42porto.com

# Might interest you!

### - Check my 42 common-core progress ↙️

[HERE](https://github.com/fduquea/42cursus)

### - My 42 intra profile ↙️
[HERE](https://profile.intra.42.fr/users/fduque-a)