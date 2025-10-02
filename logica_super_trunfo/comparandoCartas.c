#include <stdio.h>
#include <string.h>

int main() {
    char sigla1[5], sigla2[5], cidade1[30], cidade2[30], codigo[5];
    int populacao1, populacao2, pontosTuristicos;
    float area1, area2, pib1, pib2, densidade1, pibPerCapta1, densidade2, pibPerCapta2;
    

    printf("Jogo de Cartas Super Trunfo!! \n\n");
    printf("Este jogo será baseado em cidades, você irá preencher as informações das cidade conforme é solicitado \n\n");
    

    //printf("Carta 1\n");
    printf("Estado: ");
    fgets(sigla1, sizeof(sigla1), stdin);
    sigla1[strcspn(sigla1, "\n")] = 0;

    /* Foi preciso utilizar getchar e limpar o /n, pois estava dando conflito entre fgets e o scanf.
    haviam campos que estavam sendo ignorados */

    printf("Código: ");    
    fgets(codigo, sizeof(codigo), stdin);
    codigo[strcspn(codigo, "\n")] = 0;

    printf("Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacao1);
    getchar();

    printf("Área: ");
    scanf("%f", &area1);
    getchar();

    printf("PIB: ");
    scanf("%f", &pib1);
    getchar();

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);
    getchar();

    densidade1 = populacao1 / area1;     //implementação do desafio
    pibPerCapta1 =  pib1 / populacao1;

       //população deve ser armazenada como unsigned long int 
    populacao1 = (unsigned long int)populacao1;
    populacao2 = (unsigned long int)populacao2;


    printf("\n\n\nPrimeira Carta\n"
        "Estado: %s\n"
        "Código: %s\n"
        "Cidade: %s\n"
        "População: %d\n"
        "Área: %.2fkm²\n"
        "PIB: %.2f\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidade Populacional: %.2f hab/km²\n"
        "PIB per Capita: %.2f reais"
        , sigla1, codigo, cidade1, populacao1, area1, pib1, pontosTuristicos, densidade1, pibPerCapta1);




    //printf("\n\nCarta 2\n");
    printf("\n\n\n\nEstado: ");
    fgets(sigla2, sizeof(sigla2), stdin);
    sigla2[strcspn(sigla2, "\n")] = 0;

    printf("Código: ");    
    fgets(codigo, sizeof(codigo), stdin);
    codigo[strcspn(codigo, "\n")] = 0;

    printf("Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacao2);
    getchar();

    printf("Área: ");
    scanf("%f", &area2);
    getchar();

    printf("PIB: ");
    scanf("%f", &pib2);
    getchar();

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);
    getchar();


    printf("\n\n\n\nSegunda Carta\n"
        "Estado: %s\n"
        "Código: %s\n"
        "Cidade: %s\n"
        "População: %d\n"
        "Área: %.2fkm²\n"
        "PIB: %.2f\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidade Populacional: %.2f hab/km²\n"
        "PIB per Capita: %.2f reais\n\n"
        , sigla2, codigo, cidade2, populacao2, area2, pib2, pontosTuristicos, densidade2, pibPerCapta2);


    //Implementação do desafio de comparação
    printf("Comparação de cartas (Atributo: PIB):\n"
           "Carta 1 - %s (%s): %.2f\n"
           "Carta 2 - %s (%s): %.2f\n",
            cidade1, sigla1, pib1,
            cidade2, sigla2, pib2
        );
    
    if(pib1 > pib2) { //estrutura de decisão para fazer comparação do valor do pib das duas cartas e imprimir de acordo com o resultado
        printf("Resultado: Carta 1 (%s) Venceu", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) Venceu", cidade2);
    };

    return 0;    
}
