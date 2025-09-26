#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Calculando Densidade Populacional e PIB per Capita
// Objetivo: No nível aventureito.

int main() {
    char letraPrimeiroEstado, letraSegundoEstado;
    char codigoPrimeiroEstado[4], codigoSegundoEstado[4];
    char nomeCidadePrimeiroEstado[50], nomeCidadeSegundoEstado[50];
    unsigned long int populacaoPrimeiroEstado, populacaoSegundoEstado; //Populacão armazenada em unsigned long int.
    float areaPrimeiroEstado, areaSegundoEstado;
    float PIBPrimeiroEstado, PIBSegundoEstado;
    int qtPontoTurismoPrimeiroEstado, qtPontoTurismoSegundoEstado;
    float densidadePopulacionalPrimeiroEstado, densidadePopulacionalSegundoEstado;
    float PIBperCapitaPrimeiroEstado, PIBperCapitaSegundoEstado;
    float superPoderPrimeiroEstado, superPoderSegundoEstado;
    const float BILHAO = 1000000000.0f;

    //Breve explicação para o usuário sobre o jogo.
    printf("Bem-vindo ao Super Trunfo Versão Estados!\n\n");
    printf("Neste jogo, você irá criar duas cartas personalizadas, escolhendo os nomes\n");
    printf("dos estados e preenchendo os valores solicitados, como população,\n");
    printf("área, PIB e outros atributos.\n");
    printf("\n");
    printf("Depois de criar as cartas, o jogo irá comparar os valores de cada uma e\n");
    printf("mostrar qual carta venceu em cada categoria.\n");
    printf("\n");
    printf("Prepare-se para testar sua estratégia e descobrir qual estado será o campeão!\n\n");

    printf("Iniciaremos o cadastro da primeira carta:\n");
    printf("\n");
    printf("Insira uma letra de 'A' a 'H' (representando o estado): ");
    scanf(" %c", &letraPrimeiroEstado);

    printf("Insira o código da carta (ex: A01, B03): ");
    scanf("%3s", codigoPrimeiroEstado);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", nomeCidadePrimeiroEstado);

    printf("Insira o número de habitantes da cidade: ");
    scanf("%lu", &populacaoPrimeiroEstado);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &areaPrimeiroEstado);

    printf("Insira o Produto Interno Bruto da cidade: ");
    scanf("%f", &PIBPrimeiroEstado);

    printf("Insira a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &qtPontoTurismoPrimeiroEstado);

    // Cálculos da primeira carta
    densidadePopulacionalPrimeiroEstado = (float) populacaoPrimeiroEstado / areaPrimeiroEstado;
    // PIB está em bilhões, então multiplicamos por 1 bilhão (1.000.000.000) para obter o valor em reais
    PIBperCapitaPrimeiroEstado = (PIBPrimeiroEstado * BILHAO) / (float) populacaoPrimeiroEstado;
    //Cálculo do SUPER PODER, que nada mais é que a soma de todos os atributos numéricos.
    superPoderPrimeiroEstado = populacaoPrimeiroEstado + areaPrimeiroEstado + PIBPrimeiroEstado + qtPontoTurismoPrimeiroEstado + PIBperCapitaPrimeiroEstado + (1.0f / densidadePopulacionalPrimeiroEstado);
    
    printf("\n");
    printf("Primeira carta registrada com sucesso!\n");

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
    scanf("%lu", &populacaoSegundoEstado);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &areaSegundoEstado);

    printf("Insira o Produto Interno Bruto da cidade: ");
    scanf("%f", &PIBSegundoEstado);

    printf("Insira a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &qtPontoTurismoSegundoEstado);

    // Cálculos da segunda carta 
    densidadePopulacionalSegundoEstado = (float) populacaoSegundoEstado / areaSegundoEstado;
    // PIB está em bilhões, então multiplicamos por 1 bilhão (1.000.000.000) para obter o valor em reais
    PIBperCapitaSegundoEstado = (PIBSegundoEstado * BILHAO) / (float) populacaoSegundoEstado;
    //Cálculo do SUPER PODER, que nada mais é que a soma de todos os atributos numéricos.
    superPoderSegundoEstado = populacaoSegundoEstado + areaSegundoEstado + PIBSegundoEstado + qtPontoTurismoSegundoEstado + PIBperCapitaSegundoEstado + (1.0f / densidadePopulacionalSegundoEstado);
    
    printf("\n");
    printf("Segunda carta registrada com sucesso!\n");

    // Variáveis de comparação (0 ou 1)
    int venceuPopulacao = populacaoPrimeiroEstado > populacaoSegundoEstado;
    int venceuArea = areaPrimeiroEstado > areaSegundoEstado;
    int venceuPIB = PIBPrimeiroEstado > PIBSegundoEstado;
    int venceuTurismo = qtPontoTurismoPrimeiroEstado > qtPontoTurismoSegundoEstado;
    int venceuDensidade = densidadePopulacionalPrimeiroEstado < densidadePopulacionalSegundoEstado; // menor vence
    int venceuPIBperCapita = PIBperCapitaPrimeiroEstado > PIBperCapitaSegundoEstado;
    int venceuSuperPoder = superPoderPrimeiroEstado > superPoderSegundoEstado;

    printf("Comparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", venceuPopulacao ? 1 : 2, venceuPopulacao);
    printf("Área: Carta %d venceu (%d)\n", venceuArea ? 1 : 2, venceuArea);
    printf("PIB: Carta %d venceu (%d)\n", venceuPIB ? 1 : 2, venceuPIB);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", venceuTurismo ? 1 : 2, venceuTurismo);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", venceuDensidade ? 1 : 2, venceuDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", venceuPIBperCapita ? 1 : 2, venceuPIBperCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", venceuSuperPoder ? 1 : 2, venceuSuperPoder);
    printf("\nLegenda: 1 para Verdadeiro, carta 1 venceu e 0 para Falso, carta 2 venceu."); //Uma legenda para o usuário saber qual carta venceu.

    return 0;
} 