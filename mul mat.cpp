#include <iostream>

int main() {
    const int rows1 = 3;
    const int columns1 = 2;
    const int rows2 = 2;
    const int columns2 = 3;

    // Define two matrices
    int matrix1[rows1][columns1] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int matrix2[rows2][columns2] = {
        {7, 8, 9},
        {10, 11, 12}
    };

    // Matrix to store the result of multiplication
    int resultMatrix[rows1][columns2];

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < columns1; k++) {
                resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the original matrices
    std::cout << "Matrix 1:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns1; j++) {
            std::cout << matrix1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\nMatrix 2:\n";
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < columns2; j++) {
            std::cout << matrix2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Display the result matrix
    std::cout << "\nResult Matrix (Matrix1 * Matrix2):\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            std::cout << resultMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
