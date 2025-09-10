# Rock-Paper-Scissors Game (C)

A simple **Rock-Paper-Scissors** game implemented in C.  
This program allows a user to play against the computer in multiple rounds, with score tracking and a final result at the end.

---

## 🎮 Features
- User can choose **Rock**, **Paper**, or **Scissors**.
- Computer randomly selects its choice.
- Score is updated after each round.
- Game continues until the user decides to quit.
- Final winner is declared at the end.

---

## 🛠️ How It Works
- Choices are represented using **macros** for readability:
  - `ROCK = 1`
  - `PAPER = 2`
  - `SCISSORS = 3`
- Game outcome is decided by comparing user and computer choices.
- Scores are stored in variables:
  - `user_score`
  - `computer_score`

---

## 📦 Compilation & Run
### Using `gcc`:
```bash
gcc rps.c -o rps
./rps

---

## 🖥️ Example Gameplay
```
1. ROCK
2. PAPER
3. SCISSORS
Enter the input[1,2,3]:
1
User choose: ROCK.
Computer choose: SCISSORS.
User has won the round.

----------------------------
User's Score: 1 
Computer's Score: 0
----------------------------

If you want to continue, Choose 'Y' or 'y'
```

---

## 📚 Learning Concepts
This project demonstrates:
- **Macros (`#define`)** for constants.
- **Conditional logic** with `if-else`.
- **Random number generation** using `rand()` and `srand(time(NULL))`.
- **Input validation** using loops and buffer clearing.
- **Basic score tracking** and game loops.

---

## 🔮 Future Improvements
- Add a **menu-driven interface**.
- Allow **best of N rounds** option.
- Add **ASCII art / UI improvements** for fun.
- Save **game history** to a file.

---

## 🤝 Contributing
Feel free to fork this repository, suggest improvements, or create pull requests.

---

## 🧑‍💻 Author
- Developed by *Darshan* as a practice project for learning C programming.
