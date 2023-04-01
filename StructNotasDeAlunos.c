
/********************* PI - ARSENAL - EX32 ******************
Crie uma estrutura representando os alunos de um determinado curso. 
A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, 
nota da segunda prova e nota da terceira prova.
(a) Permita ao usuário entrar com os dados de 5 alunos. 
(b) A maior nota da primeira prova.
(c) A maior média geral. 
(d) A menor média geral 
(e) Para cada aluno diga se ele foi aprovado ou reprovado, 
considerando o valor 6 para aprovação.

'''''O programa foi feito  buscando por valores e não por nomes'''''''

***********************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 5


int main()
{

setlocale(LC_ALL, "Portuguese");

   struct lista 
   {
       char nome[30];
       int mat;
       float n1, n2, n3, med;
   };
   
    float maiorM, menorM;
    
    int i;
    float maiorN;
    int opc, voltar;
   
   
   struct lista alunos[TAM];
   
   printf("\n----------------------------------------------------------");
   printf("\n\tBem vindo ao nosso sistema de cadastro de alunos!");
   
   voltar:
   printf("\nAs opções do sistema são:  ");
   printf("\n1 - cadastrar alunos");
   printf("\n2 - encontrar a maior nota obtida na primeira prova");
   printf("\n3 - encontrar a maior e menor médias obtidas");
   printf("\n4 - mostar se os alunos foram aprovados ou reprovados");
   printf("\n---------------------------------------------------------");
   printf("\nPor favor, digite a opção desejada: ");
   scanf("%d", &opc);
   
   switch (opc) {
       case 1:
       
        for(i = 0; i < TAM; i++)
   {
      printf("\nInforme o nome do aluno: ");
      scanf("%s", alunos[i].nome);
     
      printf("\nInforme a matrícula do aluno: ");
      scanf("%d", &alunos[i].mat);
      
      printf("\nInforme a nota obtida na primeira prova: ");
      scanf("%f", &alunos[i].n1);
      
      printf("\nInforme a nota obtida na segunda prova: ");
      scanf("%f", &alunos[i].n2);
      
      printf("\nInforme a nota obtida na terceira prova: ");
      scanf("%f", &alunos[i].n3);
      
      alunos[i].med = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3; //calcula a média
      
      printf("\n\tAluno %d registrado.\n\n", i+1);
      
   }
      printf("\n\nDigite 1 para voltar ao menu e 0 para sair: ");
      scanf("%d", &voltar);
        if (voltar != 0)
        {
            goto voltar;
        }
        else{
            goto fim;
        }
       
       break;
       
       case 2:
       
       maiorN = 0;
    
        for(i = 0; i < TAM; i++)
        {
        if (i == 0)
        {
            maiorN = alunos[i].n1;
        }
        
        if(alunos[i].n1 > maiorN)
        {
            maiorN = alunos[i].n1;
        }
        
        }
        
        printf("\nA maior nota obtida na primeira prova foi: %.2f", maiorN);
    
        printf("\n\nDigite 1 para voltar ao menu e 0 para sair: ");
        scanf("%d", &voltar);
            if (voltar == 1)
            {
                goto voltar;
            }
            else{
                goto fim;
            }
       
       break;
       
       
       case 3:
       
       for (i = 0; i < TAM; i++)
    {
        if (i == 0)
        {
            maiorM = alunos[i].med;
            menorM = alunos[i].med;
        }
        else{
            
            if (maiorM < alunos[i].med) 
            {
                maiorM = alunos[i].med;
            }
            if (menorM > alunos[i].med)
            {
                menorM = alunos[i].med;
            }
        }
        
            
        }
        
         printf("\nA maior media obtida foi: %.2f", maiorM);
         printf("\nA menor media obtida foi: %.2f", menorM);
         
         printf("\n\nDigite 1 para voltar ao menu e 0 para sair: ");
         scanf("%d", &voltar);
        if (voltar == 1)
        {
            goto voltar;
        }
        else{
            goto fim;
        }
      
       break;
       
       case 4:
       
       for (i = 0; i < TAM; i++)
    {
        if(alunos[i].med > 6)
        {
            printf("\nParabéns! o aluno %s foi aprovado!", alunos[i].nome);
        }
        else{
            printf("\nInfelizmente o aluno %s foi reprovado.", alunos[i].nome);
        }
    }
       printf("\n\nDigite 1 para voltar ao menu e 0 para sair: ");
      scanf("%d", &voltar);
        if (voltar == 1)
        {
            goto voltar;
        }
        else{
            goto fim;
        }
        
       break;
       
   }
  
    
    fim:
    return 0;
}




