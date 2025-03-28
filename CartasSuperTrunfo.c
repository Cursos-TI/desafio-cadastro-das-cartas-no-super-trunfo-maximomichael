#include <stdio.h>

// Desafio Super Trunfo
typedef  struct {
    char estado[3];
    char codigoDaCarta[5];
    char nomeDaCidade[30];
    long populacao;
    float areaEmKm2;
    float pib;
    long quantidadePontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
} Carta;

//Função cadastrar nova carta.
void cadastrarCarta(Carta *carta) {
    // Cadastro das Cartas:
    printf("Digite o estado: ");
    scanf("%2s", carta->estado);

    printf("Digite o código da carta: ");
    scanf("%4s", carta->codigoDaCarta);

    printf("Digite o nome da cidade: ");
    scanf("%29s",carta->nomeDaCidade);

    printf("População: ");
    scanf("%i", &carta->populacao);

    printf("Área em Km²: ");
    scanf("%f", &carta->areaEmKm2);

    printf("PIB: ");
    scanf("%f", &carta->pib);

    printf("Quantidade pontos turísticos: ");
    scanf("%i", &carta->quantidadePontosTuristicos);

    //Calcular densidade Polulacional
    carta->densidadePopulacional = carta->populacao / carta->areaEmKm2;
    //Calcular PIB per Capita
    carta->pibPerCapita = carta->pib / carta->populacao;
    //Somar Carta super poder
    carta->superPoder = carta->populacao + carta->areaEmKm2 + carta->pib + carta->quantidadePontosTuristicos + carta->pibPerCapita;
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
    printf("Densidade Populacional: %.2f hab/km²\n", carta->densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta->pibPerCapita);
}

//Comparação de cartas usando IFs
void compararCartas(Carta *carta1, Carta *carta2) {

    printf("Comparação de Cartas:\n");
    printf("População: ");
    if (carta1->populacao > carta2->populacao) {
        printf("Carta 1 venceu (1)");
    } else {
        printf("Carta 2 venceu (0)");
    }

    printf("\nÁrea: ");
    if (carta1->areaEmKm2 > carta2->areaEmKm2) {
        printf("Carta 1 venceu (1)");
    } else {
        printf("Carta 2 venceu (0)");
    }

    printf("\nPIB: ");
    if (carta1->pib > carta2->pib) {
        printf("Carta 1 venceu (1)");
    } else {
        printf("Carta 2 venceu (0)");
    }

    printf("\nPontos Turísticos: ");
    if (carta1->quantidadePontosTuristicos > carta2->quantidadePontosTuristicos) {
        printf("Carta 1 venceu (1)");
    } else {
        printf("Carta 2 venceu (0)");
    }

    printf("\nDensidade Populacional: ");
    //Em densidade populacional o menor vence
    if (carta1->densidadePopulacional < carta2->densidadePopulacional) { 
        printf("Carta 1 venceu (1)");
    } else {
        printf("Carta 2 venceu (0)");
    }

    printf("\nPIB per Capita: ");
    if (carta1->pibPerCapita > carta2->pibPerCapita) {
        printf("Carta 1 venceu (1)");
    } else {
        printf("Carta 2 venceu (0)");
    }

    printf("\nSuper Poder: ");
    if (carta1->superPoder > carta2->superPoder) {
        printf("Carta 1 venceu (1)");
    } else {
        printf("Carta 2 venceu (0)");
    }
	printf("\n");
} 

int main() {
    Carta carta1;
    Carta carta2;

    printf("\nDigite os dados da primeira carta! \n");
    cadastrarCarta(&carta1);

    printf("\nDigite os dados da segunda carta! \n");
    cadastrarCarta(&carta2);

    //Imprimir cartas
    printf("\n\n\nCARTAS\n\n");
    exibirCarta(&carta1);
    printf("\n\n");
    exibirCarta(&carta2);
    printf("\n\n");

    compararCartas(&carta1, &carta2);
    return 0;
}
