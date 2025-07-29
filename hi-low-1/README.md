
# 🎯 Guessing Game in C

Welcome to the **Guessing Game**, a simple console-based game written in the C programming language.

## 🧠 Description

The Guessing Game challenges the player to match a randomly generated number between 0 and 99. You are given a maximum of **7 chances** to guess the correct number. The game gives hints after each attempt—whether your guess is too high or too low.

After winning (or exhausting all chances), the player can choose to **play again** or exit the game.

The game also awards titles based on performance:
- 🥇 Guessed within 3 chances: **Super Duper NINJA!**
- 🥈 Guessed within 4-5 chances: **Crazy NINJA!**
- 🥉 Guessed in 6-7 chances: **Potential NINJA!**

## 📋 Features

- Random number generation using `rand()` seeded by `time()`.
- User-friendly menu and feedback system.
- Categorizes your performance based on how quickly you guess.
- Option to replay after each round.

## 🧪 How to Run

1. Save the file as `guessing_game.c`.
2. Compile the program:
```bash
gcc guessing_game.c -o guessing_game
```
3. Run the executable:
```bash
./guessing_game
```

## 💡 Concepts Used

- Loops (`do-while`, `while`)
- Conditional statements (`if`, `else`)
- Random number generation
- Basic input/output
- Character handling (`getchar`, `scanf`)

## 🔧 Requirements

- GCC compiler or any standard C compiler.
- Compatible with Linux, Windows, or macOS terminal.

## 🙌 Author
Darshan.
