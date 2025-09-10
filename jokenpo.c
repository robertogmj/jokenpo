#include <stdio.h>

int main() {
    int j1;
    int j2;

    // 0 = pedra | 1 = papel | 2 = tesoura
    printf("0 = Pedra | 1 = Papel | 2 = Tesoura \n");

    printf("Jogador 1 entre com sua jogada: ");
    scanf("%d", &j1);
    printf("Jogador 2 entre com sua jogada: ");
    scanf("%d", &j2);
    
    // Jogador 1 escolheu Pedra = 0
    if(j1 == 0){
        if(j2 == 0){                // Jogador 2 escolheu Pedra = 0
            printf("Resultado: Empatou!");
        }else if(j2 == 1){          // Jogador 2 escolheu Papel = 1
            printf("Resultado: Jogador 1 Ganhou");
        }else if(j2 == 2){          // Jogador 2 escolheu Tesoura = 2
            printf("Resultado: Jogador 2 Ganhou");
        }else{                      // Jogador 2 escolheu uma opcao invalida
            printf("Jogador 2 escolheu uma opcao invalida");
        }
    // Jogador 1 escolheu Papel = 1
    }else if(j1 == 1){
        if(j2 == 0){                // Jogador 2 escolheu Pedra = 0
            printf("Resultado: Jogador 1 Ganhou");
        }else if(j2 == 1){          // Jogador 2 escolheu Papel = 1
            printf("Resultado: Jogador Empatou");
        }else if(j2 == 2){          // Jogador 2 escolheu Tesoura = 2
            printf("Resultado: Jogador 2 Ganhou");
        }else{                      // Jogador 2 escolheu uma opcao invalida
            printf("Jogador 2 escolheu uma opcao invalida");
        }
    // Jogador 1 escolheu Tesoura = 2    
    }else if(j1 == 2){
        if(j2 == 0){                // Jogador 2 escolheu Pedra = 0
            printf("Resultado: Jogador 2 Ganhou");
        }else if(j2 == 1){          // Jogador 2 escolheu Papel = 1
            printf("Resultado: Jogador 1 Ganhou");
        }else if(j2 == 2){          // Jogador 2 escolheu Tesoura = 2
            printf("Resultado: Empatou");
        }else{                      // Jogador 2 escolheu uma opcao invalida
            printf("Jogador 2 escolheu uma opcao invalida");
        }
    // Jogador1 escolheu uma opcao invalida
    }else{
        printf("Jogador 1 escolheu uma opcao invalida");
    }
}
