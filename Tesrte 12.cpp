#include <iostream>
using namespace std;

// Function to print a matrix
void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to calculate the product of two matrices
int** multiplyMatrices(int** A, int** B, int m, int p, int n) {
    int** C = new int*[m];
    for (int i = 0; i < m; i++) {
        C[i] = new int[n];
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < p; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return C;
}

int main() {
    int m = 50, p = 40, n = 70;

    // Initialize matrices A and B
    int** A = new int*[m];
    for (int i = 0; i < m; i++) {
        A[i] = new int[p];
    }

    int** B = new int*[p];
    for (int i = 0; i < p; i++) {
        B[i] = new int[n];
    }

    // Initialize elements of matrices A and B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            A[i][j] = i + j; // Example values
        }
    }

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < n; j++) {
            B[i][j] = i - j; // Example values
        }
    }

    // Print matrices A and B
    cout << "Matrix A:" << endl;
    printMatrix(A, m, p);

    cout << "Matrix B:" << endl;
    printMatrix(B, p, n);

    // Calculate the product of matrices A and B
    int** C = multiplyMatrices(A, B, m, p, n);

    // Print the product matrix
    cout << "Product Matrix:" << endl;
    printMatrix(C, m, n);

    // Deallocate memory
    for (int i = 0; i < m; i++) {
        delete[] A[i];
    }
    delete[] A;

    for (int i = 0; i < p; i++) {
        delete[] B[i];
    }
    delete[] B;

    for (int i = 0; i < m; i++) {
        delete[] C[i];
    }
    delete[] C;

    return 0;
}

