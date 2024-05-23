#include <iostream>
using namespace std;

int main() {
    double popA = 90.0; // Popula��o inicial do pa�s A em milh�es
    double popB = 200.0; // Popula��o inicial do pa�s B em milh�es
    double taxaCrescimentoA = 0.03; // Taxa de crescimento anual do pa�s A (3%)
    double taxaCrescimentoB = 0.02; // Taxa de crescimento anual do pa�s B (2%)
    int anos = 0; // Contador de anos

    // Loop para calcular a popula��o de A at� ultrapassar B
    while (popA <= popB) {
        popA *= (1 + taxaCrescimentoA); // Aplica a taxa de crescimento a popula��o de A
        popB *= (1 + taxaCrescimentoB); // Aplica a taxa de crescimento a popula��o de B
        anos++; // Incrementa o contador de anos
    }

    // Imprime a quantidade de anos necess�rios
    cout << "Levar� " << anos << " anos para a popula��o de A ultrapassar a de B." << endl;

    return 0;
}

