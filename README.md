I wrote a simple C++ program that simulates a digital clock. The program prompts the user to enter a starting time (hour, minute, and second), then continuously displays the updated time in real-time, incrementing every second — similar to how a real clock works.

This project helped me practice:
✅ User input validation
✅ Working with loops and conditionals
✅ Controlling program flow with timers
✅ Terminal screen manipulation using ANSI escape codes (for cross-platform compatibility)

Originally designed for Windows, I modified the program to run on macOS (using sleep() and ANSI codes instead of Sleep() and system("cls")), so it works in my Mac + Clang + VSCode environment.
