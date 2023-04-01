
/****************************** PI - ARSENAL - EX35 ******************************

Um provedor de acesso à Internet mantém o seguinte cadastro de clientes: 
código do cliente, email, número de  horas  de  acesso, página  (S-sim ou  N-não).
(UTILIZEI 0 PARA NÃO E 1 PARA SIM)
Elaborar  um  algoritmo  que  calcule  e mostre um  relatório contendo o valor 
a pagar  por cada cliente, sabendo-se que as primeiras 20 horas de acesso é 
R$35,00 e as horas que excederam tem o custo de R$2,50 por hora. Para os clientes
que têm página, adicionar R$40,00. Inserir um conjunto de registros (máximo 500).

==Achei melhor colocar o limite de registros como 5 para melhorar a visualização,
mas como eu usei uma constante para controlar, é só alterá-la caso necessário.

==No problema original também solicitava o email, mas como já usei o char em outros
problemas desse PI, preferi omitir para otimizar a digitação e deixei comentado.

==Eu sei o cls para evitar a poluição da tela, mas caso queira retirar  é só 
comentar a linha 70.


*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h> //usar o cls

#define TAM 5
 

int main()
{
   setlocale(LC_ALL, "Portuguese");
   
   int i;
   float vinteH = 35;
   float excedH = 2.50;
   float totalP;
   int horasM;
   
   
   typedef struct{
       int cod;
       //char email[30];
       int nhoras;
       int pag;
   }cadastro;
   
   
   cadastro clientes[TAM];
   
   for(i = 0; i < TAM; i++){
       
       printf("\n\n                    CADASTRO DO CLIENTE %d", i+1);
       
       printf("\nDigite o código do cliente: ");
       scanf("%d", &clientes[i].cod);
       
      // printf("\nDigite o email do cliente: ");
      // scanf("%s", clientes[i].email);
       
       printf("\nDigite o número de horas de acesso: ");
       scanf("%d", &clientes[i].nhoras);
       
       printf("\nO cliente tem página? Digite 0 para NÃO e 1 para SIM: ");
       scanf("%d", &clientes[i].pag);
       
       printf("\n                    CADASTRO CONCLUÍDO!");
    
  
   }
   
    system("clear");
    //system("cls"); (caso seu ambiente seja windows, tire o comenário dessa linha e coloque na anterior)

/* 
Elaborar  um  algoritmo  que  calcule  e mostre um  relatório contendo o valor 
a pagar  por cada cliente, sabendo-se que as primeiras 20 horas de acesso é 
R$35,00 e as horas que excederam tem o custo de R$2,50 por hora. Para os clientes
que têm página, adicionar R$40,00. Inserir um conjunto de registros (máximo 500).
 */
 
    for(i = 0; i < TAM; i++){
        
        if(clientes[i].nhoras == 20 && clientes[i].pag == 0)
        {
            totalP = vinteH;
            
        }
        
        else {
            
        if(clientes[i].nhoras == 20 && clientes[i].pag == 1)
        {
            totalP = vinteH + 40;
            
        }
             else {
            
            if (clientes[i].nhoras > 20 && clientes[i]. pag == 0){
                
            horasM = clientes[i].nhoras - 20;
            totalP = vinteH + (horasM * excedH);
            }
            
            else {
                
            if (clientes[i].nhoras > 20 && clientes[i].pag == 1)
            {
            horasM = clientes[i].nhoras - 20;
            totalP = vinteH + 40 + (horasM * excedH);
            }
            
             }
        }
        }
        printf("\n\n                 Cliente %d", i+1);
        printf("\nCódigo: %d", clientes[i].cod);
        printf("\nNúmero de horas utilizadas: %d", clientes[i].nhoras);
        printf("\nTotal a pagar: %.2f", totalP);
    }


    return 0;
}


