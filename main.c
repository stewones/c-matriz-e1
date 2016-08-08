/*
EXEMPLO DE MATRIZ 1
MATRIZ 3X2
GUARDAR VALOR DO CONTADOR NAS LINHAS E COLUNAS DEPOIS EXIBIR
*/
#include <stdio.h>
#include <stdlib.h>
#define LINHAS 3
#define COLUNAS 2
int main()
{
    int matriz[LINHAS][COLUNAS];
    int i, j, contador = 1;

    for (i=0; i<LINHAS; i++)
    {
        for (j=0; j<COLUNAS; j++)
        {
            matriz[i][j] = contador;
            contador++;
        }
    }

    printf("matriz[%i][%i]:\n", LINHAS, COLUNAS);
    for (i = 0; i< LINHAS; i++)
    {
        for (j = 0; j< COLUNAS; j++)
            printf("\t%i", matriz[i][j]);
        printf("\n");
    }
    return 0;
}
