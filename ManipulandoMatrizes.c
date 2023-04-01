
/***************************** PI - ARSENAL - EX29 ******************************

Escreva um programa em C que gere uma matriz B a partir de manipulações em uma
matriz A de dimensão 6×6. Escreva uma função que receba por parâmetro a matriz 
A e retorne a matriz B, onde cada linha l de B é a linha l de A multiplicada 
pelo elemento da diagonal principal da linha l. 

*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 6

void calculaB(int mat[TAM][TAM]); //declarando função calculaB

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int l, c;
    int matA[TAM][TAM];
    
    srand(time(NULL));
    
    //preenchendo a matriz com números aleatórios de 0 a 99
    for(l = 0; l < TAM; l++){
        for(c = 0; c < TAM; c++){
            matA[l][c] = rand() % 100;
        }
    }
    
    //escrevendo a matriz original 
    printf("\n    Matriz original:\n\n");
    
    for(l = 0; l < TAM; l++){
        for (c = 0; c < TAM; c++)
        {
            printf("%2d ", matA[l][c]);
        }
        printf("\n");
    }

    printf("\n\n");
    
    //chamando a função ccalculaB e passando a matriz 'A' como parâmetro 
    calculaB(matA);

    return 0;
}

void calculaB(int mat[TAM][TAM]) {
    
    int l, c;
    int matB[TAM][TAM];
    
    /*multiplicando cada elemento de cada linha de A pela
    diagonal principal daquela linha e armazenando em B
   */
    
    
    for(l = 0; l < TAM; l++){
        for(c = 0; c < TAM; c++){
            matB[l][c] = mat[l][c] * mat[l][l];
        }
    }
    
    //escrevendo 'B'
    printf("\n    Matriz transformada:\n\n");

    for(l = 0; l < TAM; l++){
        for(c = 0; c < TAM; c++){
            printf("%5d ", matB[l][c]); //defini que todos os números devem ter 5 algarismos para não ficar torto 
        }
        printf("\n");
    }
    
}


