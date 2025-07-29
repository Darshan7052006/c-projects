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

---

## 🧾 Example Output

```
Winner 1 got number: 12
🎁 Prize: A set of exclusive ball pens

Winner 2 got number: 67
😞 Prize: Oops! Better luck next time

Winner 3 got number: 39
🎁 Prize: A brand new bucket

Winner 4 got number: 89
🎉 Prize: First prize — a trip to Dubai!

Winner 5 got number: 45
🎁 Prize: A trip to Hawaii
```

---

## 🚀 Future Improvements
- Add user input for participant names
- Log results to a text file
- Use arrays or structs for better data handling
- GUI version using C++ or Python

---

## 📁 Project Structure
```
lottery-system/
├── lottery.c
└── README.md
```

---

## 🏷️ License
This project is open for learning purposes. Use it freely for academic or personal use.
