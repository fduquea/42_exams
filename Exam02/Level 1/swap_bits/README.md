# :books: swap_bits

[Subject File](./subject.en.txt) | [Solution File](swap_bits.c)

## :clipboard: Explanation

The `swap_bits` function takes a byte and swaps its halves. Here's a brief overview of the implementation:

1. The function uses bitwise operators to perform the swapping operation.
2. It shifts the bits of the input byte to the right by 4 positions (`octet >> 4`) to obtain the right half of the byte.
3. It also shifts the bits of the input byte to the left by 4 positions (`octet << 4`) to obtain the left half of the byte.
4. Finally, it performs a bitwise OR operation (`|`) between the shifted halves to combine them and returns the result.

## :pencil: Subject

```
Assignment name  : swap_bits
Expected files   : swap_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, swaps its halves (like the example) and
returns the result.

Your function must be declared as follows:

unsigned char	swap_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100 | 0001
     \ /
     / \
 0001 | 0100

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: