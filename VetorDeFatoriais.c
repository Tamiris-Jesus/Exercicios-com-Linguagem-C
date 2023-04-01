
/******************************* PI - ARSENAL - EX26 ****************************

Faça um procedimento que recebe 2 vetores A e B de tamanho 10 de inteiros, 
por parâmetro. Ao final do procedimento B deve conter o fatorial de cada elemento
de A. O vetor B deve retornar alterado. 

OBS:::: Para retornar o vetor eu precisaria usar ponteiros, por isso realizei
o cálculo na função "fatorialA" e apenas chamei a função em "main", passando
o vetor A preenchido e o B vazio como parâmetros. :::::

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 10

int fatorialA(int vetA[TAM], int vetB[TAM]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    
    int vetA[TAM];
    int vetB[TAM];
    int i;
    
 //lendo vetor A
    for (i = 0; i < TAM; i++)
    {
        printf("Por favor, digite um número para a posição %d do vetor A: ", i);
        scanf("%d", &vetA[i]);
    }  
    
    //chamando a função fatorialA e passando o vetor A preenchido e o B vazio como parâmetros 
    fatorialA(vetA, vetB);

    return 0;
}

int fatorialA(int vetA[TAM], int vetB[TAM]){
   
    int fat, cont, i;
    cont = 1;
  
  //calculando a fatorial dos elementos de 'A' e armazenando em 'B'
    for (i = 0; i < TAM; i++) {
        
        fat = 1;
    
        for (cont = 1; cont <= vetA[i]; cont++)
        {
           
            fat = fat * cont;
            vetB[i] = fat;
        }
        
    }

//imprimindo 'B'    
   printf("\nOs valores do vetor B são as fatoriais dos valores de A, deste modo os valores de B são:");
    
        for (i = 0; i < TAM; i++)
    {
        printf("\nPosição %d: %d", i, vetB[i]);
    } 
    
}





