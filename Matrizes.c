
/*************************** PI - ARSENAL - EX11 *******************************

Faça um programa que deverá permitir que o usuário entre com os valores dos elementos 
de uma matriz quadrada de ordem 4 e possibilite o usuário realizar as seguintes
funcionalidades:
a) Imprimir todos os elementos da matriz;
b) Somar os quadrados de todos os elementos da primeira coluna;
c) Somar todos os elementos da terceira linha;
d) Somar os elementos da diagonal principal; e
e) Somar todos os elementos de índice par da segunda linha. (Não entendi esse item, 
então realizei a soma de todos os elementos pares da segunda linha)

*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 4


int main() {
    int l, c;
    int mat[TAM][TAM];
    int soma = 0;
    int quad;
    
    
    srand(time(NULL));
    
    //preencher matriz com números aleatórios
    
    for(l = 0; l < TAM; l++){
        for (c = 0; c < TAM; c++)
        {
            mat[l][c] = rand() % 100;
        }
    }
   
    
    //escrevendo a matriz completa 
    printf("\n      MATRIZ COMPLETA:\n\n");
    for(l = 0; l < TAM; l++){
        for (c = 0; c < TAM; c++)
        {
            printf("%2d ", mat[l][c]);
        }
        printf("\n");
    }
    
    
    //somando os elementos da terceira linha
    for(l = 0; l < TAM; l++){
        soma = 0;
        for (c = 0; c < TAM; c++)
        {
            if(l = 2)
            {
            soma = soma + mat[l][c];
            }
            
        }
        
        printf("\n\nA soma dos elementos da terceira linha é: %d ", soma);
        goto fim;
    }
    
    fim:
    //somar os quadrados dos elementos da primeira coluna
    for(c = 0; c < TAM; c++){
        soma = 0;
        for (l = 0; l < TAM; l++)
        {
            if(c == 0)
            {
            quad = mat[l][c] * mat[l][c];
            soma = soma + quad;
            }
        }
        
       printf("\n\nA soma dos quadrados dos elementos da primeira coluna é: %d", soma);
       goto exit;
    }
    
    exit:
    //somar todos os elementos da diagonal principal 
    soma = 0;
    for(l = 0; l < TAM; l++) {
        soma = soma + mat[l][l];
    }
    printf("\n\nA soma dos elementos da diagonal principal é: %d ", soma);
    
    //Somar todos os elementos par da segunda linha.
    
    for(l = 1; l < TAM; l++) {
        soma = 0;
        for (c = 0; c < TAM; c++)
        {
            if(mat[l][c] % 2 == 0)
            {
                soma = soma + mat[l][c];
            }
        }
        
        printf("\n\nA soma dos elementos pares da segunda linha é: %d ", soma);
        goto final;
    }
    
    
final:

    return 0;
}

