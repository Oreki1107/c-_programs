#include <iostream>

int main() {
    const int rows = 3;
    const int columns = 3;

    // Define two matrices
    int matrix1[rows][columns] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix2[rows][columns] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // Matrix to store the result of addition
    int resultMatrix[rows][columns];

    // Add corresponding elements of matrix1 and matrix2
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the original matrices
    std::cout << "Matrix 1:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << matrix1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\nMatrix 2:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << matrix2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Display the result matrix
    std::cout << "\nResult Matrix (Matrix1 + Matrix2):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << resultMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
