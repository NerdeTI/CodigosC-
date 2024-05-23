#include <iostream>
using namespace std;

int main() {
    double popA = 90.0; // População inicial do país A em milhões
    double popB = 200.0; // População inicial do país B em milhões
    double taxaCrescimentoA = 0.03; // Taxa de crescimento anual do país A (3%)
    double taxaCrescimentoB = 0.02; // Taxa de crescimento anual do país B (2%)
    int anos = 0; // Contador de anos

    // Loop para calcular a população de A até ultrapassar B
    while (popA <= popB) {
        popA *= (1 + taxaCrescimentoA); // Aplica a taxa de crescimento a população de A
        popB *= (1 + taxaCrescimentoB); // Aplica a taxa de crescimento a população de B
        anos++; // Incrementa o contador de anos
    }

    // Imprime a quantidade de anos necessários
    cout << "Levará " << anos << " anos para a população de A ultrapassar a de B." << endl;

    return 0;
}

