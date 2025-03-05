#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    char estado;
    char codigoDaCarta[5];
    char nomeDaCidade[30];
    int populacao;
    float areaEmKm2;
    float pib;
    int quantidadePontosTuristicos;

    printf("Digite o estado: ");
    scanf("%c", &estado);

    printf("Digite o código da carta: ");
    scanf("%4s", codigoDaCarta);

    printf("Digite o nome da cidade: ");
    scanf("%29s", &nomeDaCidade);

    printf("População: ");
    scanf("%i", &populacao);

    printf("Área em Km2: ");
    scanf("%f", &areaEmKm2);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Quantidade pontos turísticos: ");
    scanf("%i", &quantidadePontosTuristicos);


    printf("\nEstado: %c\n", estado);
    printf("Código da Carta: %s\n", codigoDaCarta);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área em Km2: %.2f\n", areaEmKm2);
    printf("PIB: %.2f\n", pib);
    printf("Quantidade de Pontos Turísticos: %d\n", quantidadePontosTuristicos);

    return 0;
}
