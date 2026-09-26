
# CipherCheck 🔐
### A C-based Password Strength Analyzer

CipherCheck is a command-line tool written in C that evaluates password strength by analyzing length, character diversity (uppercase, lowercase, digits, special characters), and outputs a corresponding security score and strength rating.

## Features
- Checks password length
- Detects uppercase letters
- Detects lowercase letters
- Detects digits
- Detects special characters
- Generates a strength score (out of 5)
- Displays a final strength rating: Weak / Medium / Strong

## Sample Output
Enter your password: TestPass123

Password: TestPass123
Length: 12
Uppercase: YES
Lowercase: YES
Digit: YES
Special character: NO
Score: 3/5
Strength: MEDIUM

## How to Run
gcc Password_analyzer.c -o ciphercheck
./ciphercheck

## What I Learned
- String manipulation in C
- Character classification using ctype.h
- Conditional logic for validation and scoring

## Tech Stack
