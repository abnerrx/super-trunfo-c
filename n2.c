#include <stdio.h>
int main(){
    int numero1, numero2;
    int media;
    printf("Digite um número: ");
    scanf("%d", &numero1);
    printf("Digite outro número: ");
    scanf("%d", &numero2);
    media = (numero1 + numero2) / 2;
    printf("A sua média é %d\n", media);
    return 0;

}