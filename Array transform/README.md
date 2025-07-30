# 🧮 Array Transformer in C

This is a simple C program that:
- Takes up to 20 floating-point numbers as input from the user.
- Stores the inputs in an array.
- Transforms each element based on its index:
  - If the index is even → multiply by 2
  - If the index is odd → take the cube root (`cbrt`) of the number
- Displays both the original and transformed arrays in a table format.
- Calculates and prints the sum of both arrays.

## 🛠️ Features

- Uses arrays to store input and processed data
- Uses conditionals to apply different operations based on array index
- Demonstrates use of the math library (`math.h`)
- Cleanly formatted output with table headers
- Graceful termination when the user inputs `0.0` or hits the max input size

## 💻 How to Compile and Run

Make sure you have a C compiler (like `gcc`) installed.

### Compile:
```
gcc array_transformer.c -o transformer -lm
```

> The `-lm` links the math library (required for `cbrt()` function).

### Run:
```
./transformer
```

## 🧾 Sample Input
```
Enter maximum 20 numbers, terminate with 0.0
Enter first number: 4
Next number: 8
Next number: 27
Next number: 2
Next number: 0.0
```

## 📤 Sample Output
```
You have entered 4 numbers.

  INPUT ARRAY  SECOND ARRAY

     4.00000     8.00000
     8.00000     2.00000
    27.00000    54.00000
     2.00000     1.25992

The sum of the first array is:     41.00000
The sum of the second array is:   65.25992
```