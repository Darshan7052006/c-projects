# Digit-Wise Addition in C

This C program takes a multi-digit number (up to 10 digits) from the user, stores it digit-by-digit in an array, and then adds a single digit (1–9) to it while managing carry propagation — similar to how addition is done manually.

## Features

- Accepts a number up to 10 digits from the user.
- Stores each digit in an integer array.
- Adds a single digit (1–9) to the number.
- Handles carry properly across digits.
- Displays the updated number after addition.

## How It Works

1. User specifies how many digits they want to input (max 10).
2. Each digit is entered individually and stored from right to left in the array.
3. A single digit (1–9) is taken as input to be added to the number.
4. The program performs digit-wise addition starting from the least significant digit and propagates carry if necessary.
5. It prints the updated number after addition.

## Example

**Input:**
```
Enter the total number of digits you want to input in a number: 3
Enter the digit: 9
Enter the digit: 9
Enter the digit: 9
Enter a digit >=1 and <=9 to add: 5
```

**Output:**
```
The number you gave is: 999
Result:
1004
```

## Code Overview

- `MAX` defines the maximum number of digits (set to 10).
- The number is stored in an array `x[MAX]`, right-aligned.
- Carry is managed in the addition loop, and extra digits are handled accordingly.
- Final output is adjusted based on whether an extra digit was created.

## Compilation

To compile and run the program:

```bash
gcc digit_adder.c -o digit_adder
./digit_adder
```

## License

This project is free to use and modify.