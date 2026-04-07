#include <stdio.h>

int main() {
    // Definição das variáveis
    char estado1;
    char estado2;
    char codigo_carta1[10];
    char codigo_carta2[10];
    char cidade1[25];
    char cidade2[25];
    int populacao1;
    int populacao2;
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

    // Uso do 'printf' para introduzir o usuário ao programa
    printf("Olá, Jogador! Bem-vindo ao Super Trunfo Cidades!\n");
    printf("Vamos guiá-lo quanto às regras do jogo. É simples.\n");
    printf("Você fornecerá dados relacionados a duas Cidades.\n");
    printf("Estes dados irão compor duas Cartas: Carta 1 e Carta 2.\n");
    printf("Ao fim da rodada, a Carta com melhores atributos vencerá.\n\n");

    printf("========== ========== ========== ========== ========== \n\n");
    
    // Uso do 'printf' em cojunto com 'scanf' e especificadores de formato para coleta de dados da Carta 1
    printf("Começaremos pela Carta 1:\n");
    printf("# Dicas: Ao inserir sua resposta, pressione a tecla enter para continuar!\n");
    printf("## Dicas: Caso precise apagar alguma coisa, é só pressionar a telca backspace!\n");
    printf("1) Estado: Você pode escolher uma letra de 'A' a 'H' para representá-lo (ex: A): ");
    scanf(" %c", &estado1);
    printf("2) Código da Carta: Use a letra que você escolheu para o Estado, seguida por um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigo_carta1);
    printf("3) Nome da Cidade: Escolha o nome da Cidade e a UF (ex: Recife-PE): ");
    scanf(" %24[^\n]", cidade1);
    printf("4) População: Quantos habitantes moram em %s, aproximadamente (ex: 1488920)? ", cidade1);
    scanf("%d", &populacao1);
    printf("5) Área: Qual é a área de %s em km² (ex: 218.84)? ", cidade1);
    scanf("%f", &area1);
    printf("6) PIB: Quanto é o Produto Interno Bruto de %s em bilhões de reais (ex: 66.00)? ", cidade1);
    scanf("%f", &pib1);
    printf("7) Pontos Turísticos: Quantos Pontos Turísticos existem em %s (ex: 50)? ", cidade1);
    scanf("%d", &pontos_turisticos1);

    printf("\n========== ========== ========== ========== ========== \n\n");

    // Uso do 'printf' e especificadores de formato para exibir a Carta 1
    printf("CARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Cálculo da densidade populacional para a Carta 1
    densidade1 = (float) populacao1 / area1;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);

    // Cálculo do PIB per Capita para a Carta1
    pib_per1 = (float) pib1 * 1000000000 / populacao1;
    printf("PIB per Capita: %.2f reais\n\n", pib_per1);

    printf("========== ========== ========== ========== ========== \n\n");

    // Uso do 'printf' em cojunto com 'scanf' e especificadores de formato para coleta de dados da Carta 2
    printf("Agora, faremos o mesmo processo para a Carta 2:\n");
    printf("1) Estado: Você pode escolher uma letra de 'A' a 'H' para representá-lo (ex: B): ");
    scanf(" %c", &estado2);
    printf("2) Código da Carta: Use a letra que você escolheu para o Estado, seguida por um número de 01 a 04 (ex: A01, B03), exceto %s: ", codigo_carta1);
    scanf("%s", codigo_carta2);
    printf("3) Nome da Cidade: Escolha o nome da Cidade e a UF (ex: São Paulo-SP): ");
    scanf(" %24[^\n]", cidade2);
    printf("4) População: Quantos habitantes moram em %s, aproximadamente (ex: 11999000)? ", cidade2);
    scanf("%d", &populacao2);
    printf("5) Área: Qual é a área de %s em km² (ex: 1521.11)? ", cidade2);
    scanf("%f", &area2);
    printf("6) PIB: Quanto é o Produto Interno Bruto de %s em bilhões de reais (ex: 1100.00)? ", cidade2);
    scanf("%f", &pib2);
    printf("7) Pontos Turísticos: Quantos Pontos Turísticos existem em %s (ex: 50)? ", cidade2);
    scanf("%d", &pontos_turisticos2);

    printf("\n========== ========== ========== ========== ========== \n\n");

    // Uso do 'printf' e especificadores de formato para exibir a Carta 2
    printf("CARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    // Cálculo da densidade populacional para a Carta 2
    densidade2 = (float) populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    // Cálculo do PIB per Capita para a Carta 2
    pib_per2 = (float) pib2 * 1000000000 / populacao2;
    printf("PIB per Capita: %.2f reais\n\n", pib_per2);

    printf("Fim da rodada. Obrigado pela interação!\n");

    return 0;
}