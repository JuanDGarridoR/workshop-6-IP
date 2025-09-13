# Workshop #6 - Introduction to Programming

This project implements a C++ program that solves two programming exercises using **functions and arrays**.

## Description

The program displays a main menu with **2 points**, each corresponding to a different exercise:

### 1. **Point 1**

Create a program that decodes a hidden message based on the following data:

- An **alphabet array** with 27 characters (including the Spanish 'ñ').
- An array with a set of **letters** that contain the original characters of the message.
- An array with a sequence of **letters to indicate displacement**.
- An array with **directions** (1 to move forward, 0 to move backward).

The program must:

- Use each displacement letter to find its position in the alphabet.
- Move through the letters array by adding or subtracting that position depending on the indicated direction.
- Display the hidden message formed by the resulting letters.

### 2. **Point 2**

Create a program that simulates an elimination process with the numbers from 1 to 100:

- Fill a vector with the numbers from 1 to 100.
- Eliminate every m-th number (starting with `m = 2`).
- After each elimination round:
  - If the remaining amount of numbers is greater than `m`, increase `m` by 1 and repeat the process.
  - If the remaining amount is less than or equal to `m`, display the remaining numbers in reverse order.

The program must allow the user to input a number **n** to verify the process, and repeat until the user enters **0**.

## How to Run

1. **Download and extract the .zip**
2. **Find the folder where you saved it using the terminal.**  
3. **Enter the following commands:**
   - Compile:
      ```bash
      g++ workshop-6-IP.cpp -o workshop-6-IP
      ```
   - Run it:
      ```bash
      workshop-6-IP.exe
      ```

## Considerations

- Make sure you have a C++ compiler installed.
