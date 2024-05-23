/**************************************************************/
/*  calcula o IMC de cada pessoa, calcula a média e           */
/*  determina quantas pessoas estão com o IMC acima da        */
/*  média                                                     */
/**************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  	int idade; // Idade
  	float peso; // Peso
 	 float altura; // Altura
 	 float IMC[10]; // Vetor para o Índice de Massa Corporal
 	 float media_IMC = 0.0;
 	 int num_acima = 0;
	 int num_pessoa = 0;
 	 int total_pessoas;
	 FILE *arq;
  
	 arq = fopen("dados_imc.txt","r");
   	 if (arq == NULL)
 	 {
		printf("Erro ao abrir arquivo!\n");
		exit;
 		return 1;
 	 }
 	 //
 	 // A primeira linha é lida para garantir que um valor
 	 // diferente de zero esteja armazenado na variável altura
 	 //
	fscanf(arq, "%d %f %f", &idade, &altura, &peso);
 	while (idade != 0)
  	{
		IMC[num_pessoa] = peso/(altura*altura);// Calcula o IMC de cada pessoa\}\\}
		media_IMC = media_IMC + IMC[num_pessoa];
		num_pessoa = num_pessoa + 1;
		fscanf(arq, "%d %f %f", &idade, &altura, &peso);
  	}
 	total_pessoas = num_pessoa;
 	media_IMC = media_IMC/total_pessoas;
 	printf("IMC medio: %f\n", media_IMC); 
	num_pessoa = 0;
 	while (num_pessoa <= total_pessoas)
 	{
		if (IMC[num_pessoa] > media_IMC) num_acima = num_acima + 1;
		num_pessoa = num_pessoa + 1;
	}
	printf("Total de pessoas com o IMC acima: %d\n", num_acima);
	fclose(arq);
  
  return 0;
}

