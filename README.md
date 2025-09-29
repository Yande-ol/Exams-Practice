# 42 C Practice – Final Exam Preparation

![Language: C](https://img.shields.io/badge/language-C-blue.svg) 
![License: MIT](https://img.shields.io/badge/license-MIT-green.svg) 
![Status: Active](https://img.shields.io/badge/status-active-brightgreen.svg) 
![Contributions: Welcome](https://img.shields.io/badge/contributions-welcome-orange.svg)

---

## 📑 Table of Contents

1. [Overview](#overview)  
2. [Project Structure](#project-structure)  
3. [Usage](#usage)  
4. [Examples](#examples)  
5. [Useful Links](#useful-links)  
6. [About](#about)  
7. [License](#license)  
8. [Tags](#tags)

---

## 📌 Overview

This repository contains **C programs and exercises** developed to practice the concepts required for the **42/1337 exams**.  
The goal is to review classic functions, programming logic, and code structure in a simple and objective way.

The exercises cover:  
- 📝 String manipulation (`ft_strcpy`, `ft_strlen`, `ft_strrev`, etc.)  
- 🔢 Pointers and number handling (`ft_atoi`, `ft_putnbr`, `ft_swap`)  
- ⚡ Conditions, loops, and logic exercises  
- 🎯 Classic 42 exam-style problems  

---

## 📂 Project Structure

| File / Function         | Description |
|-------------------------|-------------|
| 🅰️ `aff_a.c`               | Displays 'a' followed by a newline, or just newline if no 'a' is present |
| 🔹 `first_param.c`         | Prints the first program parameter |
| 🔹 `first_word.c`          | Prints the first word of a given string |
| 🔹 `last_param.c`          | Prints the last program parameter |
| 🎉 `fizzbuzz.c`            | Prints numbers 1-100 with fizz/buzz/fizzbuzz logic |
| 🔢 `ft_atoi.c`             | Converts a string to an integer |
| 🔢 `ft_putnbr.c`           | Prints an integer to the standard output |
| 🔤 `ft_strcmp.c`           | Compares two strings |
| 🔤 `ft_strcpy.c`           | Copies a string into another |
| 🔤 `ft_strlen.c`           | Returns the length of a string |
| 🔄 `ft_strrev.c`           | Reverses a string in place |
| 🔁 `ft_swap.c`             | Swaps the values of two integers |
| 🔁 `reapet_alpha.c`        | Repeats each letter depending on its alphabetical index |
| 🔄 `rev_print.c`           | Prints a string reversed |
| 🔐 `rot_13.c`              | Encodes a string using ROT13 |
| 🔐 `rotone.c`              | Shifts each letter by one (a→b, z→a) |
| ✏️ `search_and_replace.c`  | Replaces all occurrences of a character in a string |
| 🔀 `ulstr.c`               | Switches uppercase letters to lowercase and vice versa |
| 📏 `count_alen.c`          | Returns the length of a string until the first 'a' |
| 📏 `interval_spaces.c`     | Prints spaces between characters of a string |
| 🅰️ `occ_a.c`               | Counts how many times 'a' occurs in a string |
| 📐 `print_interval.c`      | Prints all integers in a given interval |

---

## ⚙️ Usage

To compile a program:

```bash
gcc -Wall -Wextra -Werror ./program_name
```
--- 

## 🧑‍💻 How To Work During The Exam 

### Available Commands

`status`: Shows the remaining time and current status of the exam.

`grademe`: Evaluates the exercise you submitted.

`finish`: Ends the examshell and completes your exam.

### Steps to Follow

1. Open a new terminal or editor (ex., VSCode, Vim).

2. Access the directory containing the exam subjects.

    The subjects are located in the  `subject` directory.
   
3. Create a new folder in the `Rendu` directory with the name of the project.

```bash
mkdir Rendu/<project_name>
```
```
cd Rendu/<project_name>
```
4. Write your solution inside this folder.

### Step 6️⃣: Submitting Your Work.

1. Once you finish the project, navigate to the `Rendu` directory and run:

```bash
git add <project_name>
```
```
git commit -m "Submit <project_name>"
```
```
git push
```
2. Return to the examshell and type grademe to evaluate your project.

---

## 🏫 About 42

42 is an innovative, tuition-free programming school with a unique peer-to-peer learning methodology.
It focuses on:

Project-based learning
Problem-solving without formal teachers
Collaborative coding environments
Strong emphasis on self-learning and creativity
Preparing students for real-world software engineering challenges

---

## 📜 License

This project is licensed under the MIT License – you are free to use, modify, and distribute it for learning and practice.
