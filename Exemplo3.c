/***********************************************************/
/* Programa para resolver o Exemplo 3 da aula de 16/04/2024*/
/* Leia dois vetores com 100 elementos cada, intercale     */
/* e escreva o resultado                                   */
/*                                                         */
/***********************************************************/
#include<stdio.h>
#include<stdlib.h>


int main(){

    int i, j, M, N;
    int teste, AUX;
    int *vetor;

    printf("Entre com o valor M: ");
    scanf("%d", &M);
    printf("Entre com o valor N: ");
    scanf("%d", &N);
    
    
    int vetorM[M], vetorN[N];
    
    // Leia os vetores
    printf("Entre com o vetorM: ");
    for (i = 0; i < M; i++)
    	scanf("%d", &vetorM[i]);
    	
    // Ordena o vetorM
    for (i = 0; i < M; i++)
    {
    	for (j = i; j < M; j++)
    	{
    		if (vetorM[i] > vetorM[j])
    		{
    			AUX = vetorM[i]; 
    			vetorM[i] = vetorM[j];
    			vetorM[j] = AUX;
    		}
    	}
    }
    // escreve o vetorM ordenado
    for (i = 0; i < M; i++)
    	printf("%d ", vetorM[i]);
    printf("\n");
    
    printf("Entre com o vetorN: ");
    for (i = 0; i < N; i++)
    	scanf("%d", &vetorN[i]);
    	
    // Ordena o vetorN
    for (i = 0; i < N; i++)
    {
    	for (j = i; j < N; j++)
    	{
    		if (vetorN[i] > vetorN[j])
    		{
    			AUX = vetorN[i]; 
    			vetorN[i] = vetorN[j];
    			vetorN[j] = AUX;
    		}
    	}
    }
    // escreve o vetorN ordenado
    for (i = 0; i < N; i++)
    	printf("%d ", vetorN[i]);
    printf("\n");
    	
    // Determina se o elemento de vetorM está presente em vetorN     
    printf("\n\n");
    
    for (int i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
        	if (vetorM[i] == vetorN[j])
        	{ 
        		teste = 1;
        		break;
        	}
        	else
        		teste = 0;
        }
        if (teste == 0) printf("%d ", vetorM[i]);
    }
    for (i = 0; i < N; i++)
    	printf("%d ", vetorN[i]);
    printf("\n");
    return 0;
}


