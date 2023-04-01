
/****************************** PI - ARSENAL - EX31 ****************************

Faça um programa que leia informações de 15 pessoas. Essa informação deve 
ficar em um vetor de variáveis do tipo estruturado pessoa, o qual deve conter 
as seguintes informações: 
– Nome: string de tamanho 30; 
– Sexo: tipo enumerativo com os valores masc, fem; 
– Idade: valor inteiro; 
– Estado Civil: tipo enumerativo com os valores solteiro, casado, separado, viúvo. 
– Salário: valor real.
Em seguida, imprima o número de homens, número de mulheres e informações da 
pessoa com maior salário


*******************************************************************************/
#include <stdio.h>
#include <locale.h>


#define TAM 15


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    int hom = 0;
    int mul = 0;
    float mS;
    
   
    typedef struct{
        char nome[30];
        int sexo;
        int idade;
        int e_civil;
        float salario;
    }cadastro;
    
    cadastro pessoa[TAM];
    
   //Preenchendo as informações 
    for (i = 0; i < TAM; i++){
      
        printf("\n\nDigite o nome da pessoa %d: ", i+1);
        scanf("%s", pessoa[i].nome);
        
        printf("\n (1) SEXO FEMININO  (2) SEXO MASCULINO");
       
        voltar1:
        printf("\nDigite o número correspondente ao sexo da pessoa que quer cadastrar: ");
        scanf("%d", &pessoa[i].sexo);
            if (pessoa[i].sexo != 1 && pessoa [i].sexo != 2)
            {
                printf("\nSexo inválido!");
                goto voltar1;
            }
        
        printf("\nDigite a idade da pessoa que quer cadastrar: ");
        scanf("%d", &pessoa[i].idade);
        
        printf("\n (1) SOLTEIRO  (2) CASADO (3) SEPARADO (4) VIÚVO");
        
        voltar2:
        printf("\nDigite o estado civil da pessoa que quer cadastrar: ");
        scanf("%d", &pessoa[i].e_civil);
            if (pessoa[i].e_civil != 1 && pessoa[i].e_civil != 2 && pessoa[i].e_civil != 3 && pessoa[i].e_civil != 4)
            {
                printf("\nEstado civil inválido!");
                goto voltar2;
            }
        
        printf("\nDigite o salário da pessoa que quer cadastrar: ");
        scanf("%f", &pessoa[i].salario);
        
        printf("\n            Cadastro Concluído!");
        
        }
        
    //Imprimindo número de homens 
    for (i = 0; i < TAM; i++){
        if (pessoa[i].sexo == 2)
        {
            hom = hom + 1;
        }
        else
        {
            mul = mul + 1;
        }
    }
    printf("\n\n\tO número de homens cadastrados é: %d", hom);
    
    //Imprimindo número de mulheres 
    printf("\n\tO número de mulheres cadastradas é: %d", mul);
    
    
    
    //Imprimindo informações sobre pessoa com maior salário 
    
    for(i = 0; i < TAM; i++){
        if (i == 0)
        {
            mS = pessoa[i].salario;
        }
        else{
            if(mS < pessoa[i].salario)
            {
                mS = pessoa[i].salario;
            }
        }
    }
    
    for(i = 0; i < TAM; i++)
    {
        if (mS == pessoa[i].salario)
        {
            printf("\n\nAs informações da pessoa com maior salário são: ");
            printf("\n\tNome: %s", pessoa[i].nome);
            if(pessoa[i].sexo == 1)
            {
                printf("\n\tSexo: Feminino");
            }
            else
            {
                printf("\n\tSexo: Masculino");
            }
            
            printf("\n\tIdade: %d", pessoa[i].idade);
            
            
            switch(pessoa[i].e_civil)
            {
                case 1:
                printf("\n\tEstado civil: Solteiro");
                break;
                
                case 2:
                printf("\n\tEstado civil: Casado");
                break;
                
                case 3:
                printf("\n\tEstado civil: Separado");
                break;
                
                case 4:
                printf("\n\tEstado civil: Viúvo");
                break;
            }
            
            printf("\n\tSalário: %.2f", pessoa[i].salario);
              
        }
    }
       
    fim:
    return 0;
}




