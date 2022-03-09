/*Fazer um algoritmo que leia um vetor de 10 números, 
leia um valor e determine e exiba a posição do valor lido 
dentro do vetor. Caso o valor lido não seja encontrado 
dentro do vetor, exiba uma mensagem informando.*/

#include <stdio.h>
#include <stdlib.h>
#define qtd_numeros 10

int main(){
    int i, vetor[qtd_numeros], valor, encontrou=0;

        for (i = 0; i < qtd_numeros; i++)
        {
            printf("\nDigite o %d numero do vetor...", i+1);
            scanf("%d", &vetor[i]);
         }
        

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nDigite o valor a ser encontrado:");
    scanf("%d", &valor);

        for (i = 0; i < qtd_numeros; i++)
        {
            if (vetor[i] == valor)
            {
                printf("encontrado na posicao %d", i+1);
                encontrou = 1;
            }
            
        }

            if (encontrou==0)
            {
               printf(" 'valor nao encontrado' ");
            }
}