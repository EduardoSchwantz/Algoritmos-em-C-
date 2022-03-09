#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Escreva um algoritmo que leia o código de um 
aluno e suas três notas. Calcule a média 
ponderada do aluno, considerando que o peso 
para a maior nota seja 4 e para as duas restantes, 
. Mostre o código do aluno, suas três notas, a 
média calculada e a mensagem "APROVADO" 
se a média for maior ou igual a 5 e 
"REPROVADO" caso contrário */
#define num_alunos 2

typedef struct aluno{  
    char nome[50];
    int codigo;
    float nota[3], mp;
} Dados;

int main(){
  int i, x;
  
  Dados aluno[num_alunos];
    
    for (i = 0; i <num_alunos; i++){
      
      setbuf(stdin, NULL); //limpa o \n no buffer, pra não dar problema na próxima interação do laço

      printf("\nDigite o nome do aluno %d: ", i+1);
      fgets(aluno[i].nome, 50, stdin);

      printf("\nDigite o codigo do aluno %d:", i+1);
        scanf("%d", &aluno[i].codigo);


      for (x = 0; x<3; x++){     
        printf("\nDigite a Nota %d: ", x+1);
        scanf("%f", &aluno[i].nota[x]);
      }

       if(aluno[i].nota[0] >= aluno[i].nota[1] && aluno[i].nota[0] >= aluno[i].nota[2]){
       aluno[i].mp = ((aluno[i].nota[0]*4) + (aluno[i].nota[1]*3) + (aluno[i].nota[2] * 3)) / (4+3+3);
       }
       else if(aluno[i].nota[1] >= aluno[i].nota[0] && aluno[i].nota[1] >= aluno[i].nota[2]){
       aluno[i].mp = ((aluno[i].nota[1]*4) + (aluno[i].nota[0]*3) + (aluno[i].nota[2] * 3)) / (4+3+3);
        }
       else if(aluno[i].nota[2] >= aluno[i].nota[0] && aluno[i].nota[2] >= aluno[i].nota[1]){
       aluno[i].mp = ((aluno[i].nota[2]*4) + (aluno[i].nota[1]*3) + (aluno[i].nota[0] * 3)) / (4+3+3);
        }        
    }


    for (i = 0; i < num_alunos; i++){    
      printf("\nAluno: %d\nNome: %sCodigo: %d\n", i+1,aluno[i].nome, aluno[i].codigo);
      printf("Nota 1: %.2f\nNota 2: %.2f\nNota 3: %.2f\n",aluno[i].nota[0], aluno[i].nota[1], aluno[i].nota[2]);
      printf("\nMedia Ponderada do Aluno %d : %.2f \n", i+1, aluno[i].mp);
          if (aluno[i].mp >= 5){
           printf("Aprovado");     
          }
          else{ 
          printf("Reprovado");
          }
    }
  return 0;
 }