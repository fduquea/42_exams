# :books: is_power_of_2
:arrow_right: [Subject file](./subject.en.txt)

:arrow_right: [Answer here!](./is_power_of_2.c)

## Explanation

The `is_power_of_2` function is designed to determine whether a given number is a power of 2. It returns 1 if the number is a power of 2 and 0 otherwise.

Here is an overview of the implementation:

1. The function takes an unsigned integer `n` as input.
2. It enters a loop that continues as long as `n` is greater than 0.
3. Within the loop, it checks if `n` is equal to 2. If it is, the function returns 1, indicating that it is a power of 2.
4. If `n` is not equal to 2, it checks if `n` is divisible by 2 without any remainder. If it is not divisible by 2, the function returns 0, indicating that it is not a power of 2.
5. If `n` is divisible by 2, it updates `n` by dividing it by 2.
6. The loop continues until `n` becomes 0 or a condition for returning 1 or 0 is met.
7. If the loop completes without returning, the function returns 0 to indicate that the given number is not a power of 2.

## Subject

```
Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);

```

# Found any issue? Contact me! 📥

◦ Email: fduque-a@student.42porto.com

# Might interest you!

### - Check my 42 common-core progress ↙️

[HERE](https://github.com/fduquea/42cursus)

### - My 42 intra profile ↙️
[HERE](https://profile.intra.42.fr/users/fduque-a)