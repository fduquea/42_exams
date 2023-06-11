# :books: lcm

[Subject File](./subject.en.txt) | [Solution File](lcm.c)

## :clipboard: Explanation

The `lcm` function calculates the least common multiple (LCM) of two non-zero unsigned integers. Here's an overview of the implementation:

1. The function checks if either `a` or `b` is zero. If so, it returns 0 since the LCM is also 0.
2. It initializes a variable `n` to hold the starting point for finding the LCM. It sets `n` to the larger of the two numbers, `a` or `b`.
3. The function enters an infinite loop and checks if `n` is divisible by both `a` and `b` using the modulo operator (%).
4. If `n` is divisible by both `a` and `b`, it means `n` is the LCM, and the function returns `n`.
5. If `n` is not the LCM, it increments `n` by 1 and continues the loop.
6. If the loop exits without finding the LCM, the function returns 0.

The `lcm` function correctly calculates the LCM of two unsigned integers and returns the result.

## :pencil: Subject

```
Assignment name  : lcm
Expected files   : lcm.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function who takes two unsigned int as parameters and returns the 
computed LCM of those parameters.

LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
integer divisible by the both integers.

A LCM can be calculated in two ways:

- You can calculate every multiples of each integers until you have a common
multiple other than 0

- You can use the HCF (Highest Common Factor) of these two integers and 
calculate as follows:

	LCM(x, y) = | x * y | / HCF(x, y)
  
  | x * y | means "Absolute value of the product of x by y"

If at least one integer is null, LCM is equal to 0.

Your function must be prototyped as follows:

  unsigned int    lcm(unsigned int a, unsigned int b);

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: