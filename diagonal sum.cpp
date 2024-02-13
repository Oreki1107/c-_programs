#include <iostream>

int main() {
    const int size = 3; // Assuming it's a square matrix for simplicity

    // Define a matrix
    int matrix[size][size] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Calculate the sum of the main diagonal (left to right)
    int mainDiagonalSum = 0;
    for (int i = 0; i < size; i++) {
        mainDiagonalSum += matrix[i][i];
    }

    // Calculate the sum of the other diagonal (right to left)
    int otherDiagonalSum = 0;
    for (int i = 0; i < size; i++) {
        otherDiagonalSum += matrix[i][size - 1 - i];
    }

    // Display the original matrix
    std::cout << "Matrix:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Display the sum of diagonals
    std::cout << "\nSum of main diagonal: " << mainDiagonalSum << std::endl;
    std::cout << "Sum of other diagonal: " << otherDiagonalSum << std::endl;

    return 0;
}
