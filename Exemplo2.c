/***********************************************************/
/* Programa para resolver o Exemplo 2 da aula de 16/04/2024*/
/* Leia dois vetores com 100 elementos cada, intercale     */
/* e escreva o resultado                                   */
/*                                                         */
/***********************************************************/
#include<stdio.h>
#include<stdlib.h>


int main(){

    int i;
    int A[100], B[100];

    printf("Entre com o vetor A: ");
    for (i = 0; i <100; i++)
    	scanf("%d", &A[i]);
    printf("Entre com o vetor B: ");
    for (i = 0; i < 100; i++)
    	scanf("%d", &B[i]);
    	
    // intercale A e B e escreva o resultado        
    printf("\n\nVetor resultado:\n\n");
    
    for (int i = 0; i <= 199; i+=2)
    {
        printf("%d %d ", A[i/2], B[i/2]);
    }
    printf("\n");
}


