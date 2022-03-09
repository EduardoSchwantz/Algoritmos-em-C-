/*Escrever um algoritmo para ler uma matriz M(2,2) 
contendo valores numéricos (supor que os valores são 
distintos). Após, calcular e mostrar a matriz R, resultante 
da multiplicação dos elementos de M pelo seu maior 
elemento.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j, matriz[2][2], matrizR[2][2], maior=0;

        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++){
                printf("Escreva a linha %d coluna %d: \n", i+1, j+1);
                scanf("%d", &matriz[i][j]);
            }
        }

        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++){
                if (matriz[i][j] > maior)
                {
                    maior = matriz[i][j];
                }
                
            }
        }        
    
    
    for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++){

                matrizR[i][j] = matriz[i][j]* maior;

                printf("Coluna %d Linha %d multiplicada pelo maior numero da matriz: %d\n", i+1, j+1, matrizR[i][j]);
            }
        }


return 0;
}