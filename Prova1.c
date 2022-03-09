/*Escreva um programa, que crie e preencha um vetor com 1000 números inteiros
aleatórios (variando de 0 até 3000, inclusive). 
Ainda nesse programa, crie um menu com as seguintes opções (utilize uma função
para cada opção):
Opção 1 - Imprima o maior número e sua respectiva posição no vetor. 
Opção 2 - Imprima todos os números pares do vetor (caso não encontre, informe o usuario).
Opção 3 – Inverter os valores no próprio vetor (Obs.: Só armazenar na ordem inversa! Não
imprima o vetor!). Após inverter, imprima para o usuário: “O conteúdo do vetor foi invertido”
Opção 4 – Imprimir o vetor.
Opção 5 - Sair.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define qtd_numeros 1000

int main(){
    int x, numeros[qtd_numeros], opcao, posicmaior, maiorN=0, numerosinvert[qtd_numeros],qtd_par=0;
    srand(time(NULL));
    for(x = 0; x < qtd_numeros; x++){
        numeros[x] = rand() % 3000; 
    }
    
do 
 {
        printf("\n\n\n-------------Selecione uma opcao-----------------\n");
        printf("Opcao 1 . Imprima o maior numero e sua respectiva posicao no vetor.\n");
        printf("Opcao 2 . Imprima todos os numeros pares do vetor (caso nao encontre, informe o usuario).\n");
        printf("Opcao 3 . Inverter os valores no proprio vetor (Obs.: So armazenar na ordem inversa Nao ");
        printf("imprima o vetor!). Apos inverter, imprima para o usuario: 'O conteudo do vetor foi invertido'\n");
        printf("Opcao 4 . Imprimir o vetor.\n");
        printf("Opcao 5 . Sair\n");

        printf("Digite uma opcao:\n");
        scanf("%d", &opcao);

    switch (opcao)
    {
        case 1 : 
                for(x = 0; x < qtd_numeros; x++){
                    if (x < qtd_numeros && numeros[x] > maiorN)
                    {
                        maiorN = numeros[x];
                        posicmaior = x+1;
                    }
                }
       
                printf("Maior numero e: %d\n", maiorN);
                printf("Sua posicao: %d \n", posicmaior);
                opcao=-1;
             break;
        case 2 :
            printf("Imprimindo todos numeros pares!\n");            
                
                    for (x = 0; x < qtd_numeros; x++)
                    {
                        if (numeros[x]%2==0)
                        {
                        qtd_par++;
                         printf(" %d ", numeros[x]);
                     
                        }
                        
                
                    }
                        if (qtd_par == 0)
                        {
                             printf("Nao foram encontrados numeros pares.");
                        }
                opcao=-1;
            break;
        case 3 :
            printf("Invertendo vetor... o vetor foi invertido!\n\n");
                for (x = 0; x < qtd_numeros; x++){
                    numerosinvert[x] = numeros[qtd_numeros-x-1];
                     printf("Posicao %d de valor %d invertida para valor %d\n",x+1, numeros[x], numerosinvert[x]);
                }
    
                opcao=-1;
            break;

        case 4:
                printf("Imprindo vetor...\n") ;
            for (x = 0; x < qtd_numeros; x++){
               printf(" %d ", numeros[x]);
            }
            opcao=-1;
            break;
        case 5:

        printf("Saindo...\n");
          
            opcao=1;
            break;

        
        default:
        
              printf("Opcao indisponivel...\n");
                opcao=-1;
            break;
    }

}while(opcao<0);
return 0;
}