#include <stdio.h>

// Comparando Cartas do Super Trunfo.
// Desafio: nível mestre.
// Implementação da lógica para comparar duas cartas cadastradas e determinar a vencedora com base em um atributo numérico usando estruturas de decisão.

// Função genérica para comparar qualquer atributo numérico
void compararAtributo(float atributoPrimeiroEstado, float atributoSegundoEstado,
                      char nomeCidadePrimeiroEstado[], char nomeCidadeSegundoEstado[],
                      char atributo[])
{
    printf("COMPARANDO: %s \n", atributo);
    printf("Carta 1: cidade %s → valor %.2f\n", nomeCidadePrimeiroEstado, atributoPrimeiroEstado);
    printf("Carta 2: cidade %s → valor %.2f\n", nomeCidadeSegundoEstado, atributoSegundoEstado);
    printf("-------------------------------------------------------\n");

    if (atributoPrimeiroEstado > atributoSegundoEstado)
    {
        printf("🏆 Carta 1 (%s) venceu na categoria: %s!\n",
               nomeCidadePrimeiroEstado, atributo);
    }
    else if (atributoPrimeiroEstado < atributoSegundoEstado)
    {
        printf("🏆 Carta 2 (%s) venceu na categoria %s!\n",
               nomeCidadeSegundoEstado, atributo);
    }
    else
    {
        printf("🤝 Empate! Mesmo valor no atributo %s!\n", atributo);
    }
}

