/************************************************************/
/* le e imprime as matrizes A e B, calcula e imprime o      */
/* produto AXB de duas matrizes                             */
/************************************************************/
 
#include<stdio.h> 
#include<stdlib.h> 
 
int main()
{ 
   int m = 5, n = 3, p = 4;
   int i; // indexador para a linha das matrizes A e C
   int j; // indexador para a coluna das matrizes B e C
   int k; // indexador para a coluna da matriz A e linha de B
   int A[5][4] = {1, 4, 6, 4, 5, 0, 6, 2, 0, 3, 5, 0, 5, 6, 3, 6, 0, 8, 5, 4};
   int B[4][3] = {1, 2, 3, 4, 5, 2, 5, 6, 5, 6, 0, 6}; 
   int C[5][3];

   // Escreve as matrizes A e B
   for (i = 0; i < m;  i++)
   {
       for (k = 0; k < p; k++)
       {
           printf("%4d ", A[i][k]);
       }
       printf("\n");   
   }
   printf("\n");
   for (k = 0; k < p; k++)
   {
       for (j = 0; j < n; j++)
       {
           printf("%4d ",B[k][j]);
       }
       printf("\n");   
   }
   printf("\n");
   // Calcula e escreve o produto AXB
   for (i = 0;  i < m; i++)
   {
       for (j = 0; j < n; j++)
       {
            C[i][j] = 0;
            for (k = 0; k < p; k++)
            {
                 C[i][j] = C[i][j] + A[i][k]*B[k][j];
            }
            printf("%4d ",C[i][j]);
       }
       printf("\n");
   }
   printf("\n");
   return 0;
}
