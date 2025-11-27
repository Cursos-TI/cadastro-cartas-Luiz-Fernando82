
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
#include <stdio.h>

int main() {
    // --- DECLARAÇÃO DE VARIÁVEIS ---
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];       // Array para armazenar código ex: A01 + caractere nulo
    char nomeCidade1[50];  // Array para nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- LEITURA DE DADOS DA CARTA 1 ---
    printf("=== Digite os dados da Carta 1 ===\n");
    
    printf("Estado (uma letra de A-H): ");
    scanf(" %c", &estado1); // O espaço antes de %c ajuda a limpar o buffer do teclado

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1); // Nota: scanf simples lê até o primeiro espaço

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);


    // --- LEITURA DE DADOS DA CARTA 2 ---
    printf("\n=== Digite os dados da Carta 2 ===\n");
    
    printf("Estado (uma letra de A-H): ");
    scanf(" %c", &estado2); 

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);


    // --- EXIBIÇÃO DOS DADOS ---
    printf("\n==============================\n");
    printf("VISUALIZAÇÃO DAS CARTAS\n");
    printf("==============================\n");

    // Exibindo Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); // %.2f formata para 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibindo Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}

