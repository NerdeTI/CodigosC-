#include <iostream>
using namespace std;

const int MAX = 100;

int main() {
    int A[MAX], B[MAX];
    int NA, NB;

    // Leia o conjunto A
    cout << "Entre com o número de elementos do conjunto A (NA <= 100): ";
    cin >> NA;
    cout << "Entre com os elementos do conjunto A:" << endl;
    for (int i = 0; i < NA; i++) {
        cin >> A[i];
    }

    // Leia o conjunto B
    cout << "Entre com o número de elementos do conjunto B (NB <= 100): ";
    cin >> NB;
    cout << "Entre com os elementos do conjunto B:" << endl;
    for (int i = 0; i < NB; i++) {
        cin >> B[i];
    }

    // Intercale os elementos dos conjuntos A e B
    int C[MAX];
    int i = 0, j = 0, k = 0;
    while (i < NA && j < NB) {
        if (i < NA) {
            C[k] = A[i];
            i++;
            k++;
        }
        if (j < NB) {
            C[k] = B[j];
            j++;
            k++;
        }
    }

    // Imprima o conjunto intercalado
    cout << "Conjunto intercalado:" << endl;
    for (int i = 0; i < k; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
