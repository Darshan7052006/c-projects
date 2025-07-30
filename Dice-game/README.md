# 🎲 Dice Sum Prediction Game

Welcome to the Dice Sum Prediction Game! Test your luck and prediction skills by guessing the sum of two randomly rolled dice.

---

## 🎮 How to Play

- Two dice are rolled automatically by the computer.
- Your task is to **guess the sum** of the two dice.
- Valid guesses are between **2 and 12**.
- You'll be informed if your guess is correct or not.

---

## 🧠 Game Logic

- Dice values: `1 to 6`, sum will range from `2 to 12`.
- If your guess is invalid (less than 2 or more than 12), the game ends.
- If your guess is incorrect:
  - You lose points: **score = -5 × attempt count**
- If your guess is correct:
  - You earn points: **score += 10**
- You can play multiple rounds by choosing to continue after each game.

---

## 🧮 Example Output

```
---DICE GAME---
--TEST YOUR PREDICTIONS--
--LETS SEE HOW PRO YOU ARE IN A GUESS--
Enter the guess: 7
Darn! Bad attempt
The sum is 4
Your chance count is 1
Your score is -5
Do you want to continue: y
```

---

## ⚙️ How to Compile

```bash
gcc dice_game.c -o dice_game
./dice_game
```

---

## 💡 Tip

This game helps beginners practice:
- Random number generation (`rand()`)
- Looping constructs (`do-while`, `while`)
- Conditional logic (`if-else`)
- Basic scoring mechanisms

---

Enjoy the game! 🎉


