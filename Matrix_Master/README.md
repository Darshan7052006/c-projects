# Matrix Master 🧮

A **menu-driven matrix calculator** written in C that allows users to perform various matrix operations interactively.

## Features

✅ User-friendly terminal menu  
✅ Supports the following operations:
- Transpose of a matrix
- Determinant (1x1, 2x2, 3x3 only)
- Inverse (placeholder for future implementation)
- Addition of two matrices
- Subtraction of two matrices
- Multiplication of matrices

## Menu Preview

```
-------------------
---MATRIX MASTER---
-------MENU-------
1) TRANSPOSE OF MATRIX
2) DETERMINANT OF MATRIX
3) INVERSE OF MATRIX
4) ADDITION OF MATRIX
5) SUBTRACTION OF MATRIX
6) MULTIPLICATION OF MATRIX
```

## How to Run

1. Clone this repository or copy the code to your machine.
2. Compile the code using a C compiler (like gcc):

```bash
gcc matrix_master.c -o matrix_master
```

3. Run the program:

```bash
./matrix_master
```

4. Follow the on-screen instructions.

## Notes

- Only square matrices are allowed for determinant and inverse.
- Determinant is implemented only for up to 3x3 matrices.
- Inverse function is **currently not implemented** and will be updated in a future version (after learning file handling).
- Addition and subtraction require matrices of same dimensions.
- Multiplication requires the number of columns of Matrix A to equal number of rows of Matrix B.

## Future Improvements

- Add support for larger matrices and memory management.
- Implement inverse using cofactor-adjoint method and file handling.
- Better input validation and error messages.

---

📁 Author: Darshan  
📅 Last updated: August 2025