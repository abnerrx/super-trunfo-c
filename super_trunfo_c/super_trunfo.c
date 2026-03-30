//Super Trunfo em C
#include <stdio.h>
int main(){

    //Variáveis.
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
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
    scanf("%lu", &populacao1);
    
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
    scanf("%lu", &populacao2);
    
    printf("Digite a área do segundo estado: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB do segundo estado: ");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos do segundo estado: ");
    scanf("%d", &p_turisticos2);
    
    printf("\n"); //Pular linha.
    
    
    //Adição da densidade populacional e PIB per capita.
    float densidade1, densidade2;
    float pibcap1, pibcap2;
    if (area1 != 0){ //Evitar divisão por 0.
        densidade1 = (float) populacao1 / area1;
    }
    else {
        densidade1 = 0;
    }
    
    if (area2 != 0){
        densidade2 = (float) populacao2 / area2;
    }
    else {
        densidade2 = 0;
    }
    
    if (populacao1 != 0) { //Evitar divisão por 0 e multiplicar por um bilhão. Por que o PIB está em medida de bilhão, logo o PIB per capita iria sair arredondado para 0.
        pibcap1 = (pib1 * 1000000000.0) / (float) populacao1;
    }
    else {
        pibcap1 = 0;
    }
    
    if (populacao2 != 0){
        pibcap2 = (pib2 * 1000000000.0) / (float) populacao2;
    }
    else {
        pibcap2 = 0;
    }

    //Super Poder:

    float superpoder1, superpoder2;
    if (densidade1 != 0){
        superpoder1 = (float) pibcap1 + (float) p_turisticos1 + (float) pib1 + (float) area1 + (float) populacao1 + (1.0f/densidade1);
    }
    else {
        superpoder1 = (float) pibcap1 + (float) p_turisticos1 + (float) pib1 + (float) area1 + (float) populacao1;
    }
    if (densidade2 != 0){
        superpoder2 = (float) pibcap2 + (float) p_turisticos2 + (float) pib2 + (float) area2 + (float) populacao2 + (1.0f/densidade2);
    }
    else{
       superpoder2 = (float) pibcap2 + (float) p_turisticos2 + (float) pib2 + (float) area2 + (float) populacao2; //Se a densidade for 0, não é possível calcular o inverso, então o super poder é calculado sem o inverso da densidade.
        }


    int resultado_populacao = populacao1 > populacao2;
    int resultado_area = area1 > area2;
    int resultado_pib = pib1 > pib2;
    int resultado_p_turisticos = p_turisticos1 > p_turisticos2;
    int resultado_densidade = densidade1 < densidade2;
    int resultado_pibcap = pibcap1 > pibcap2;
    int resultado_superpoder = superpoder1 > superpoder2;


    int opcao;
    printf("Escolha uma opção: \n");
    printf("1 - Atributos \n");
    printf("2 - Comparação \n");
    printf("Digite a opção desejada: ");
    scanf(" %d", &opcao);
    int atributo;
    switch (opcao) {
        case 1:
            //Informações das cartas.
            printf("Informações das cartas:\n");
            printf("Carta 1: \n"); 
            printf("Estado: %c\n", estado1);
            printf("Código: %s\n", codigo1);
            printf("Nome: %s\n", nome1);
            printf("População: %lu\n", populacao1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: %.2f bilhões de reais\n", pib1);
            printf("Pontos turísticos: %d\n", p_turisticos1);
            printf("Densidade populacional: %.2f\n", densidade1);
            printf("PIB per capita: %.2f\n", pibcap1);

            printf("\n"); //Pular linha.
            
            printf("Carta 2: \n"); 
            printf("Estado: %c\n", estado2);
            printf("Código: %s\n", codigo2);
            printf("Nome: %s\n", nome2);
            printf("População: %lu\n", populacao2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: %.2f bilhões de reais\n", pib2);
            printf("Pontos turísticos: %d\n", p_turisticos2);
            printf("Densidade populacional: %.2f\n", densidade2);
            printf("PIB per capita: %.2f\n", pibcap2);
            break;
        case 2:
            //Comparação dos atributos.
            printf("\n");
            printf("Escolha um atributo para comparar (1 - Carta 1 Vence|0 - Carta 2 Vence): \n");
            printf("1 - População \n");
            printf("2 - Área \n");
            printf("3 - PIB \n");
            printf("4 - Pontos turísticos \n");
            printf("5 - Densidade populacional \n");
            printf("6 - PIB per capita \n");
            printf("7 - Super poder \n");
            printf("8 - Todos os atributos: \n");
            printf("Digite a opção desejada: ");
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }
        scanf(" %d", &atributo);
            switch (atributo) {
                case 1:
                    printf("\n");
                    printf("População: %d\n", resultado_populacao);
                    break;
                case 2:
                    printf("\n");
                    printf("Área: %d\n", resultado_area);
                    break;
                case 3:
                    printf("\n");
                    printf("PIB: %d\n", resultado_pib);
                    break;
                case 4:
                    printf("\n");
                    printf("Pontos turísticos: %d\n", resultado_p_turisticos);
                    break;
                case 5:
                    printf("\n");
                    printf("Densidade populacional: %d\n", resultado_densidade);
                    break;
                case 6:
                    printf("\n");   
                    printf("PIB per capita: %d\n", resultado_pibcap);
                    break;
                case 7:
                    printf("\n");
                    printf("Super poder: %d\n", resultado_superpoder);
                    break;
                case 8:
                    printf("\n");
                    printf("População: %d\n", resultado_populacao);
                    printf("Área: %d\n", resultado_area);
                    printf("PIB: %d\n", resultado_pib);
                    printf("Pontos turísticos: %d\n", resultado_p_turisticos);
                    printf("Densidade populacional: %d\n", resultado_densidade);
                    printf("PIB per capita: %d\n", resultado_pibcap);
                    printf("Super poder: %d\n", resultado_superpoder);
                    break;
            default:
                printf("Opção inválida.\n");
        }


    printf("\n"); //Pular linha.




    return 0;

}