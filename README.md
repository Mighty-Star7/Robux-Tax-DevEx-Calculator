# Robux Tax DevEx Calculator

A simple C console application developed to practice conditional statements (`if`, `else if`), logical operators (`&&`, `||`), and input validation.

## Features
- Prompts the user to input how many robux they received and if they received the robux from their own game or from a third party game (1 for their own game, 2 for the third party game).
- Input validation: Displays an error message if the user enters a value of `0` or below for robux or if the user enters any value other than `1` or `2` for the type of game they got the robux.
- **Tax & DevEx calculation:** Calculates the final Robux payout applying a 30% tax for direct game sales (70% payout) or a 40% tax for third-party games (60% payout), and notifies the user if the net amount reaches the 30,000 Robux threshold for DevEx.

## Tech Stack

- **Language:** C
- **Compiler:** GCC
- **Editor:** Visual Studio Code

## How to Run

1. Compile the code:
   ```bash
   gcc main.c -o main
   ```
2. Run the executable:
   ```bash
   ./main
   ```



