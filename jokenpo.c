#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define RESET   "\033[0m"
#define RED     "\033[0;31m"
#define GREEN   "\033[0;32m"
#define CYAN    "\033[0;36m"
#define GRAY    "\033[0;90m"   

// 1 = pedra, 2 = papel, 3 = tesoura.

void jogo(int jogada1, int jogada2);

int main(){
    srand(time(NULL));
    int j1, j2;
    j2 = rand() % 3 + 1;
    printf(CYAN"Escolha sua opcao\n"RESET);
    printf("1) Pedra\n");
    printf("2) Papel\n");
    printf("3) Tesoura\n");
    scanf("%d", &j1);
    jogo(j1, j2);
    return 0;
}

void jogo(int jogada1, int jogada2){
    if(jogada1 == jogada2)
    printf(GRAY"Empate!!"RESET);
    if((jogada1 == 1 && jogada2 == 2) || (jogada1 == 3 && jogada2 == 1) || (jogada1 == 2 && jogada2 == 3))
    printf(RED"Derrota!!"RESET);
    if((jogada1 == 1 && jogada2 == 3) || (jogada1 == 3 && jogada2 == 2) || (jogada1 == 2 && jogada2 == 1))
    printf(GREEN"Vitoria!!"RESET);
}