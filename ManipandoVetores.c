
/**************************** PI - ARSENAL - EX05 ******************************

Ler um vetor de 10 elementos inteiros e positivos. Criar um segundo vetor da 
seguinte forma: os elementos de índice par receberão os respectivos elementos
divididos por 2; os elementos de índice ímpar receberão os respectivos elementos
multiplicados por 3. Imprima os dois vetores. 

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

#define TAM 10

int main()
{
    
   setlocale(LC_ALL, "Portuguese");

   int i;
   //criando vetores 
   int vetA[TAM];
   int vetB[TAM];
   
   //lendo vetor A
   for(i = 0; i < TAM; i++){
        printf("\nDigite um valor para a posição [%d] do vetor A: ", i);
        scanf("%d",&vetA[i]);
    }
    
    for(i = 0; i < TAM; i++){
        if(i % 2 == 0) //verifica se o índice do vetor é divisível por 2
        {
            vetB[i] = vetA[i] / 2; //se for, divide o valor por 2 e armazena em B
        }
        
        else
        {
            vetB[i] = vetA[i] * 3; //se não for, multiplica por 3 e armazena em B
        }
    }
    
    printf("\n\n      VETOR A:"); //escrevendo vetor A
    
    for(i = 0; i < TAM; i++){
        printf("\nPosição: %d - Valor: %d", i, vetA[i]);
    }
    
    printf("\n\n      VETOR B:"); //escrevendo vetor B
    
    for(i = 0; i < TAM; i++){
        printf("\nPosição: %d - Valor: %d", i, vetB[i]);
    }
    
    return 0;
}


