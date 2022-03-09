/* Escrever um algoritmo que lê um vetor X(100) e depois o 
escreve. Substitua, a seguir, todos os valores iguais a zero 
de X por 1 e escreva novamente o vetor X.*/
#include <stdio.h>
#include <stdlib.h>
#define qtd_numeros 100
int main(){
    int i, vetor[qtd_numeros];
    printf("\n\n Escreva 100 elementos para a variavel...");
        for (i = 0; i < qtd_numeros; i++){
            printf("\n\nEscreva o %d numero: ", i+1);
            scanf("%d", &vetor[i]);     
        
        }
        printf("Numeros armazenados no vetor sao...\n");
        for (i = 0; i < qtd_numeros; i++){
             printf(" %d ", vetor[i]); 
        }  

        for (i = 0; i < qtd_numeros; i++){
                if (vetor[i]==0)
                {
                    vetor[i]= 1;
                }
        }
        printf("\nTodo valores iguais a 0 foram substituidos por zero\n");
        printf("Numeros armazenados no vetor sao...\n");

        for (i = 0; i < qtd_numeros; i++){
        printf(" %d ", vetor[i]);
        }
                
    
return 0;
}