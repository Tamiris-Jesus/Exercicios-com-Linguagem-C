
/******************************* PI - ARSENAL - EX14 ***************************

Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja 
a intersecção entre os 2 vetores anteriores, ou seja, que contém apenas os
números que estão em ambos os vetores. Não deve conter números repetidos. 

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 10

void le_vetor(int vet[], int tam, char *texto); //declarando a função le_vetor
void intersec(int vetorA[], int vetorB[], int vetorAB[]); //declarando a função intersec

int main (){
    
    setlocale(LC_ALL, "Portuguese");
    
    int vetorA[TAM], vetorB[TAM], vetorAB[TAM]; //declarando os vetores
    
 //chamando as funções e passando os respectivos parâmetros 
    le_vetor(vetorA, 10, "vetor A"); 
    le_vetor(vetorB, 10, "vetor B");
    intersec(vetorA, vetorB, vetorAB);
    
    return 0;
}


//função que lê os valores dos vetores e mostra para o usuário 
void le_vetor(int vet[], int tam, char *texto){
    
    int i;
    
   setlocale(LC_ALL, "Portuguese");
    
    //lendo valores para os vetores 
    for(i = 0; i < TAM; i++){
        printf("Digite um valor para a posição [%d] do %s: ", i, texto);
        scanf("%d", &vet[i]);
    }
   
   //escrevendo os valores dos vetores 
    for(i = 0; i < TAM; i++){
        printf("%d  ", vet[i]);
    }
    printf(": Vetor completo \n\n");
}


//função que cria o vetor de intersecção

void intersec(int vetorA[], int vetorB[], int vetorAB[]){
    
    setlocale(LC_ALL, "Portuguese");
    
    int i, j, k, a=0;
    int repetido;
   
    for(i = 0, a = 0; i < TAM; i++){ //percorre vetor A
        for(j = 0; j < TAM; j++){ //percorre vetor B
            if(vetorA[i]==vetorB[j]){ //verifica se possuem valores iguais
                repetido = 0;
                for(k = 0; k < a; k++){ //loop que verifica todas as posições
                    if(vetorA[i] == vetorB[k]){
                        repetido = 1;
                    }
                }
                if(!repetido){ //Armazena valor de A em AB se não tiver valor repetido
                    vetorAB[a]=vetorA[i];
                    a++;
                }
            }
        }
    }
    
    //escrevendo o valor de intersecção
    printf("\n\nOs valores do vetor intersecção entre A e B e suas respectivas posições são: \n\n");
    for(i = 0;i < a;i++){
        printf("Posição [%d] do vetor AB: %d\n", i, vetorAB[i]);
    }
    
}



