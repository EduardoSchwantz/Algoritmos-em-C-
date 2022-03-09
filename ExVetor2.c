/*Faça um algoritmo que leia uma variável de 100 
elementos numéricos e verifique se existem elementos 
iguais a 30. Se existirem, escrever as posições em que 
estão armazenados.*/
#include <stdio.h>
#include <stdlib.h>
#define qtd_numeros 100

int main(){
    int i, variavel[qtd_numeros];

        printf("\n\nDigite os 100 elementos da variavel:\n");
        for (i = 0; i < qtd_numeros; i++)
        {
            printf("Escreva o elemento %d: ", i+1);
            scanf("%d", &variavel[i]);            
        }
        printf("\n\n..........Imprimindo a posicao de todos valores iguais a 30.............\n");
        for (i = 0; i < qtd_numeros; i++)
        {
            if (variavel[i]==30)
            {
                printf("Posicao %d\n", i+1);
            }
            
        }
        

}