int main()
{
    char letraPrimeiroEstado, letraSegundoEstado;
    char codigoPrimeiroEstado[4], codigoSegundoEstado[4];
    char nomeCidadePrimeiroEstado[50], nomeCidadeSegundoEstado[50];
    unsigned long int populacaoPrimeiroEstado, populacaoSegundoEstado; // Populacão armazenada em unsigned long int.
    float areaPrimeiroEstado, areaSegundoEstado;
    float PIBPrimeiroEstado, PIBSegundoEstado;
    int qtPontoTurismoPrimeiroEstado, qtPontoTurismoSegundoEstado;
    float densidadePopulacionalPrimeiroEstado, densidadePopulacionalSegundoEstado;
    float PIBperCapitaPrimeiroEstado, PIBperCapitaSegundoEstado;
    float superPoderPrimeiroEstado, superPoderSegundoEstado;
    const float BILHAO = 1000000000.0f;

    // Breve explicação para o usuário sobre o jogo.
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
    densidadePopulacionalPrimeiroEstado = (float)populacaoPrimeiroEstado / areaPrimeiroEstado;
    // PIB está em bilhões, então multiplicamos por 1 bilhão (1.000.000.000) para obter o valor em reais
    PIBperCapitaPrimeiroEstado = (PIBPrimeiroEstado * BILHAO) / (float)populacaoPrimeiroEstado;
    // Cálculo do SUPER PODER, que nada mais é que a soma de todos os atributos numéricos.
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
    densidadePopulacionalSegundoEstado = (float)populacaoSegundoEstado / areaSegundoEstado;
    // PIB está em bilhões, então multiplicamos por 1 bilhão (1.000.000.000) para obter o valor em reais
    PIBperCapitaSegundoEstado = (PIBSegundoEstado * BILHAO) / (float)populacaoSegundoEstado;
    // Cálculo do SUPER PODER, que nada mais é que a soma de todos os atributos numéricos.
    superPoderSegundoEstado = populacaoSegundoEstado + areaSegundoEstado + PIBSegundoEstado + qtPontoTurismoSegundoEstado + PIBperCapitaSegundoEstado + (1.0f / densidadePopulacionalSegundoEstado);

    printf("\n");
    printf("Segunda carta registrada com sucesso!\n");
    printf("\n");

    // =====================================================================
    // Variáveis de comparação (0 ou 1)
    int venceuPopulacao = populacaoPrimeiroEstado > populacaoSegundoEstado;
    int venceuArea = areaPrimeiroEstado > areaSegundoEstado;
    int venceuPIB = PIBPrimeiroEstado > PIBSegundoEstado;
    int venceuTurismo = qtPontoTurismoPrimeiroEstado > qtPontoTurismoSegundoEstado;
    int venceuDensidade = densidadePopulacionalPrimeiroEstado < densidadePopulacionalSegundoEstado; // menor vence
    int venceuPIBperCapita = PIBperCapitaPrimeiroEstado > PIBperCapitaSegundoEstado;
    int venceuSuperPoder = superPoderPrimeiroEstado > superPoderSegundoEstado;

    printf("Comparação de Cartas parte 1:\n");
    printf("População: Carta %d venceu (%d)\n", venceuPopulacao ? 1 : 2, venceuPopulacao);
    printf("Área: Carta %d venceu (%d)\n", venceuArea ? 1 : 2, venceuArea);
    printf("PIB: Carta %d venceu (%d)\n", venceuPIB ? 1 : 2, venceuPIB);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", venceuTurismo ? 1 : 2, venceuTurismo);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", venceuDensidade ? 1 : 2, venceuDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", venceuPIBperCapita ? 1 : 2, venceuPIBperCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", venceuSuperPoder ? 1 : 2, venceuSuperPoder);
    printf("Legenda: 1 para Verdadeiro, carta 1 venceu e 0 para Falso, carta 2 venceu.\n"); // Uma legenda para o usuário saber qual carta venceu.

    // =====================================================================
    // Início das alterações do Super Trunfo em c: Desenvolvendo a Lógica do Jogo
    printf("\n ******** COMPARAÇÃO DE CARTAS SUPER_TRUNFO.C parte 2 ******** \n");

    // -------------------------------------------------------
    // Comparação baseada:
    // -------------------------------------------------------
    // Aqui, comparamos o valor do PIB das duas cartas.
    // A carta que tiver o maior PIB será considerada a vencedora nesta categoria.
    int opcao1, opcao2;
    float somaAtributoPrimeiroEstado = 0.0f, somaAtributoSegundoEstado = 0.0f;

    // Menu de comparação
    printf("===== MENU PRINCIPAL =====\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha uma opção para comparar (1-7): ");
    scanf("%d", &opcao1);

    // Segundo menu - escolha do segundo atributo (dinâmico)
    do
    {
        printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
        for (int i = 1; i <= 7; i++)
        {
            if (i == opcao1)
                continue; // Esconde o atributo já escolhido
            switch (i)
            {
            case 1:
                printf("%d. População\n", i);
                break;
            case 2:
                printf("%d. Área\n", i);
                break;
            case 3:
                printf("%d. PIB\n", i);
                break;
            case 4:
                printf("%d. Pontos Turísticos\n", i);
                break;
            case 5:
                printf("%d. Densidade Populacional\n", i);
                break;
            case 6:
                printf("%d. PIB per Capita\n", i);
                break;
            case 7:
                printf("%d. Super Poder\n", i);
                break;
            }
        }
        printf("Opção: ");
        scanf("%d", &opcao2);

        if (opcao1 == opcao2)
            printf("⚠️ Você não pode escolher o mesmo atributo duas vezes!\n");
    } while (opcao1 == opcao2);

    printf("\n===== RESULTADO =====\n");
    // PRIMEIRO ATRIBUTO
    switch (opcao1)
    {
    case 1:
        // Usando a função genérica para comparar qualquer atributo
        somaAtributoPrimeiroEstado = somaAtributoPrimeiroEstado + populacaoPrimeiroEstado;
        somaAtributoSegundoEstado = somaAtributoSegundoEstado + populacaoSegundoEstado;
        compararAtributo(populacaoPrimeiroEstado, populacaoSegundoEstado,
                         nomeCidadePrimeiroEstado, nomeCidadeSegundoEstado,
                         "População");
        break;

    case 2:
        somaAtributoPrimeiroEstado = somaAtributoPrimeiroEstado + areaPrimeiroEstado;
        somaAtributoSegundoEstado = somaAtributoSegundoEstado + areaSegundoEstado;
        compararAtributo(areaPrimeiroEstado, areaSegundoEstado,
                         nomeCidadePrimeiroEstado, nomeCidadeSegundoEstado,
                         "Área");
        break;

    case 3:
        somaAtributoPrimeiroEstado = somaAtributoPrimeiroEstado + PIBPrimeiroEstado;
        somaAtributoSegundoEstado = somaAtributoSegundoEstado + PIBSegundoEstado;
        compararAtributo(PIBPrimeiroEstado, PIBSegundoEstado,
                         nomeCidadePrimeiroEstado, nomeCidadeSegundoEstado,
                         "PIB");
        break;

    case 4:
        somaAtributoPrimeiroEstado = somaAtributoPrimeiroEstado + qtPontoTurismoPrimeiroEstado;
        somaAtributoSegundoEstado = somaAtributoSegundoEstado + qtPontoTurismoSegundoEstado;
        compararAtributo(qtPontoTurismoPrimeiroEstado, qtPontoTurismoSegundoEstado,
                         nomeCidadePrimeiroEstado, nomeCidadeSegundoEstado,
                         "Pontos Turísticos");
        break;

    case 5:
        somaAtributoPrimeiroEstado = somaAtributoPrimeiroEstado + densidadePopulacionalPrimeiroEstado;
        somaAtributoSegundoEstado = somaAtributoSegundoEstado + densidadePopulacionalSegundoEstado;
        // Aqui é o caso ESPECIAL — menor densidade vence
        printf("COMPARANDO: densidade populacional. \n");
        printf("Carta 1: cidade %s → valor %.2f\n", nomeCidadePrimeiroEstado, densidadePopulacionalPrimeiroEstado);
        printf("Carta 2: cidade %s → valor %.2f\n", nomeCidadeSegundoEstado, densidadePopulacionalSegundoEstado);
        printf("-------------------------------------------------------\n");
        if (densidadePopulacionalPrimeiroEstado < densidadePopulacionalSegundoEstado)
        {
            printf("🏆 %s venceu (menor densidade = melhor qualidade de vida!)\n",
                   nomeCidadePrimeiroEstado);
        }
        else if (densidadePopulacionalPrimeiroEstado > densidadePopulacionalSegundoEstado)
        {
            printf("🏆 %s venceu (menor densidade = melhor qualidade de vida!)\n",
                   nomeCidadeSegundoEstado);
        }
        else
        {
            printf("🤝 Empate! Mesma densidade populacional.\n");
        }
        break;

    case 6:
        somaAtributoPrimeiroEstado = somaAtributoPrimeiroEstado + PIBperCapitaPrimeiroEstado;
        somaAtributoSegundoEstado = somaAtributoSegundoEstado + PIBperCapitaSegundoEstado;
        compararAtributo(PIBperCapitaPrimeiroEstado, PIBperCapitaSegundoEstado,
                         nomeCidadePrimeiroEstado, nomeCidadeSegundoEstado,
                         "PIB per Capita");
        break;

    case 7:
        somaAtributoPrimeiroEstado = somaAtributoPrimeiroEstado + superPoderPrimeiroEstado;
        somaAtributoSegundoEstado = somaAtributoSegundoEstado + superPoderSegundoEstado;
        compararAtributo(superPoderPrimeiroEstado, superPoderSegundoEstado,
                         nomeCidadePrimeiroEstado, nomeCidadeSegundoEstado,
                         "Super Poder");
        break;

    default:
        printf("⚠️ Opção inválida! Escolha um número de 1 a 7.\n");
    }

    printf("\n=========================================\n");

    // SEGUNDO ATRIBUTO
    switch (opcao2)
    {
    case 1:
        // Usando a função genérica para comparar qualquer atributo
        somaAtributoPrimeiroEstado = somaAtributoPrimeiroEstado + populacaoPrimeiroEstado;
        somaAtributoSegundoEstado = somaAtributoSegundoEstado + populacaoSegundoEstado;
        compararAtributo(populacaoPrimeiroEstado, populacaoSegundoEstado,
                         nomeCidadePrimeiroEstado, nomeCidadeSegundoEstado,
                         "População");
        break;

    case 2:
        somaAtributoPrimeiroEstado = somaAtributoPrimeiroEstado + areaPrimeiroEstado;
        somaAtributoSegundoEstado = somaAtributoSegundoEstado + areaSegundoEstado;
        compararAtributo(areaPrimeiroEstado, areaSegundoEstado,
                         nomeCidadePrimeiroEstado, nomeCidadeSegundoEstado,
                         "Área");
        break;

    case 3:
        somaAtributoPrimeiroEstado = somaAtributoPrimeiroEstado + PIBPrimeiroEstado;
        somaAtributoSegundoEstado = somaAtributoSegundoEstado + PIBSegundoEstado;
        compararAtributo(PIBPrimeiroEstado, PIBSegundoEstado,
                         nomeCidadePrimeiroEstado, nomeCidadeSegundoEstado,
                         "PIB");
        break;

    case 4:
        somaAtributoPrimeiroEstado = somaAtributoPrimeiroEstado + qtPontoTurismoPrimeiroEstado;
        somaAtributoSegundoEstado = somaAtributoSegundoEstado + qtPontoTurismoSegundoEstado;
        compararAtributo(qtPontoTurismoPrimeiroEstado, qtPontoTurismoSegundoEstado,
                         nomeCidadePrimeiroEstado, nomeCidadeSegundoEstado,
                         "Pontos Turísticos");
        break;

    case 5:
        somaAtributoPrimeiroEstado = somaAtributoPrimeiroEstado + densidadePopulacionalPrimeiroEstado;
        somaAtributoSegundoEstado = somaAtributoSegundoEstado + densidadePopulacionalSegundoEstado;
        // Aqui é o caso ESPECIAL — menor densidade vence
        printf("COMPARANDO: densidade populacional. \n");
        printf("Carta 1: cidade %s → valor %.2f\n", nomeCidadePrimeiroEstado, densidadePopulacionalPrimeiroEstado);
        printf("Carta 2: cidade %s → valor %.2f\n", nomeCidadeSegundoEstado, densidadePopulacionalSegundoEstado);
        printf("-------------------------------------------------------\n");
        if (densidadePopulacionalPrimeiroEstado < densidadePopulacionalSegundoEstado)
        {
            printf("🏆 %s venceu (menor densidade = melhor qualidade de vida!)\n",
                   nomeCidadePrimeiroEstado);
        }
        else if (densidadePopulacionalPrimeiroEstado > densidadePopulacionalSegundoEstado)
        {
            printf("🏆 %s venceu (menor densidade = melhor qualidade de vida!)\n",
                   nomeCidadeSegundoEstado);
        }
        else
        {
            printf("🤝 Empate! Mesma densidade populacional.\n");
        }
        break;

    case 6:
        somaAtributoPrimeiroEstado = somaAtributoPrimeiroEstado + PIBperCapitaPrimeiroEstado;
        somaAtributoSegundoEstado = somaAtributoSegundoEstado + PIBperCapitaSegundoEstado;
        compararAtributo(PIBperCapitaPrimeiroEstado, PIBperCapitaSegundoEstado,
                         nomeCidadePrimeiroEstado, nomeCidadeSegundoEstado,
                         "PIB per Capita");
        break;

    case 7:
        somaAtributoPrimeiroEstado = somaAtributoPrimeiroEstado + superPoderPrimeiroEstado;
        somaAtributoSegundoEstado = somaAtributoSegundoEstado + superPoderSegundoEstado;
        compararAtributo(superPoderPrimeiroEstado, superPoderSegundoEstado,
                         nomeCidadePrimeiroEstado, nomeCidadeSegundoEstado,
                         "Super Poder");
        break;

    default:
        printf("⚠️ Opção inválida! Escolha um número de 1 a 7.\n");
    }

    printf("\n=========================================\n");

    // A soma dos atributos para cada carta.
    printf("A soma dos atributos para cada carta \n");
    compararAtributo(somaAtributoPrimeiroEstado, somaAtributoSegundoEstado, nomeCidadePrimeiroEstado, nomeCidadeSegundoEstado, "soma dos atributos escolhidos");
    printf("-------------------------------------------------------\n");
    printf("\nFim da partida!\n");
    return 0;
}