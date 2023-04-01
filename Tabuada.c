
/****************************** PI - ARSENAL - EX20 *****************************

Construa um programa onde tenha uma função tabuada(x). Utilize a função para exibir 
as tabuadas dos elementos de um vetor.

===Estabeleci que o vetor deve ter 5 elementos e a tabuada será de 1 a 10====

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

#define TAM 5

void tabuada(int num[TAM]); //declaração da função tabuada 

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int num[TAM];
    int i;
  
    //lendo vetor 
    for (i = 0; i < TAM; i++)
    {
        printf("Por favor, digite um número para a posição %d do vetor: ", i);
        scanf("%d", &num[i]);
    }   
    
    //chamando a função e passando o vetor dos números lidos como parâmetro
    tabuada(num);
    
    
    return 0;
}


void tabuada(int num[TAM]){

    int i, j, resp; 
    
        printf("\n\n------------------------------\n");
        printf("\tTabuada\n");
        printf("------------------------------\n");
        
        for(i = 0; i < TAM; i++){
            for (j = 1; j <= 10; j++)
            {
                resp = num[i] * j;
                printf("\n%d X %d = %d", num[i], j, resp);
            }
        printf("\n\n");
    }
}


