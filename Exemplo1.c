/***********************************************************/
/* Programa para resolver o Exemplo1 da aula de 16/04/2024 */
/* Leia uma frase de no máximo 80 caracteres, incluindo    */
/* espaços em branco, conte quantos espaços em branco      */
/* existem na frase e conte quantas vezes aparece a letra A*/
/***********************************************************/
#include<stdio.h>
#include<stdlib.h>
//#include<string.h>

int main(){

    char frase[80], par[80];
    int branco = 0, letraa = 0;

    printf("Entre com a frase: ");
    fgets(frase, 80, stdin);
    printf("A frase é: %s\n", frase);
    // Conte o número de espaços em branco
    branco = 0;
    for (int i = 0; i <= 80; i++){
        if (frase[i] == ' ') branco = branco + 1;
        // Conte o número de letras a
        if (frase[i] == 'a') letraa = letraa + 1;
        // Conte o número de letras A
        if (frase[i] == 'A') letraa = letraa + 1;
    }
    printf("O número de espaços é: %d\n",branco);
    printf("A letra 'a' aparece %d vezes\n", letraa);
}


