/*Escrever um algoritmo para ler uma matriz 7x4 contendo 
valores numéricos (supor que os valores são distintos). 
Após, encontrar o menor valor contido na matriz e sua 
posição.*/

#include <stdio.h>
#include <stdlib.h>



int main(){

    int i, j, matriz[7][4], menor, pos_linha = 1, pos_coluna = 1;

        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 4; j++)
            {
                printf("Digite o valor da coluna %d e da linha %d\n", i+1, j+1);
                scanf("%d", &matriz[i][j]);
                
            }
            
        }
    menor=matriz[1][1];

        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 4; j++)
            {
                if (matriz[i][j] < menor)
                {
                    menor = matriz[i][j];
                    pos_linha = i ;
                    pos_coluna = j ;
                }
                
            }

        }

printf("Menor valor %d Posicao: Coluna %d linha %d", menor, pos_coluna + 1, pos_linha + 1);

return 0;
}