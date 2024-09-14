# Sudoku_Maths_Data_Structure
Impressive Applied Mathematics Data Structure Sudoku Puzzle.


This is a simple C++ program to solve a 9x9 Sudoku puzzle using the backtracking algorithm. The program accepts a Sudoku puzzle from the user, solves it, and displays the solution. This project is designed for a school submission and does not require any installation or external libraries.
How to Use
1.	Input:
o	The user will input a 9x9 Sudoku puzzle row by row.
o	Each row consists of 9 numbers separated by spaces.
o	Use 0 to represent empty cells in the puzzle.
2.	Processing:
o	The program will solve the puzzle using the backtracking algorithm.
3.	Output:
o	The program will display the input puzzle.
o	If the puzzle can be solved, it will display the solved Sudoku.
o	If the puzzle is unsolvable, the program will indicate that no solution exists.
Code Explanation
1.	Printing the Sudoku Board:
o	The function printBoard() prints the current state of the Sudoku board.
2.	Checking Validity of Placement:
o	The function isValid() checks if placing a number in a specific cell is valid according to Sudoku rules (no repetition in the same row, column, or 3x3 block).
3.	Solving the Puzzle with Backtracking:
o	The function solveSudoku() uses backtracking to fill the Sudoku grid. It tries numbers from 1 to 9 in each empty cell, checking if the placement is valid. If valid, it proceeds; otherwise, it backtracks and tries another number.
4.	Main Function:
o	The program prompts the user to input the Sudoku puzzle, solves it, and prints either the solution or a message stating that no solution exists.
I have included detailed comments within the code to explain the purpose of each function and key steps in the logic. These comments should make it easier to understand how my code works . 
Thank you 
![image](https://github.com/user-attachments/assets/87102afd-5581-482a-840a-1e21b4ad99ea)
