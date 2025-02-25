#include <stdio.h>

int main(){

    
    // Criação das variáveis para as cartas
    char estado1; // variável para os estados
    char codigo1[5]; // variável para o código da carta A01, A02...
    char cidade1[20]; // variável para as cidades  
    int populacao1; // variável para população
    float area1; // variável área em km²
    float pib1; // variável PIB em milhões de reais
    int pontos1; // número de pontos turísticos

    char estado2;
    char codigo2[5];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Entrada dos dados da carta 1
    printf("Digite os dados da carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);  // Selecionar o estado

    printf("Digite o código da carta:\n");
    scanf("%s", codigo1);

    printf("Digite a cidade:\n");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos1);

    getchar();  // Limpar o buffer de entrada antes de ler o próximo estado

    // Entrada dos dados da carta 2
    printf("Digite os dados da carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);  // Selecionar o estado

    printf("Digite o código da carta:\n");
    scanf("%s", codigo2);

    printf("Digite a cidade:\n");
    scanf(" %[^\n]", cidade2); // %[^] para conseguir escrever o nome completo da cidade

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos2);

    //exibição de dados da carta 1

    printf("\n Carta 1:\n");
    printf("Estado: %c\n",estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("Pib: %.2f Bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);

    //exibição de dados da carta 2

    printf("\n Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Pib: %.2f Bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);


    return 0;
}
