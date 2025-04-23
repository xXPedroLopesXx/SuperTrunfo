#include <stdio.h>

int main() {

    //Carta 1

    unsigned long int populacao1;
    int n_pontos_turisticos1, Superpoder1;
    float area1, PIB1, PIB_capita1, densidade_populacional1;
    char estado1[20], cidade1[50], codigo_carta1[5];

    //Carta 2

    unsigned long int populacao2;
    int  n_pontos_turisticos2, Superpoder2;
    float area2, PIB2, PIB_capita2, densidade_populacional2;
    char estado2[20], cidade2[50], codigo_carta2[5];

    //Resultado Batalha

    int ResultadoPopulacao, ResultadoArea, ResultadoPIB, ResultadoPontosTuristicos, ResultadoDensidadePopulacional, ResultadoPIBperCapita, ResultadoSuperpoder;


        //Cadastro Carta 1

    printf("\n---Registro Carta 1:---");

    printf("\nDigite o estado: \n");
    scanf("%s", estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_carta1);

    printf("Digite o Nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Populacao da cidade: \n");
    scanf("%d", &populacao1);

    printf("Area da cidade: \n");
    scanf("%f", &area1);

    printf("PIB da cidade: \n");
    scanf("%f", &PIB1);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &n_pontos_turisticos1);

        //Carta 1

    printf("\n---Carta 1---");

    printf("\nEstado: %s\n", estado1);
    printf("codigo da carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.0f Km2\n", area1);
    printf("PIB: %.0f\n", PIB1);
    printf("Numero de pontos turisticos: %d\n", n_pontos_turisticos1);

    //PIB percapita e Densidade populacional

    PIB_capita1 = PIB1 / populacao1;
    printf("PIB per capita: %.2f\n", PIB_capita1);

    densidade_populacional1 = populacao1 / area1;
    printf("Densidade populacional: %.2f\n", densidade_populacional1);

    //Super Poder Carta 1

    Superpoder1 = (populacao1 + area1 + PIB1 + n_pontos_turisticos1 + PIB_capita1) / densidade_populacional1;
    printf("Super Poder: %d\n", Superpoder1);


        //Cadastro Carta 2

    printf("\n---Registro Carta 2:---");

    printf("\nDigite o estado: \n");
    scanf("%s", estado2);
    
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_carta2);
    
    printf("Digite o Nome da cidade: \n");
    scanf("%s", cidade2);
    
    printf("Populacao da cidade: \n");
    scanf("%d", &populacao2);
    
    printf("Area da cidade: \n");
    scanf("%f", &area2);
    
    printf("PIB da cidade: \n");
    scanf("%f", &PIB2);
    
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &n_pontos_turisticos2);

        //Carta 2

    printf("\n---Carta 2---");

    printf("\nEstado: %s\n", estado2);
    printf("codigo da carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.0f Km2\n", area2);
    printf("PIB: %.0f\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", n_pontos_turisticos2);
    
    //PIB percapita e Densidade populacional

    PIB_capita2 = PIB2 / populacao2;
    printf("PIB per capita: %.2f\n", PIB_capita2);

    densidade_populacional2 = populacao2 / area2;
    printf("Densidade populacional: %.2f\n", densidade_populacional2);

    //Super Poder Carta 2

    Superpoder2 = (populacao2 + area2 + PIB2 + n_pontos_turisticos2 + PIB_capita2) / densidade_populacional2;
    printf("Super Poder: %d\n", Superpoder2);

    //Batalha das Cartas

    printf("\n---Todo resultado 1 o vencedor é a Carta 1 todo resultado 0 o vencedor é a Carta 2---\n");

    ResultadoPopulacao = populacao1 > populacao2;
    printf("A carta vencedora no tema Populacao é: %d\n", ResultadoPopulacao);

    ResultadoArea = area1 > area2;
    printf("A carta vencedora no tema área é: %d\n", ResultadoArea);

    ResultadoPIB = PIB1 > PIB2;
    printf("A carta vencedora no tema PIB é: %d\n", ResultadoPIB);

    ResultadoPontosTuristicos = n_pontos_turisticos1 > n_pontos_turisticos2;
    printf("A carta vencedora no tema pontos turisticos é: %d\n", ResultadoPontosTuristicos);

    ResultadoDensidadePopulacional = densidade_populacional1 < densidade_populacional2;
    printf("A carta vencedora no tema densidade populacional é: %d\n", ResultadoDensidadePopulacional);

    ResultadoPIBperCapita = PIB_capita1 > PIB_capita2;
    printf("A carta vencedora no tema PIB per Capita é: %d\n", ResultadoPIBperCapita);

    ResultadoSuperpoder = Superpoder1 > Superpoder2;
    printf("A carta vencedora no tema Super Poder é: %d\n", ResultadoSuperpoder);

    return 0;
}