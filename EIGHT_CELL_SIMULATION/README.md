# 🧬 8-Cell Simulation in C

This program simulates the evolution of 8 cells over a given number of days based on simple rules of neighbor influence.

---

## 🧠 Problem Description

We have **8 cells** represented as either **active (1)** or **inactive (0)**.  
For each day, the next state of a cell is determined by the states of its **immediate neighbors**:

- If both neighbors are the same (both `0` or both `1`), the cell becomes **inactive (0)**.
- If neighbors are different, the cell becomes **active (1)**.
- Edge cells have only one neighbor, and the other side is considered **0**.

---

## ⚙️ Algorithm Steps

1. Iterate for the given number of days.
2. For each cell:
   - Compute `left` and `right` neighbor values.
   - Apply the rule `(left == right) ? 0 : 1`.
3. Store the result in a temporary array.
4. Update the main array with the temporary one.
5. Print the array for each day.

---

## 💻 Example Output

**Initial state:**  
`[1| 0| 0| 1| 1| 1| 0| 1]`

**Days = 4**
`[1| 1| 1| 1| 1| 1| 0| 0]`
