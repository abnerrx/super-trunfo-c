#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int numero_jogador, numero_maquina, opcao;
    srand(time(0));
    printf("Jogo de Adivinhação\n");
    printf("Regras do Jogo:\n");
    printf("Serão escolhidos aleatoriamente 2 números de 1 à 100.");
    printf(" O jogador deve adivinhar se o número da máquina é maior, menor ou igual ao número do jogador.\n");
    numero_jogador = rand() % 100 + 1; //Gerar um número aleatório entre 1 e 100.
    numero_maquina = rand() % 100 + 1; //Gerar um número aleatório entre 1 e 100.
    printf("1 - O número da máquina é maior que o número do jogador.\n");
    printf("2 - O número da máquina é menor que o número do jogador.\n");
    printf("3 - O número da máquina é igual ao número do jogador.\n");
    printf("Número do jogador: %d\n", numero_jogador), printf("Escolha a opção desejada: ");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            if (numero_maquina > numero_jogador) {
                printf("Parabéns! Você acertou.\n");
                printf("Número da máquina: %d\n", numero_maquina);
            } else {
                printf("Que pena! Você errou.\n");
                printf("Número da máquina: %d\n", numero_maquina);
            }
            break;
        case 2:
            if (numero_maquina < numero_jogador) {
                printf("Parabéns! Você acertou.\n");
                printf("Número da máquina: %d\n", numero_maquina);
            } else {
                printf("Que pena! Você errou.\n");
                printf("Número da máquina: %d\n", numero_maquina);
            }
            break;
        case 3:
            if (numero_maquina == numero_jogador) {
                printf("Parabéns! Você acertou.\n");
                printf("Número da máquina: %d\n", numero_maquina);
            } else {
                printf("Que pena! Você errou.\n");
                printf("Número da máquina: %d\n", numero_maquina);
            }
            break;
        default:
            printf("Opção inválida.\n");
    }
    return 0;
}