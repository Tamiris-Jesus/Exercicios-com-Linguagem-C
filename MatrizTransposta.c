
/****************************** PI - ARSENAL - EX16 *****************************

Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta

*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 3

int main()
{
   
   int l, c;
   int mat[TAM][TAM];
   
  srand(time(NULL));
  
  //gerando matriz com números aleatórios
  for(l = 0; l < TAM; l++){
      for(c = 0; c < TAM; c++)
      {
          mat[l][c] = rand() % 100;
      }
  }
  
  //escrevendo a matriz original
   printf("\n\n A Matriz original é:\n\n");
    for(l = 0; l < TAM; l++){
      for(c = 0; c < TAM; c++)
      {
          printf("%2d ", mat[l][c]);
      }
      printf("\n");
  }
  
  //calculando e escrevendo a transposta (convertendo as linhas de uma nas colunas da outra)
   printf("\n\n A transposta da matriz é:\n\n");

    for(l = 0; l < TAM; l++){
      for(c = 0; c < TAM; c++)
      {
          printf("%2d ", mat[c][l]);
      }
      printf("\n");
  }
  
    return 0;
}



