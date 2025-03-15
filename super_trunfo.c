#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Limpa o buffer para evitar problemas na leitura do nome da cidade 2
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
int main(){

    char estado, estado2;             // Letra que representa o estado (de A a H)
    int turismo, turismo2;            // Número de pontos turísticos
    float pib, pib2;                  // PIB da cidade
    int area, area2;                   // Área da cidade em km²
    int populacao, populacao2;        // População da cidade
    char cidade[20], cidade2[20];     // Nome da cidade
    char codigo [3], codigo2[3];      // Código da carta (ex: A01, B03)
    
    // ==============================
    // Entrada de dados da Carta 1
    // ==============================
    printf("Digite uma letra de A a Z para representar seu Estado: \n");
    scanf("%c", & estado);

    printf("Quantos pontos turísticos tem na sua cidade? \n");
    scanf("%d", & turismo);
    
    printf("Qual o PIB da sua cidade? \n");
    scanf("%f", & pib);

    printf("Quantos Km² tem a sua cidade? \n");
    scanf("%d", & area);

    printf("Tem quantos habitantes na sua cidade? \n");
    scanf("%d", & populacao);

    limpar_buffer(); // Limpa o buffer para evitar problemas na leitura do nome da cidade 2

    printf("Qual o nome da sua cidade? \n");
    scanf(" %[^\n]%*c", cidade);

    printf("Para representar o código de sua carta, escolha um número de 01 a 04 : \n");
    scanf("%s", codigo);

     // Linha de separação para organizar a saída
    printf("==========================================================================================\n");

    // ==============================
    // Exibição dos dados da Carta 1
    // ==============================
    printf("Carta 1 \n" );
    printf("Estado: %c \n", estado);
    printf("Código: %c%s \n", estado, codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %d Km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", turismo);

        // Linha de separação para organizar a saída
    printf("==========================================================================================\n");

    // ==============================
    // Entrada de dados da Carta 2
    // ==============================
    printf("Digite uma letra de A a Z para representar seu Estado: \n");
    scanf(" %c", & estado2); // O espaço antes de %c corrige o problema do buffer

    printf("Quantos pontos turísticos tem na sua cidade? \n");
    scanf(" %d", & turismo2);

    printf("Qual o PIB da sua cidade? \n");
    scanf(" %f", & pib2);

    printf("Quantos Km² tem a sua cidade? \n");
    scanf(" %d", & area2);

    limpar_buffer();  // Limpa o buffer para evitar problemas na leitura do nome da cidade 2

    printf("Tem quantos habitantes na sua cidade? \n");
    scanf(" %d", & populacao2);

    printf("Qual o nome da sua cidade? \n");
    scanf(" %[^\n]%*c", cidade2);

    printf("Para representar o código de sua carta, escolha um número de 01 a 04 : \n");
    scanf(" %c", codigo2);
    
    // Linha de separação para organizar a saída
    printf("==========================================================================================\n");

    // ==============================
    // Exibição dos dados da Carta 2
    // ==============================
    printf("Carta 2 \n" );
    printf("Estado: %c \n", estado2);
    printf("Código: %c%s \n", estado2, codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %d Km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", turismo2);

    return 0;

}