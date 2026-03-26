//Super Trunfo em C
#include <stdio.h>
int main(){

    //Variáveis.
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int p_turisticos1, p_turisticos2;
    
    //Cadastro das informações da primeira carta:
    printf("Digite uma letra para o primeiro estado: ");
    scanf(" %c", &estado1); //Formato %c é preciso ter um espaço atrás.

    printf("Digite o código de três caracteres para o primeiro estado: ");
    scanf("%3s", codigo1); //Formato %s, a variável não precisa de &

    printf("Digite o nome do primeiro estado (Sem nome composto): ");
    scanf("%49s", nome1);

    printf("Digite a população do primeiro estado: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área do primeiro estado em km²: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB do primeiro estado: ");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turísticos do primeiro estado: ");
    scanf("%d", &p_turisticos1);

    printf("\n");
    
    //Cadastro das informações da segunda carta:
    printf("Digite uma letra para o segundo estado: ");
    scanf(" %c", &estado2);
    
    printf("Digite o código de três caracteres para o segundo estado: ");
    scanf("%3s", codigo2);

    printf("Digite o nome do segundo estado (Sem nome composto): ");
    scanf("%49s", nome2);

    printf("Digite a população do segundo estado: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área do segundo estado: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB do segundo estado: ");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos do segundo estado: ");
    scanf("%d", &p_turisticos2);
    
    printf("\n"); //Pular linha.
    
    float densidade1, densidade2;
    float pibcap1, pibcap2;
    if (area1 != 0) //Evitar divisão por 0.
        densidade1 = (float) populacao1 / area1;
    else
        densidade1 = 0;
    
    if (area2 != 0)
        densidade2 = (float) populacao2 / area2;
    else
        densidade2 = 0;
    
    if (populacao1 != 0) //Evitar divisão por 0 e multiplicar por um bilhão. Por que o PIB está em medida de bilhão, logo o PIB per capita iria sair arredondado para 0.
        pibcap1 = (pib1 * 1000000000.0) / (float) populacao1;
    else
        pibcap1 = 0;
    
    if (populacao2 != 0)
        (pib2 * 1000000000.0) / (float) populacao2;
    else
        pib2 = 0;
    

    //Informações da primeira carta:
    printf("Carta 1: \n"); 
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", p_turisticos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibcap1);

    printf("\n"); //Pular linha.
    
    //Informações da segunda carta:
    printf("Carta 2: \n"); 
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", p_turisticos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibcap2);

    return 0;

}