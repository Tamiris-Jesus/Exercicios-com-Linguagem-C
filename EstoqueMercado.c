
/*************************** PI - ARSENAL - EX34 *******************************

Faça um programa que gerencie o estoque de um mercado e:
• Crie e leia um vetor de 5 produtos, com os dados: código (inteiro), nome (máximo 
15 letras), preço e quantidade.
• Leia um pedido, composto por um código de produto e a quantidade. Localize 
este código no vetor e, se houver quantidade suficiente para atender ao pedido 
integralmente, atualize o estoque e informe o usuário. Repita este processo até ler
um código igual a zero. 
Se por algum motivo não for possível atender ao pedido, mostre uma mensagem
informando qual erro ocorreu.


*******************************************************************************/
#include <stdio.h>
#include <locale.h>

#define TAM 5

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    int codped, quantped;
    int quantd;
    
    typedef struct{
        int cod;
        char nome[15];
        int quant;
        float preco;
    }produtos;
    
    produtos prod[TAM];
   
    
    //lendo vetor de produtos
    printf("\n\n               CADASTRO DO ESTOQUE");
    for(i = 0; i < TAM; i++){
    printf("\n\nDigite o código do produto %d: ", i+1);
    scanf("%d", &prod[i].cod);
    
    printf("\nDigite o nome do produto %d: ", i+1);
    scanf("%s", prod[i].nome);
    
    printf("\nDigite a quantidade do produto %d no estoque: ", i+1);
    scanf("%d", &prod[i].quant);
    
    printf("\nDigite o preço do produto %d: ", i+1);
    scanf("%f", &prod[i].preco);
}

    //lendo pedido 
   do{
    printf("\n\n                 PEDIDO");
    printf("\n\nDigite o código do produto que quer adquirir: ");
    scanf("%d", &codped);
    
    printf("\nDigite a quantidade do produto que quer adquirir: ");
    scanf("%d", &quantped);
    
    //verificando se existe a quantidade do produto no estoque
        
    for (i = 0; i < TAM; i++){
        if(prod[i].cod == codped)
        {
            
            if (quantped <= prod[i].quant)
            {
            prod[i].quant = prod[i].quant - quantped;
            printf("\nPedido finalizado com sucesso!");
            printf("\n A nova quantidade do produto de código %d no estoque é: %d", prod[i].cod, prod[i].quant);
            }
            else if(quantped > prod[i].quant)
            {
                printf("\nDesculpe, não possuímos quantidade suficiente no estoque para atender seu pedido");
            }
            
        }
    }
        
    } while (codped != 0); //enquanto o código por diferente de 0 
    
    return 0;
}


