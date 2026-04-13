#include <stdio.h>

int main() {
    char estado1;
    char estado2;
    char codigo1[10];
    char codigo2[10];
    char cidade1[25];
    char cidade2[25];
    unsigned long int populacao1;
    unsigned long int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontos_turisticos1; 
    int pontos_turisticos2;
    float densidade1;
    float densidade2;
    float pib_per1;
    float pib_per2;
    float super_poder1;
    float super_poder2;

    printf("Olá, Jogador! Bem-vindo ao Super Trunfo Cidades!\n");
    printf("Vamos guiá-lo quanto às regras do jogo. É simples.\n");
    printf("Você fornecerá dados relacionados a duas Cidades.\n");
    printf("Estes dados irão compor duas Cartas: Carta 1 e Carta 2.\n");
    printf("Ao fim da rodada, a Carta com melhores atributos vencerá.\n\n");

    printf("=======================================================================================================================================================================\n\n");
    
    printf("Começaremos pela Carta 1:\n");
    printf("# Dicas: Ao inserir sua resposta, pressione a tecla enter para continuar!\n");
    printf("## Dicas: Caso precise apagar alguma coisa, é só pressionar a telca backspace!\n");
    printf("1) Estado: Você pode escolher uma letra de 'A' a 'H' para representá-lo (ex: A): ");
    scanf(" %c", &estado1);
    printf("2) Código da Carta: Use a letra que você escolheu para o Estado, seguida por um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigo1);
    printf("3) Nome da Cidade: Escolha o nome da Cidade e a UF (ex: Recife-PE): ");
    scanf(" %24[^\n]", cidade1);
    printf("4) População: Quantos habitantes moram em %s, aproximadamente (ex: 1488920)? ", cidade1);
    scanf("%lu", &populacao1);
    printf("5) Área: Qual é a área de %s em km² (ex: 218.84)? ", cidade1);
    scanf("%f", &area1);
    printf("6) PIB: Quanto é o Produto Interno Bruto de %s em bilhões de reais (ex: 66.00)? ", cidade1);
    scanf("%f", &pib1);
    printf("7) Pontos Turísticos: Quantos Pontos Turísticos existem em %s (ex: 50)? ", cidade1);
    scanf("%d", &pontos_turisticos1);

    printf("\n=======================================================================================================================================================================\n\n");

    printf("CARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    densidade1 = (float) populacao1 / area1;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);

    pib_per1 = pib1 * 1000000000 / (float) populacao1;
    printf("PIB per Capita: %.2f reais\n", pib_per1);

    float densidade_pop_inv1 = 1 / densidade1;

    super_poder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1 + pib_per1 + densidade_pop_inv1;
    printf("Super Poder da Carta 1: %.2f\n\n", super_poder1);

    printf("=======================================================================================================================================================================\n\n");

    printf("Agora, faremos o mesmo processo para a Carta 2:\n");
    printf("1) Estado: Você pode escolher uma letra de 'A' a 'H' para representá-lo (ex: B): ");
    scanf(" %c", &estado2);
    printf("2) Código da Carta: Use a letra que você escolheu para o Estado, seguida por um número de 01 a 04 (ex: A01, B03), exceto %s: ", codigo1);
    scanf("%s", codigo2);
    printf("3) Nome da Cidade: Escolha o nome da Cidade e a UF (ex: São Paulo-SP): ");
    scanf(" %24[^\n]", cidade2);
    printf("4) População: Quantos habitantes moram em %s, aproximadamente (ex: 11999000)? ", cidade2);
    scanf("%lu", &populacao2);
    printf("5) Área: Qual é a área de %s em km² (ex: 1521.11)? ", cidade2);
    scanf("%f", &area2);
    printf("6) PIB: Quanto é o Produto Interno Bruto de %s em bilhões de reais (ex: 1100.00)? ", cidade2);
    scanf("%f", &pib2);
    printf("7) Pontos Turísticos: Quantos Pontos Turísticos existem em %s (ex: 50)? ", cidade2);
    scanf("%d", &pontos_turisticos2);

    printf("\n=======================================================================================================================================================================\n\n");

    printf("CARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    densidade2 = (float) populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    pib_per2 = pib2 * 1000000000 / (float) populacao2;
    printf("PIB per Capita: %.2f reais\n", pib_per2);

    float densidade_pop_inv2 = 1 / densidade2;

    super_poder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + pib_per2 + densidade_pop_inv2;
    printf("Super Poder da Carta 2: %.2f\n\n", super_poder2);

    printf("=======================================================================================================================================================================\n\n");

    int populacao = populacao1 > populacao2;
    int area = (int) area1 > (int) area2;
    int pib = (int) pib1 > (int) pib2;
    int pontos_tur = pontos_turisticos1 > pontos_turisticos2;
    int densidade_inv = densidade_pop_inv1 > densidade_pop_inv2;
    int pib_per = (int) pib_per1 > (int) pib_per2;
    int super = (int) super_poder1 > (int) super_poder2;

    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 > Carta 2? %d.\n", populacao);
    printf("Área: Carta 1 > Carta 2? %d.\n", area);
    printf("PIB: Carta 1 > Carta 2? %d.\n", pib);
    printf("Pontos Turísticos: Carta 1 > Carta 2? %d.\n", pontos_tur);
    printf("Densidade Populacional: Carta 1 < Carta 2? %d.\n", densidade_inv);
    printf("PIB per Capita: Carta 1 > Carta 2? %d.\n", pib_per);
    printf("Super Poder: Carta 1 > Carta 2? %d.\n", super);
    
    return 0;
}