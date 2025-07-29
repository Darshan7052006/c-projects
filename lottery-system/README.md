# 🎲 Simple Lottery System in C

This is a basic C program that simulates a lottery system using random number generation. It's designed to randomly select 5 "winners" and assign them prizes based on the numbers they draw.

---

## 🔧 Features
- Random number generation using `rand()` and `srand()`
- Time-based seeding with `time(NULL)`
- Conditional prize assignment based on number ranges
- Loop-based simulation for multiple participants

---

## 📦 How to Compile & Run

### Linux/Mac:
```bash
gcc lottery.c -o lottery
./lottery
```

### Windows (using GCC/MinGW):
```bash
gcc lottery.c -o lottery.exe
lottery.exe
```