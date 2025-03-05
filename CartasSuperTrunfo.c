#include <stdio.h>

// Desafio Super Trunfo - Países
typedef  struct {
    char estado[2];
    char codigoDaCarta[5];
    char nomeDaCidade[30];
    int populacao;
    float areaEmKm2;
    float pib;
    int quantidadePontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

//Função cadastrar carta
void cadastrarCarta(Carta *carta) {
    // Cadastro das Cartas:
    printf("Digite o estado: ");
    scanf("%2s", carta->estado);

    printf("Digite o código da carta: ");
    scanf("%4s", carta->codigoDaCarta);

    printf("Digite o nome da cidade: ");
    scanf("%29s", carta->nomeDaCidade);

    printf("População: ");
    scanf("%i", &carta->populacao);

    printf("Área em Km2: ");
    scanf("%f", &carta->areaEmKm2);

    printf("PIB: ");
    scanf("%f", &carta->pib);

    printf("Quantidade pontos turísticos: ");
    scanf("%i", &carta->quantidadePontosTuristicos);

    carta->densidadePopulacional = carta->populacao / carta->areaEmKm2;
    carta->pibPerCapita = carta->pib / carta->populacao;
}

// Função para exibir os dados da Carta
void exibirCarta(const Carta *carta) {
    printf("Estado: %s\n", carta->estado);
    printf("Código da Carta: %s\n", carta->codigoDaCarta);
    printf("Nome da Cidade: %s\n", carta->nomeDaCidade);
    printf("População: %d\n", carta->populacao);
    printf("Área em km²: %.2f\n", carta->areaEmKm2);
    printf("PIB: %.2f\n", carta->pib);
    printf("Quantidade de Pontos Turísticos: %d\n", carta->quantidadePontosTuristicos);
    printf("Densidade Populacional: %.2f\n", carta->densidadePopulacional);
    printf("PIB per Capita: %.2f\n", carta->pibPerCapita);
}

//Comparar cartas
void compararCarta(Carta *carta1, Carta *carta2, int tipoAtributo) {
    float atributo1;
    float atributo2;

    //Escolher atributo
    if(tipoAtributo == 1) {
        //populacao
        printf("Atributo escolhido: POPULAÇÃO\n\n");
        printf("Carta 1 - %s(%s): %d \n", carta1->nomeDaCidade, carta1->estado, carta1->populacao);
        printf("Carta 2 - %s(%s): %d \n", carta2->nomeDaCidade, carta2->estado, carta2->populacao);
        if (carta1->populacao > carta2->populacao) {
            printf("CARTA 1 VENCEU!");
        } else if (carta1->populacao < carta2->populacao) {
            printf("CARTA 2 VENCEU!");
        } else {
            printf("EMPATE!");
        }
    } else if (tipoAtributo == 2) {
        //area
        printf("Atributo escolhido: ÁREA\n\n");
        printf("Carta 1 - %s(%s): %.2f \n", carta1->nomeDaCidade, carta1->estado, carta1->areaEmKm2);
        printf("Carta 2 - %s(%s): %.2f \n", carta2->nomeDaCidade, carta2->estado, carta2->areaEmKm2);
        if (carta1->areaEmKm2 > carta2->areaEmKm2) {
            printf("CARTA 1 VENCEU!");
        } else if (carta1->areaEmKm2 < carta2->areaEmKm2) {
            printf("CARTA 2 VENCEU!");
        } else {
            printf("EMPATE!");
        }
    } else if (tipoAtributo == 3) {
        //PIB
        printf("Atributo escolhido: PIB\n\n");
        printf("Carta 1 - %s(%s): %.2f \n", carta1->nomeDaCidade, carta1->estado, carta1->pib);
        printf("Carta 2 - %s(%s): %.2f \n", carta2->nomeDaCidade, carta2->estado, carta2->pib);
        if (carta1->pib > carta2->pib) {
            printf("CARTA 1 VENCEU!");
        } else if (carta1->pib < carta2->pib) {
            printf("CARTA 2 VENCEU!");
        } else {
            printf("EMPATE!");
        }
    } else if (tipoAtributo == 4) {
        //densidade populacional
        printf("Atributo escolhido: DENSIDADE POPULACIONAL\n\n");
        printf("Carta 1 - %s(%s): %.2f \n", carta1->nomeDaCidade, carta1->estado, carta1->densidadePopulacional);
        printf("Carta 2 - %s(%s): %.2f \n", carta2->nomeDaCidade, carta2->estado, carta2->densidadePopulacional);
        if (carta1->densidadePopulacional < carta2->densidadePopulacional) {
            printf("CARTA 1 VENCEU!");
        } else if (carta1->densidadePopulacional > carta2->densidadePopulacional) {
            printf("CARTA 2 VENCEU!");
        } else {
            printf("EMPATE!");
        }
    } else if (tipoAtributo == 5) {
        //PIB per capita
        printf("Atributo escolhido: PIB PER CAPITA\n\n");
        printf("Carta 1 - %s(%s): %.2f \n", carta1->nomeDaCidade, carta1->estado, carta1->pibPerCapita);
        printf("Carta 2 - %s(%s): %.2f \n", carta2->nomeDaCidade, carta2->estado, carta2->pibPerCapita);
        if (carta1->pibPerCapita < carta2->pibPerCapita) {
            printf("CARTA 1 VENCEU!");
        } else if (carta1->densidadePopulacional > carta2->pibPerCapita) {
            printf("CARTA 2 VENCEU!");
        } else {
            printf("EMPATE!");
        }
    } else {
        printf("Atributo inválido!");
    }
}

int main() {
    Carta carta1;
    Carta carta2;

    printf("\nDigite os dados da primeira carta! \n");
    cadastrarCarta(&carta1);

    printf("\nDigite os dados da segunda carta! \n");
    cadastrarCarta(&carta2);

    printf("\n\nComparando Cartas!\n");
    compararCarta(&carta1, &carta2, 1);
    return 0;
}
