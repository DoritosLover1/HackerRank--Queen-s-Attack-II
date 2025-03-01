# **Queen's Attack II** 🏰👑  

## **Problem Description** 📜  
A queen is placed on an **n x n** chessboard. The rows are numbered from **1 to n** (bottom to top), and the columns are numbered from **1 to n** (left to right). The queen's position is as **(r_q, c_q)**. There are also obstacles on the board that restrict the queen's movement.  

The queen can move **vertically, horizontally, and diagonally** in any direction **until it encounters an obstacle** or reaches the edge of the board.  

The goal is to determine the total number of squares the queen can move to.  

---

## **Solution Approach** 🗝️  
The problem can be divided into two main parts:  

1. **Checking vertical and horizontal moves**  
2. **Checking diagonal moves**  

---

## **Implementation** 🏗️  

### **1️⃣ Vertical and Horizontal Moves**  
```cpp
// Upward movement
for (long long i = lqueen_x + 1; i < n; i++) {
    if (arr[i][lqueen_y] == -1) break; // Stop if obstacle is found
    count_of_available_moves++;
}

// Downward movement
for (long long i = lqueen_x - 1; i >= 0; i--) {
    if (arr[i][lqueen_y] == -1) break;
    count_of_available_moves++;
}

// Rightward movement
for (long long j = lqueen_y + 1; j < n; j++) {
    if (arr[lqueen_x][j] == -1) break;
    count_of_available_moves++;
}

// Leftward movement
for (long long j = lqueen_y - 1; j >= 0; j--) {
    if (arr[lqueen_x][j] == -1) break;
    count_of_available_moves++;
}
```

📌 **Explanation:**  
- In **vertical movement** (↑ ↓), the **row index changes**, while the column index remains fixed.  
- In **horizontal movement** (→ ←), the **column index changes**, while the row index remains fixed.  
- The loop stops if an **obstacle** is encountered.  

---

### **2️⃣ Diagonal Moves**  
```cpp
// Up-Right diagonal movement (↗)
for (long long i = 1; lqueen_x + i < n && lqueen_y + i < n; i++) {
    if (arr[lqueen_x + i][lqueen_y + i] == -1) break;
    count_of_available_moves++;
}

// Up-Left diagonal movement (↖)
for (long long i = 1; lqueen_x + i < n && lqueen_y - i >= 0; i++) {
    if (arr[lqueen_x + i][lqueen_y - i] == -1) break;
    count_of_available_moves++;
}

// Down-Left diagonal movement (↙)
for (long long i = 1; lqueen_x - i >= 0 && lqueen_y - i >= 0; i++) {
    if (arr[lqueen_x - i][lqueen_y - i] == -1) break;
    count_of_available_moves++;
}

// Down-Right diagonal movement (↘)
for (long long i = 1; lqueen_x - i >= 0 && lqueen_y + i < n; i++) {
    if (arr[lqueen_x - i][lqueen_y + i] == -1) break;
    count_of_available_moves++;
}
```

📌 **Explanation:**  
- In diagonal movement, **both row and column indices change simultaneously**.  
- The movement stops when an **obstacle is encountered**.  

---

## **Summary** 📝  
1. We handle **vertical (↑ ↓) and horizontal (→ ←) moves** separately.  
2. We then check **diagonal moves (↗ ↖ ↙ ↘)** using similar logic.  
3. Movement in any direction is blocked when an **obstacle** is found.  

This approach efficiently determines the number of squares the queen can move to. 🎯









