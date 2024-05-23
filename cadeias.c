/**************************************************************/
/*  Intercala os elementos de duas strings                    */
/*                                                            */
/**************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	// variáveis para armazenar as strings
	char CadeiaA[25] = "ABCDEFGHIJKLMNOPQRSTUVXYZ";
	char CadeiaB[25] = "abcdefghijklmnopqrstuvxyz";
	char CadeiaC[50];
	for (i = 0; i <= 49; i+=2)
	{
		CadeiaC[i] = CadeiaA[i/2];
		CadeiaC[i+1] = CadeiaB[24 - i/2];
	}
	for (i = 0; i <= 49; i++)
		printf("%c", CadeiaC[i]);
	printf("\n");
	return 0;
}
