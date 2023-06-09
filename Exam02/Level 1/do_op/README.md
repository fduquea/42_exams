# :books: do_op
:arrow_right: [Subject file](./subject.en.txt) 

:arrow_right: [Answer here!](./do_op.c)

## Explanation

The provided code represents a program that performs arithmetic operations on two integers based on the operator specified as the second command-line argument. Here's a brief overview of the implementation:

1. The program checks if there are exactly three command-line arguments passed (excluding the program name).
2. If there are three arguments, the program proceeds with the arithmetic operation.
3. The program converts the first and third arguments to integers using the `atoi` function and stores them in `n1` and `n2` variables, respectively.
4. The result of the operation is stored in the `res` variable, initially set to 0.
5. Based on the operator specified as the second argument (`argv[2][0]`), the program performs the corresponding arithmetic operation: multiplication (`*`), division (`/`), subtraction (`-`), addition (`+`), or modulo (`%`).
6. The result is printed using the `printf` function.
7. Finally, a newline character is printed using the `printf` function.

The allowed functions in the subject are `atoi`, `printf`, and `write`.

## Subject

```
Assignment name  : do_op
Expected files   : do_op.c
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$

```

# Found any issue? Contact me! 📥

◦ Email: fduque-a@student.42porto.com

# Might interest you!

### - Check my 42 common-core progress ↙️

[HERE](https://github.com/fduquea/42cursus)

### - My 42 intra profile ↙️
[HERE](https://profile.intra.42.fr/users/fduque-a)