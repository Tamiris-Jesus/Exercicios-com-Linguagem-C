
/********************* PI - ARSENAL - EX02 ******************
Dizemos que um número natural é triangular se ele é produto
de três números naturais consecutivos. Exemplo: 120 é
triangular, pois 4.5.6 = 120. Dado um inteiro não-negativo n,
verificar se n é triangular.


O programa é executado até que o usuário insira um número negativo
***********************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

setlocale(LC_ALL, "Portuguese");

   int num, naturais, i;

   do{

   i = 1;
   naturais = i * (i+1) * (i+2);

   printf("\n\nDigite o número que deseja verificar se é triangular:  ");
   scanf("%d", &num);

     while (naturais < num) {
        i++;
        naturais = i * (i+1) * (i+2);
    }

        if(num == naturais){
            printf("\n\tSim! %d é um número triangular", num);
        }
        else {
        printf("\n\tNão! %d não é um número triangular!", num);
        }

   } while (num > 0);

    return 0;
}

