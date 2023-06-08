# :books: ft_atoi
:arrow_right: [Subject file](./subject.en.txt) 

:arrow_right: [Answer](./ft_atoi.c)

## Explanation

The key here is to be able to add each digit in the correct order
``` C
res = res * 10 + str[i++] - 48
```
This adds a '0' to the end of the number by multiplying by 10 and then adds the current digit.
Don't forget to check in the beginning for any signal and return the number multiplied by the signal.

## Subject

```
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);

```

# Found any issue? Contact me! 📥

◦ Email: fduque-a@student.42porto.com

# Might interest you!

### - Check my 42 common-core progress ↙️

[HERE](https://github.com/fduquea/42cursus)

### - My 42 intra profile ↙️
[HERE](https://profile.intra.42.fr/users/fduque-a)