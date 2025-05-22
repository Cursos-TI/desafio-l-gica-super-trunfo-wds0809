#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Declaração das variáveis para armazenar os dados das cartas
    char estadoC1;
    char estadoC2;
    char codCartaC1[10];
    char codCartaC2[10]; // Código das cartas (ex: 01, 02, etc.)
    char nomeC1[50]; // Nome da cidade C1
    char nomeC2[50]; // Nome da cidade C2
    int populacaoC1, nPontosC1, populacaoC2, nPontosC2; // Valores inteiros das cidades
    float areaC1, pibC1, areaC2, pibC2; // Valores decimais: área e PIB
    float densidadeC1, densidadeC2;
    float pibPerCapitaC1, pibPerCapitaC2;
    float superPoderC1, superPoderC2;
     
    printf ("Digite uma letra de A a H para representação de um estado para Carta 1: \n");
    scanf (" %c", &estadoC1); // O espaço antes do %c evita problemas com \n no buffer

    printf ("Digite o código da carta de 01 a 04: \n");
    scanf ("%s", codCartaC1);
    
    printf ("Digite o nome da cidade: \n");
    scanf ("%s", nomeC1);

    printf ("Digite o número de habitantes da cidade: \n");
    scanf ("%d", &populacaoC1);

    printf ("Digite a área total da cidade: \n");
    scanf ("%f", &areaC1);

    // Densidade Populacional Carta 1
    densidadeC1 = populacaoC1 / areaC1;
    
    printf ("Digite o PIB da cidade: \n");
    scanf ("%f", &pibC1);

    // Pib per Capita Carta 1
    pibPerCapitaC1 = (pibC1 * 1000000000) / populacaoC1; //Para usar PIB em bilhões e calcular corretamente, multiplique por 1.000.000.000 no cálculo
    
    printf ("Digite quantos pontos turísticos existe na cidade: \n");
    scanf ("%d", &nPontosC1);

    // Super poder
    superPoderC1 = populacaoC1 + areaC1 + pibC1 + (1 / pibPerCapitaC1) + nPontosC1;

    printf ("Digite uma letra de A a H para representação de um estado para Carta 2: \n");
    scanf (" %c", &estadoC2); // O espaço antes do %c evita problemas com \n no buffer

    printf ("Digite o código da carta de 01 a 04: \n");
    scanf ("%s", codCartaC2);
    
    printf ("Digite o nome da cidade: \n");
    scanf ("%s", nomeC2);

    printf ("Digite o número de habitantes da cidade: \n");
    scanf ("%d", &populacaoC2);

    printf ("Digite a área total da cidade: \n");
    scanf ("%f", &areaC2);

    // Densidade Populacional Carta 1
    densidadeC2 = populacaoC2 / areaC2;

    printf ("Digite o PIB da cidade: \n");
    scanf ("%f", &pibC2);

    // Pib per Capita Carta 2
    pibPerCapitaC2 = (pibC2 * 1000000000) / populacaoC2; //Para usar PIB em bilhões e calcular corretamente, multiplique por 1.000.000.000 no cálculo

    printf ("Digite quantos pontos turísticos existe na cidade: \n");
    scanf ("%d", &nPontosC2);

    int comparacao1, comparacao2;
    int resultado1, resultado2;

    srand(time(0));

    printf("\n*** SUPER TRUNFO ***\n");
    printf("Bem-vindo ao jogo!\n");
    printf("Escolha uma opção para Comparação 01:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos Turísticos\n");
    printf("5. Densidade Geográfica\n");

    printf("Escolha a Primeira Comparação: ");
    scanf("%d", &comparacao1);
    
    printf("\n*** SUPER TRUNFO ***\n");
    printf("Escolha uma opção para comparação 02:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos Turísticos\n");
    printf("5. Densidade Geográfica\n");

    printf("Escolha a Segunda Comparação: ");
    scanf("%d", &comparacao2);

    if (comparacao1 == comparacao2)
    {
        printf("Você escolheu o mesmo atributo!");
    } else {

        switch (comparacao1)
        {
            case 1:
                printf("\n--- COMPARAÇÃO DE CARTAS 01 ---\n");
                printf("Comparação de cartas(Atributos: População):\n");
                printf("Carta 1 - %s: %d habitantes\n", nomeC1, populacaoC1);
                printf("Carta 2 - %s: %d habitantes\n", nomeC2, populacaoC2);

                resultado1 = populacaoC1 > populacaoC2 ? 1 : 0;
      
            break;
                
            case 2:
                printf("\n--- COMPARAÇÃO DE CARTAS 01 ---\n");
                printf("Comparação de cartas(Atributos: Área):\n");
                printf("Carta 1 - %s: %.2f km²\n", nomeC1, areaC1);
                printf("Carta 2 - %s: %.2f km²\n", nomeC2, areaC2);

                resultado1 = areaC1 > areaC2 ? 1 : 0;
        
            break;
                
            case 3:
                printf("\n--- COMPARAÇÃO DE CARTAS 01 ---\n");
                printf("Comparação de cartas(Atributos: PIB):\n");
                printf("Carta 1 - %s: %.2f bilhões de reais\n", nomeC1, pibC1);
                printf("Carta 2 - %s: %.2f bilhões de reais\n", nomeC2, pibC2);

                resultado1 = pibC1 > pibC2 ? 1 : 0;
             
            break;
                
            case 4:
                printf("\n--- COMPARAÇÃO DE CARTAS 01 ---\n");
                printf("Comparação de cartas(Atributos: Pontos turísticos):\n");
                printf("Carta 1 - %s: %d\n", nomeC1, nPontosC1);
                printf("Carta 2 - %s: %d\n", nomeC2, nPontosC2);

                resultado1 = nPontosC1 > nPontosC2 ? 1 : 0;
        
            break;

            case 5:
                printf("\n--- COMPARAÇÃO DE CARTAS 01 ---\n");
                printf("Comparação de cartas(Atributos: Densidade):\n");
                printf("Carta 1 - %s: %.2f hab/km²\n", nomeC1, densidadeC1);
                printf("Carta 2 - %s: %.2f hab/km²\n", nomeC2, densidadeC2);

                resultado1 = densidadeC1 < densidadeC2 ? 1 : 0;
            
            break;

            default:
                printf("Opção inválida\n");

            break;
        }

        switch (comparacao2)
        {
            case 1:
                printf("\n--- COMPARAÇÃO DE CARTAS 02 ---\n");
                printf("Comparação de cartas(Atributos: População):\n");
                printf("Carta 1 - %s: %d habitantes\n", nomeC1, populacaoC1);
                printf("Carta 2 - %s: %d habitantes\n", nomeC2, populacaoC2);

                resultado2 = populacaoC1 > populacaoC2 ? 1 : 0;
             
            break;
            
            case 2:
                printf("\n--- COMPARAÇÃO DE CARTAS 02 ---\n");
                printf("Comparação de cartas(Atributos: Área):\n");
                printf("Carta 1 - %s: %.2f km²\n", nomeC1, areaC1);
                printf("Carta 2 - %s: %.2f km²\n", nomeC2, areaC2);

                resultado2 = areaC1 > areaC2 ? 1 : 0;
        
            break;
                
            case 3:
                printf("\n--- COMPARAÇÃO DE CARTAS 02 ---\n");
                printf("Comparação de cartas(Atributos: PIB):\n");
                printf("Carta 1 - %s: %.2f bilhões de reais\n", nomeC1, pibC1);
                printf("Carta 2 - %s: %.2f bilhões de reais\n", nomeC2, pibC2);

                resultado2 = pibC1 > pibC2 ? 1 : 0;
          
            break;
                
            case 4:
                printf("\n--- COMPARAÇÃO DE CARTAS 02 ---\n");
                printf("Comparação de cartas(Atributos: Pontos turísticos):\n");
                printf("Carta 1 - %s: %d\n", nomeC1, nPontosC1);
                printf("Carta 2 - %s: %d\n", nomeC2, nPontosC2);

                resultado2 = nPontosC1 > nPontosC2 ? 1 : 0;
          
            break;

            case 5:
                printf("\n--- COMPARAÇÃO DE CARTAS 02 ---\n");
                printf("Comparação de cartas(Atributos: Densidade):\n");
                printf("Carta 1 - %s: %.2f hab/km²\n", nomeC1, densidadeC1);
                printf("Carta 2 - %s: %.2f hab/km²\n", nomeC2, densidadeC2);

                resultado2 = densidadeC1 < densidadeC2 ? 1 : 0;
           
            break;

            default:
                printf("Opção inválida\n");

            break;
        }

        // RESULTADO

        if (resultado1 && resultado2){
            printf("\n ===== Carta 1 Venceu! =====\n");
            
        } else if (resultado1 != resultado2){
            printf("\n ===== Empatou! =====\n");

        } else {
            printf("\n ===== Carta 2 Venceu! =====\n");
        }
    }
    
    return 0;
}
