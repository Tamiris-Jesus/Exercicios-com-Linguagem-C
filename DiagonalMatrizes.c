
/******************************** PI - ARSENAL - EX19 **************************

Faça uma função que receba como parâmetro uma matriz A(10,10) e multiplique cada 
linha pelo elemento da diagonal principal daquela linha. A função deverá retornar
a matriz alterada, utilizando passagem por referência, e exibida pela função principal.

// o enunciado está confuso, então realizei a soma de todos os elementos de cada linha
e armazenei em um vetor, e depois realizei a multiplicação pelo elemento da diagonal 
principal que está naquela linha. 

*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 10

void multiplicamatriz(int mat[TAM][TAM]); //declarando função multiplicamatriz

int main()
{
   
    int mat[TAM][TAM];
    int l, c;
    
    //gerando a matriz 10x10 com valores aleatórios entre 0 e 99
    srand(time(NULL));
    
    for(l = 0; l < TAM; l++){
        for (c = 0; c < TAM; c++)
        {
            mat[l][c] = rand() % 100;
        }
    }
    
    //escrevendo a matriz completa 
    for(l = 0; l < TAM; l++){
        for (c = 0; c < TAM; c++)
        {
            printf("%2d ", mat[l][c]);
        }
        printf("\n");
    }

    
    printf("\n\n");
    
    
    //Escrevendo a diagonal principal da matriz para possibilitar que se confirme o resultado
    for(l = 0; l < TAM; l++){
        for (c = 0; c < TAM; c++)
        {
            if (l == c)
            {
                printf("%d ", mat[l][c]);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    
    multiplicamatriz(mat);
    

    
    return 0;
}

void multiplicamatriz(int mat[TAM][TAM]) {
    int l, c;
    
    int soma = 0;
    
    int mult[TAM];
    
    int somaL[TAM];
    
     //fazendo a soma de todos os elementos de cada linha e guardando em um vetor
    for(l = 0; l < TAM; l++){
        soma = 0;
        for(c = 0; c < TAM; c++)
        {
            soma = soma + mat[l][c]; 
        }
        somaL[l] = soma;
    }
    
    printf("\n\n");
    
    //multiplicando a soma pelo elemento da diagonal principal daquela linha  
     
     for(l = 0; l < TAM; l++) {
         mult[l] = somaL[l] * mat[l][l];
     }
     
     for(l = 0; l < TAM; l++) {
         printf("\nO resultado da multiplicação da soma dos elementos da linha %d pelo elemento da diagonal principal correspondente é: %d", l, mult[l]);
     }
    
}




