#include <stdio.h>
#include <stdlib.h>

int win (char jogo[3][3]);

void printjogo (char jogo[3][3]);

int main(void){
    int t = 0;
    char jogo[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    while(!win(jogo)){
        printjogo(jogo);
        printf("Faca sua jogada (linha x coluna)\n");
        int x, y;
        while(1){
        scanf("%d %d", &x, &y);
        if (jogo[x-1][y-1] == ' ')
        break;
        system("cls");
        printjogo(jogo);
        printf("Jogada invalida\n");
        }
        jogo[x-1][y-1] = 'X';
        t = 1;
        system("cls");
        if(!win(jogo)){
        printjogo(jogo);
        printf("Faca sua jogada (linha x coluna)\n");
        int x2, y2;
        while(1){
        scanf("%d %d", &x2, &y2);
        if (jogo[x2-1][y2-1] == ' ')
        break;
        system("cls");
        printjogo(jogo);
        printf("Jogada invalida\n");
        }
        jogo[x2-1][y2-1] = 'O';
        t = 0;
        system("cls");
        }
    }
    if(t)
        printf("O jogador \"X\" ganhou");
    else
        printf("O jogador \"O\" ganhou");
    return 0;
}

int win (char jogo[3][3]){
    for( int i = 0; i<3; i++){
        if((jogo[i][0] == jogo[i][1]) && (jogo[i][1] == jogo[i][2]) && jogo[i][0] != ' '){
            return 1;
        }
        if((jogo[0][i] == jogo[1][i]) && (jogo[1][i] == jogo[2][i]) && jogo[0][i] != ' '){
            return 1;
        }
    }
    if((jogo[0][0] == jogo[1][1]) && (jogo[1][1] == jogo[2][2]) && jogo[0][0] != ' ')
    return 1;
    if((jogo[0][2] == jogo[1][1]) && (jogo[1][1] == jogo[2][0]) && jogo[0][2] != ' ')
    return 1;
    return 0;
}

void printjogo (char jogo[3][3]){
    printf("\n");
    printf(" %c | %c | %c\n", jogo[0][0], jogo[0][1], jogo[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", jogo[1][0], jogo[1][1], jogo[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", jogo[2][0], jogo[2][1], jogo[2][2]);
    printf("\n");
}
