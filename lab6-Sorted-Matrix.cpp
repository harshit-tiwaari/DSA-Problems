#include <iostream>
#include <vector>
using namespace std;

void find_element(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();
    int row = 0, col = n - 1;
    while (row < m && col >= 0) {
        if (matrix[row][col] == target) {
            cout << "Found at (" << row << ", " << col << ")" << endl;
            row++;
            col--;
        } else if (matrix[row][col] < target) {
            row++;
        } else {
            col--;
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int target = 7;
    find_element(matrix, target);
    return 0;
}
