
/***************************** PI - ARSENAL - EX23 *****************************

Construa um programa para o jogo da velha. Esse jogo consiste em um tabuleiro de 
dimensão 3x3 de valores O ou X. Os usuários devem informar a linha e a coluna que 
desejam preencher. A partir da terceira jogada de cada jogador é necessário 
verificar se houve algum ganhador. Também é possível que o resultado do jogo seja
empate (nenhum jogador preencheu uma coluna, uma linha ou uma diagonal). 

********************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 3

int main(){

    setlocale(LC_ALL, "Portuguese");
    
    int l, c;
    int linha, coluna;
    int opc;
    int jogador, ganhou, jogadas;
    
    char tabuleiro[TAM][TAM];

    do{ 
        jogador = 1;
        ganhou = 0;
        jogadas = 0;
       
        for(l = 0; l < TAM; l++){
            for(c = 0; c < TAM; c++){
                tabuleiro[l][c] = ' ';
            }
        }

        do{ 
           
            printf("\n\n\t 0   1   2\n\n");
            for(l = 0; l < TAM; l++){
                for(c = 0; c < TAM; c++){
                    if(c == 0)
                    {
                        printf("\t");
                    }
                        printf(" %c ", tabuleiro[l][c]);
                    if(c < 2) //faz a separação dos espaços para cada caracter
                    {
                        printf("|");
                    }
                    if(c == 2)
                    {
                        printf("  %d", l);
                    }
                }
                if(l < 2)
                {
                    printf("\n\t-----------");
                }
                printf("\n");
            }

            
            do{
                printf("\nJOGADOR 1 = 0\nJOGADOR 2 = X\n");
                printf("\nÉ A VEZ DO JOGADOR %d: Digite a linha e a coluna: ", jogador);
                scanf("%d%d", &linha, &coluna);
            }while(linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || tabuleiro[linha][coluna] != ' '); 

            // salva a coordenada do usuário
            if(jogador == 1){
                tabuleiro[linha][coluna] = '0';
                jogador++;
            }
            else{
                tabuleiro[linha][coluna] = 'X';
                jogador = 1;
            }
            jogadas++;

            // verifica as jogadas das linhas
            if(tabuleiro[0][0] == '0' && tabuleiro[0][1] == '0' && tabuleiro[0][2] == '0' ||
               tabuleiro[1][0] == '0' && tabuleiro[1][1] == '0' && tabuleiro[1][2] == '0' ||
               tabuleiro[2][0] == '0' && tabuleiro[2][1] == '0' && tabuleiro[2][2] == '0'){
                printf("\n================================");
                printf("\n\tJOGO ENCERRADO!");
                printf("\n================================");
                printf("\nParabéns! O jogador 1 ganhou!\n");
                ganhou = 1;
            }

            if(tabuleiro[0][0] == 'X' && tabuleiro[0][1] == 'X' && tabuleiro[0][2] == 'X' ||
               tabuleiro[1][0] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[1][2] == 'X' ||
               tabuleiro[2][0] == 'X' && tabuleiro[2][1] == 'X' && tabuleiro[2][2] == 'X'){
                printf("\n================================");
                printf("\n\tJOGO ENCERRADO!");
                printf("\n================================");
                printf("\nParabéns! O jogador 2 ganhou!\n");
                ganhou = 1;
            }

            // veririca as jogadas das colunas 
            if(tabuleiro[0][0] == '0' && tabuleiro[1][0] == '0' && tabuleiro[2][0] == '0' ||
               tabuleiro[0][1] == '0' && tabuleiro[1][1] == '0' && tabuleiro[2][1] == '0' ||
               tabuleiro[0][2] == '0' && tabuleiro[1][2] == '0' && tabuleiro[2][2] == '0'){
                printf("\n================================");
                printf("\n\tJOGO ENCERRADO!");
                printf("\n================================");
                printf("\nParabéns! O jogador 1 ganhou!\n");
                ganhou = 1;
            }

            if(tabuleiro[0][0] == 'X' && tabuleiro[1][0] == 'X' && tabuleiro[2][0] == 'X' ||
               tabuleiro[0][1] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][1] == 'X' ||
               tabuleiro[0][2] == 'X' && tabuleiro[1][2] == 'X' && tabuleiro[2][2] == 'X'){
                printf("\n================================");
                printf("\n\tJOGO ENCERRADO!");
                printf("\n================================");
                printf("\nParabéns! O jogador 2 ganhou!\n");
                ganhou = 1;
            }

            // verifica as jogadas na diagonal principal
            if(tabuleiro[0][0] == '0' && tabuleiro[1][1] == '0' && tabuleiro[2][2] == '0'){
                printf("\n================================");
                printf("\n\tJOGO ENCERRADO!");
                printf("\n================================");
                printf("\nParabéns! O jogador 1 ganhou!\n");
                ganhou = 1;
            }

            if(tabuleiro[0][0] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][2] == 'X'){
                printf("\n================================");
                printf("\n\tJOGO ENCERRADO!");
                printf("\n================================");
                printf("\nParabéns! O jogador 2 ganhoul!\n");
                ganhou = 1;
            }

            // verifica as jogadas na diagonal secundária
            if(tabuleiro[0][2] == '0' && tabuleiro[1][1] == '0' && tabuleiro[2][0] == '0'){
                printf("\n================================");
                printf("\n\tJOGO ENCERRADO!");
                printf("\n================================");
                printf("\nParabéns! O jogador 1 ganhou\n");
                ganhou = 1;
            }

            if(tabuleiro[0][2] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][0] == 'X'){
                printf("\n================================");
                printf("\n\tJOGO ENCERRADO!");
                printf("\n================================");
                printf("\nParabéns! O jogador 2 ganhou!\n");
                ganhou = 1;
            }
        } while(ganhou == 0 && jogadas < 9); //fazer as verificações enquanto ninguém vencer e ainda não tiver concluído 9 jogadas 

        // imprimindo o jogo 
        printf("\n\n\t 0   1   2\n\n");
        for(l = 0; l < TAM; l++){
            for(c = 0; c < TAM; c++){
                if(c == 0)
                    printf("\t");
                printf(" %c ", tabuleiro[l][c]);
                if(c < 2)
                    printf("|");
                if(c == 2)
                    printf("  %d", l);
            }
            if(l < 2)
                printf("\n\t-----------");
            printf("\n");
        }

        if(ganhou == 0)
            printf("\nEmpate! Nenhum jogador ganhou!\n");

        printf("\nDeseja jogar novamente? Digite 1 para SIM ou qualquer tecla para NÃO: \n");
        scanf("%d", &opc);
    } while(opc == 1); //fazer tudo até que o usuário não queira jogar novamente 

    return 0;
}

