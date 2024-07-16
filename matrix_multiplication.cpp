#include <iostream>
#include <vector>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
#include <chrono>  // For timing

// Function to generate a random matrix of given dimensions
std::vector<std::vector<int>> generateRandomMatrix(int rows, int cols) {
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols, 0));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = rand() % 10; // Generate random number between 0 and 9
        }
    }
    return matrix;
}

// Function to multiply two matrices
std::vector<std::vector<int>> matrixMultiply(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
    int rowsA = a.size();
    int colsA = a[0].size();
    int colsB = b[0].size();

    std::vector<std::vector<int>> result(rowsA, std::vector<int>(colsB, 0));

    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    return result;
}

// Function to print a matrix
void printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    srand(time(0)); // Seed the random number generator with current time

    while (true) { // Run continuously until stopped
        // Generate random matrices
        std::vector<std::vector<int>> matrixA = generateRandomMatrix(2, 2); // Adjust dimensions as needed
        std::vector<std::vector<int>> matrixB = generateRandomMatrix(2, 2); // Adjust dimensions as needed

        // Measure computation time
        auto start = std::chrono::high_resolution_clock::now();

        // Multiply matrices
        std::vector<std::vector<int>> result = matrixMultiply(matrixA, matrixB);

        // Calculate computation time
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = end - start;
        std::cout << "Computation Time: " << elapsed.count() * 1000 << " ms" << std::endl;

        // Print result
        std::cout << "Matrix A:" << std::endl;
        printMatrix(matrixA);
        std::cout << "Matrix B:" << std::endl;
        printMatrix(matrixB);
        std::cout << "Result:" << std::endl;
        printMatrix(result);

        std::cout << "Press Enter to continue or type 'exit' to quit..." << std::endl;
        std::string input;
        std::getline(std::cin, input);
        if (input == "exit") {
            break; // Exit the loop if user types 'exit'
        }
    }

    return 0;
}
