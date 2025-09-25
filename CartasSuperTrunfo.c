#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char letraPrimeiroEstado, letraSegundoEstado;
    char codigoPrimeiroEstado[4], codigoSegundoEstado[4];
    char nomeCidadePrimeiroEstado[50], nomeCidadeSegundoEstado[50];
    int populacaoPrimeiroEstado, populacaoSegundoEstado;
    float areaPrimeiroEstado, areaSegundoEstado;
    float PIBPrimeiroEstado, PIBSegundoEstado;
    int qtPontoTurismoPrimeiroEstado, qtPontoTurismoSegundoEstado;

    printf("Iniciaremos o cadastro da primeira carta:\n");
    printf("\n");
    printf("Insira uma letra de 'A' a 'H' (representando o estado): ");
    scanf(" %c", &letraPrimeiroEstado);

    printf("Insira o código da carta (ex: A01, B03): ");
    scanf("%3s", codigoPrimeiroEstado);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", nomeCidadePrimeiroEstado);

    printf("Insira o número de habitantes da cidade: ");
    scanf("%d", &populacaoPrimeiroEstado);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &areaPrimeiroEstado);

    printf("Insira o Produto Interno Bruto da cidade: ");
    scanf("%f", &PIBPrimeiroEstado);

    printf("Insira a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &qtPontoTurismoPrimeiroEstado);

    printf("\n");
    printf("Iniciaremos o cadastro da segunda carta\n");
    printf("\n");
    printf("Insira uma letra de 'A' a 'H' (representando o estado): ");
    scanf(" %c", &letraSegundoEstado);

    printf("Insira o código da carta (ex: A01, B03): ");
    scanf("%3s", codigoSegundoEstado);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", nomeCidadeSegundoEstado);

    printf("Insira o número de habitantes da cidade: ");
    scanf("%d", &populacaoSegundoEstado);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &areaSegundoEstado);

    printf("Insira o Produto Interno Bruto da cidade: ");
    scanf("%f", &PIBSegundoEstado);

    printf("Insira a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &qtPontoTurismoSegundoEstado);

// Impressão dos dados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", letraPrimeiroEstado);
    printf("Código: %s\n", codigoPrimeiroEstado);
    printf("Nome da Cidade: %s\n", nomeCidadePrimeiroEstado);
    printf("População: %d \n", populacaoPrimeiroEstado);
    printf("Área: %.2f km²\n", areaPrimeiroEstado);
    printf("PIB: R$ %.2f bilhões de reais\n", PIBPrimeiroEstado);
    printf("Número de Pontos turísticos: %d\n", qtPontoTurismoPrimeiroEstado);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", letraSegundoEstado);
    printf("Código: %s\n", codigoSegundoEstado);
    printf("Nome da Cidade: %s\n", nomeCidadeSegundoEstado);
    printf("População: %d \n", populacaoSegundoEstado);
    printf("Área: %.2f km²\n", areaSegundoEstado);
    printf("PIB: R$ %.2f bilhões de reais\n", PIBSegundoEstado);
    printf("Número de Pontos turísticos: %d\n", qtPontoTurismoSegundoEstado);

    return 0;
} 
