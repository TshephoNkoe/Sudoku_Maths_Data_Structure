#include <iostream>
#include <vector>
using namespace std;

#define N 9 // Grid size (9x9)
#define K 3 // Block size (3x3)

// Function to print the Sudoku board
void printBoard(const vector<vector<int>>& board) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Check if placing 'num' in board[row][col] is valid
bool isValid(const vector<vector<int>>& board, int row, int col, int num) {
    // Check the row
    for (int x = 0; x < N; x++)
        if (board[row][x] == num)
            return false;

    // Check the column
    for (int x = 0; x < N; x++)
        if (board[x][col] == num)
            return false;

    // Check the block
    int startRow = row - row % K, startCol = col - col % K;
    for (int i = 0; i < K; i++)
        for (int j = 0; j < K; j++)
            if (board[i + startRow][j + startCol] == num)
                return false;

    return true;
}

// Solve the Sudoku puzzle using backtracking
bool solveSudoku(vector<vector<int>>& board) {
    int row = -1, col = -1;
    bool isEmpty = false;

    // Find an empty cell (denoted by 0)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] == 0) {
                row = i;
                col = j;
                isEmpty = true;
                break;
            }
        }
        if (isEmpty)
            break;
    }

    // No empty cell means the board is solved
    if (!isEmpty)
        return true;

    // Try placing numbers 1-9 in the empty cell
    for (int num = 1; num <= 9; num++) {
        if (isValid(board, row, col, num)) {
            board[row][col] = num;

            // Recursively solve the rest of the board
            if (solveSudoku(board))
                return true;

            // Undo the placement (backtrack)
            board[row][col] = 0;
        }
    }

    return false; // Trigger backtracking
}

int main() {
    // Initialize an empty 9x9 Sudoku board
    vector<vector<int>> board(N, vector<int>(N));

    cout << "Enter the Sudoku puzzle (9x9), row by row, with 0 for empty cells:" << endl;
    
    // Input the Sudoku puzzle
    for (int i = 0; i < N; i++) {
        cout << "Enter row " << i + 1 << " (9 values separated by spaces): ";
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }

    cout << "\nInput puzzle:" << endl;
    printBoard(board);

    // Solve the Sudoku puzzle
    if (solveSudoku(board)) {
        cout << "\nSolved Sudoku:" << endl;
        printBoard(board);
    } else {
        cout << "\nNo solution exists." << endl;
    }

    return 0;
}
