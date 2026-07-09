/*
 * Program: 2D Vector (Dynamic Matrix)
 * Description: A vector of vectors creates a resizable 2D structure,
 *              more flexible than a fixed-size 2D array.
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows = 3, cols = 3;

    // Creates a 3x3 matrix initialized to 0
    vector<vector<int>> matrix(rows, vector<int>(cols, 0));

    // Fill it with values
    int value = 1;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            matrix[r][c] = value++;
        }
    }

    cout << "Matrix contents:\n";
    for (const auto &row : matrix) {  // 'const auto&' avoids copying each row
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
