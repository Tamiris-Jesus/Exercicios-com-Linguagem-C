
/****************************** PI - ARSENAL - EX37 ****************************

Faça um programa que:
a)  Lê  os  dados  de  um  estoque  de  loja.  Cada  produto  do  estoque  possui 
um  CODIGO  (inteiro),  uma QUANTIDADE (inteiro) e um PRECO (real). Armazene estes
dados em um vetor de registros de 5 posições.
b) Crie um novo vetor de registros e copie apenas aqueles produtos digitados no 
item a) que custam acima de R$ 10,00.
c) Imprima a média de preço dos produtos que custam acima de R$ 10,00.
d) Imprima todos os produtos que custam mais de R$ 10,00.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

#define TAM 5

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    int quantP = 0;
    float somaP = 0;
    float mediap;
    
    
   typedef struct{
       int cod;
       int quant;
       float preco;
   }produtos;
 
   
   produtos estoque[TAM];
   produtos caros[TAM];
   
   //lendo estoque 
   printf("\n\tPOR FAVOR, PREENCHA OS DADOS DOS PRODUTOS DO ESTOQUE");
   for(i = 0; i < TAM; i++){
       printf("\n\nDigite o código do produto %d: ", i+1);
       scanf("%d", &estoque[i].cod);
       
       printf("\nDigite a quantidade do produto %d que tem no estoque: ", i+1);
       scanf("%d", &estoque[i].quant);
       
       printf("\nDigite o preço do produto %d: ", i+1);
       scanf("%f", &estoque[i].preco);
       
   }
   
   //copiando para o segundo vetor de registros os dados dos produtos que custam mais de 10 reais 
   printf("\n\n\tOS DADOS DOS PRODUTOS DO ESTOQUE QUE CUSTAM MAIS DE 10 REAIS SÃO:");
   for(i = 0; i < TAM; i++){
       if(estoque[i].preco > 10)
       {
           caros[i].cod = estoque[i].cod;
           caros[i].quant = estoque[i].quant;
           caros[i].preco = estoque[i].preco;
           quantP = quantP + 1;
           //Imprimindo todos os produtos que custam mais de 10 reais
           printf("\n\nCódigo: %d ", caros[i].cod);
           printf("\nQuantidade no estoque: %d ", caros[i].quant);
           printf("\nPreço: %.2f ", caros[i].preco);
           somaP = somaP + caros[i].preco;
       }
   }
   
    //imprimindo a quantidade dos produtos que custam mais de 10 reais
   printf("\n\n\tA quantidade de produtos do estoque que custam mais de 10 reais é: %d", quantP);
   
   mediap = somaP / quantP;
   
  //imprimindo a média dos preços dos produtos que custam mais de 10 reais 
   printf("\n\n\tA média dos preços dos produtos que custam mais de 10 reais é: %.2f", mediap);
   
    return 0;
}




