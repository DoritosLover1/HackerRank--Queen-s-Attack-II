#include "iostream"
#include "vector"
#include "string"

using namespace std;

/*
    This is not complete Solution just 65 % solving rate, and this solution extra properties about
    output design

    If you wanna get 100% solving rate, you ought to use just values not arrays or other elements
    Otherwise, we cannot get 100% solving rate.
*/

int queensAttack(long int n, long int k, long int r_q, long int c_q, vector<vector<int>> obstacles) {
    long long count_of_available_moves = 0;
    // +++ Then create a array of chess board for putting 1's and 0's.
    long long arr[n][n] = {0};
    // Store queen's location
    long long lqueen_x = r_q-1;
    long long lqueen_y = c_q-1;
    // Store obstacles' locations
        // Whether there is a obstacle put -1, there is a not obstacle put 1
    for (long i = 0; i < k; i++) {
        long long obs_x = obstacles[i][0] - 1;
        long long obs_y = obstacles[i][1] - 1;
        arr[obs_x][obs_y] = -1;
    }

    // Update: Take this and implement it centered around the Queen. 04.02.2025
    // Do not change the positioning at all; just increment the array size
    // and set all the visible columns from the 0th row to -1, so it cannot be placed.

    // QUEEN BASED OPERATION
    // Check vertical and horizontal moves
    // Up

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

    // QUEEN BASED OPERATION
    // Check diagonals
    // Up-right
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

    return count_of_available_moves;
}