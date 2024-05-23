#include <stdio.h>

int main() {

void Main (string [] args)
{
//Supondo que a população de um formigueiro A seja
//da ordem de 90.000 formigas com uma taxa anual de
//crescimento de 3% e que a população do formigueiro
//B seja, aproximadamente, de 200.000 formigas com
//uma taxa anual de crescimento de 1.7%, fazer um
//algoritmo que calcule e escreva o número de anos
//necessários para que a quantidade de formigas do
//formigueiro A ultrapasse ou iguale a do formigueiro
//B, mantidas essas taxas de crescimento.

double pop_formigueiroA, pop_formigueiroB, taxaA, taxaB;
pop_formigueiroA = 90000.0;
pop_formigueiroB = 200000.0;
// populações das formigas /\ e suas taxas de crescimento \/;
taxaA = 1.03;
taxaB = 1.017;

int anos;
anos = 0;

do
{
pop_formigueiroA *= taxaA;
pop_formigueiroB *= taxaB;
anos++;

} while(pop_formigueiroA < pop_formigueiroB);

Console.WriteLine("A quantidade de anos necessárias para a População do Formigueiro A ultrapassar a do Formigueiro B foi de:\n"+anos+" anos");
}
