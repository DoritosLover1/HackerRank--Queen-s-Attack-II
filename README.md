# HackerRank--Queen's Attack II

## About Problem 📜
A queen is standing on an "n*n" chessboard. The chess board's rows are numbered from 1 to n, going from bottom to top. Its columns are numbered from 1 to n, going from left to right. Each square is referenced by a tuple, (r,c), describing the row, "n", and column, "c", where the square is located.

## About Implementation 🧱
- **n** -> long int
- **k** -> long int
- **r_q** -> long int
- **c_q** -> long int
- **obstacles** -> vector<vector<int>>

## About Solving Problem 🗝️
First of all, we divide this problem into two parts:
-  **Check vertical and horizontal moves** 
-  **Check diagonals**  
### Implementation 📑
-  *Check vertical and horizontal moves*
`   // Up
    for (long long i = lqueen_x + 1; i < n; i++) {
        if (arr[i][lqueen_y] == -1) break;
        count_of_available_moves++;
    }
    // Down
    for (long long i = lqueen_x - 1; i >= 0; i--) {
        if (arr[i][lqueen_y] == -1) break;
        count_of_available_moves++;
    }
    // Right
    for (long long j = lqueen_y + 1; j < n; j++) {
        if (arr[lqueen_x][j] == -1) break;
        count_of_available_moves++;
    }
    // Left
    for (long long j = lqueen_y - 1; j >= 0; j--) {
        if (arr[lqueen_x][j] == -1) break;
        count_of_available_moves++;
    }
`  
-  *Check diagonals*
`   // Up-right  
    for (long long i = 1; lqueen_x + i < n && lqueen_y + i < n; i++) {  
        if (arr[lqueen_x + i][lqueen_y + i] == -1) break;   
        count_of_available_moves++;  
    }  
    // Up-left  
    for (long long i = 1; lqueen_x + i < n && lqueen_y - i >= 0; i++) {  
        if (arr[lqueen_x + i][lqueen_y - i] == -1) break;   
        count_of_available_moves++;  
    }  
    // Down-left  
    for (long long i = 1; lqueen_x - i >= 0 && lqueen_y - i >= 0; i++) {  
        if (arr[lqueen_x - i][lqueen_y - i] == -1) break;   
        count_of_available_moves++;  
    }  
    // Down-right  
    for (long long i = 1; lqueen_x - i >= 0 && lqueen_y + i < n; i++) {  
        if (arr[lqueen_x - i][lqueen_y + i] == -1) break;   
        count_of_available_moves++;  
    }
` 







