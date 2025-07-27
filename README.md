# ⚙️ C++ Experiment 3: Understanding and Using Decision-Making Statements

## 🎯 Aim
- To learn how decision-making works in C++ using `if`, `else if`, and `else`.
- To check conditions using **relational** and **logical operators**.

---

## 📌 Objectives
✔️ Use `if`, `else if`, and `else` to write programs for:
- Checking if a number is positive, negative, or zero.  
- Giving grades to a student based on average marks.  
- Finding the quadrant of a point `(x, y)` in the coordinate system.

✔️ Understand the use of **relational operators**: `>`, `<`, `>=`, `<=`  
✔️ Use **logical operators**: `&&`, `||`, `==`

---

## 🧠 Concepts Used
- **If-Else** Statements  
- **Relational Operators**  
- **Logical Operators**

---

## 📖 Program Description

### ✅ Syntax and Flow:
1. Declare variables (like `marks`, `x`, `y`) to store user inputs.
2. Use `if(condition)` to check a logical/relational test.
3. Block of code under `{}` runs **if** the condition is **true**.
4. If the `if` fails, it goes to `else if`, and finally `else`.

> C++ treats any non-zero condition as **true (1)**, and zero as **false (0)**.

---

shell
Copy
Edit

### ➤ Grade Calculator
```cpp
/* OUTPUT EXAMPLE
Enter first number : 2
Enter second number : 9
Addition: 11
Subtraction: -7
Multiplication: 18
Division: 0.222222

Is a greater than b? : 0
Is a > 0 and b > 0? : 1
Is a > 0 or b > 0? : 1

THE OUTPUT IS TRUE WHEN ITS 1 AND FALSE WHEN ITS 0. */
```

## ✅ Conclusion
Through this experiment, we learned how to implement decision-making in C++ using `if`, `else if`, and `else` statements. We practiced using **relational** and **logical operators** to evaluate conditions and make meaningful program decisions. These concepts are foundational for building interactive and responsive programs in C++.
