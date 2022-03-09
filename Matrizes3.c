/* Faça um algoritmo que leia uma matriz A 5x5 contendo 
valores numéricos e gere e mostre uma matriz B 5x5 tal 
que: 
▫ B(i,j)=0, se A(i,j) é par 
▫ B(i,j)=1, se A(i,j) é impar */
#include <stdio.h>
#include <stdlib.h>



int main(){

    int i, j, matriz[5][5];

        printf("Digite as matrizes....\n\n");

    for (i = 0 ; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("\nColuna %d Linha %d...: ", i+1,j+1);
            scanf("%d", &matriz[i][j]);
                        
        }
        
    }

     for (i = 0 ; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (matriz[i][j]%2 == 0)          
            {  
                printf("\nColuna %d Linha %d de valor %d e par", i+1, j+1, matriz[i][j]);
                
            }
            else
                printf("\nColuna %d Linha %d de valor %d e impar", i+1, j+1, matriz[i][j]);
            
        }
    }





return 0;
}