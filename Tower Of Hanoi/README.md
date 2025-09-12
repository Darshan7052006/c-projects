# Tower of Hanoi in C

This repository contains a simple C program to solve the **Tower of Hanoi** problem using recursion.

## 📌 Problem Statement
The Tower of Hanoi is a classic puzzle that consists of three rods and *n* disks of different sizes. The objective of the puzzle is to move all the disks from the **source rod** to the **destination rod**, following these rules:

1. Only one disk can be moved at a time.
2. Each move consists of taking the top disk from one of the stacks and placing it on top of another stack.
3. No disk may be placed on top of a smaller disk.

## 🖥️ Program Explanation
- The function `toh(int n, int source, int aux, int destination)` recursively moves disks:
  - Move `n-1` disks from source to auxiliary.
  - Move the last disk directly from source to destination.
  - Move `n-1` disks from auxiliary to destination.

- Base case: When `n == 1`, simply move the single disk from source to destination.

## 📂 Files
- `toh.c` → C source code for Tower of Hanoi.

## 🚀 Compilation & Run
```bash
gcc toh.c -o toh
./toh
```

## 📝 Example Output
For **3 disks**:
```
Move the disk from tower number 1 to destination 3
Move the disk from tower number 1 to destination 2
Move the disk from tower number 3 to destination 2
Move the disk from tower number 1 to destination 3
Move the disk from tower number 2 to destination 1
Move the disk from tower number 2 to destination 3
Move the disk from tower number 1 to destination 3
```

## 🎯 Learning Outcome
- Understanding **recursion** in C.
- Learning how to break down a problem into smaller subproblems.
- Classic demonstration of divide and conquer.

---
✨ Feel free to contribute or suggest improvements!
