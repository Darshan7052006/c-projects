# Magic Square Generator (Siamese Method)

This project implements a **Magic Square generator** in C using the classical **Siamese method (De La Loubère’s method)**.

A **magic square** of order `n` is an `n × n` matrix filled with distinct numbers from `1` to `n²` such that the sum of every row, column, and both diagonals is the same. This sum is called the **magic constant**.

---

## 📘 Features
- Generates magic squares for **odd dimensions** between `1` and `15`.
- Uses the **Siamese method** to place numbers correctly.
- Validates the generated square by checking row, column, and diagonal sums.
- Displays the **magic constant**.
- Provides clear input validation (rejects even or out-of-range values).

---

## 🔢 Magic Constant Formula
For an odd order `n`, the magic constant is:

\[ M = \frac{n \times (n^2 + 1)}{2} \]

---

## ▶️ Example Run
**Input:**
```
Enter dimension of Magic Square (Only ODD dimension >=1 and <=15 accepted): 3
```

**Output:**
```
The magic square:

   8   1   6
   3   5   7
   4   9   2

Magic square generated with dimension 3 and magic constant: 15
```

---

## 🛠️ How it Works
1. Start at the **bottom middle cell** of the matrix.
2. Place `1` there, then continue with numbers up to `n²`.
3. Move **down-right** each time (wrapping around edges).
4. If the cell is already filled, move **up one row** instead.
5. Continue until the square is complete.

---

## 🚀 Future Enhancements
- Add random **rotations/reflections** for multiple variations of magic squares.
- Extend algorithm for **even-order** magic squares (advanced).

---

## 📂 Repository Structure
```
magic-square/
│-- magic_square.c    # Main C program
│-- README.md         # Project documentation
```

---

## ✍️ Author
Program implemented in C as part of learning classic algorithms.

