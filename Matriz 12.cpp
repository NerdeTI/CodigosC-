#include <iostream>
using namespace std;

const int m = 50;
const int p = 40;
const int n = 70;

int main() {
    // Leia a matriz A
    int A[m][p];
    cout << "Entre com a matriz A (" << m << "x" << p << "):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cin >> A[i][j];
        }
    }

    // Leia a matriz B
    int B[p][n];
    cout << "Entre com a matriz B (" << p << "x" << n << "):" << endl;
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }

    // Imprima as matrizes A e B
    cout << "Matriz A:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriz B:" << endl;
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < n; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    // Calcule o produto A × B
    int C[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < p; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Imprima o produto A × B
    cout << "Produto A × B:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}3
