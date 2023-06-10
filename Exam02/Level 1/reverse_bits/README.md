# :books: reverse_bits
:arrow_right: [Subject File](./subject.en.txt)

:arrow_right: [Solution File](reverse_bits.c)

## Explanation

The `reverse_bits` function takes a byte as input, reverses it bit by bit, and returns the result. Here's a brief overview of the implementation:

1. Initialize a variable `i` to 8, representing the number of bits in a byte.
2. Declare an unsigned char variable `res` and initialize it to 0. This variable will store the reversed bits.
3. Enter a loop that continues until `i` becomes zero.
4. Inside the loop, multiply `res` by 2 and add the remainder of the division between the input byte (`octet`) and 2. This effectively shifts the bits of `res` to the left and appends the least significant bit of `octet`.
5. Divide `octet` by 2 to right-shift its bits.
6. Decrement `i` by 1.
7. Repeat steps 4-6 until all bits have been processed.
8. Return the resulting reversed byte stored in `res`.

The function does not use any external functions or headers.

## Subject

```
Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0010  0110
	 ||
	 \/
 0110  0100

```

# Found any issue? Contact me! 📥

◦ Email: fduque-a@student.42porto.com

# Might interest you!

### - Check my 42 common-core progress ↙️

[HERE](https://github.com/fduquea/42cursus)

### - My 42 intra profile ↙️
[HERE](https://profile.intra.42.fr/users/fduque-a)