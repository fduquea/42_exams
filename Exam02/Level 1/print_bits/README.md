# :books: print_bits
:arrow_right: [Subject File](./subject.en.txt)

:arrow_right: [Solution File](print_bits.c)

## Explanation

The `print_bits` function takes a byte as input and prints its binary representation without a newline at the end. Here's a brief overview of the implementation:

1. Initialize a variable `i` to 128, which represents the most significant bit (MSB) of the byte.
2. Enter a loop that continues until `i` becomes zero.
3. Inside the loop, check if the bitwise AND operation between the byte and `i` yields a non-zero result. If true, write "1" to the standard output using the `write` function.
4. If the result of the bitwise AND operation is zero, write "0" to the standard output.
5. Right-shift `i` by 1 to move to the next bit in the byte.
6. Repeat steps 3-5 until all the bits of the byte have been processed.

The function uses the `write` function from the `unistd.h` header to output the binary representation.

## Subject

```
Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"
```

# Found any issue? Contact me! 📥

◦ Email: fduque-a@student.42porto.com

# Might interest you!

### - Check my 42 common-core progress ↙️

[HERE](https://github.com/fduquea/42cursus)

### - My 42 intra profile ↙️
[HERE](https://profile.intra.42.fr/users/fduque-a)