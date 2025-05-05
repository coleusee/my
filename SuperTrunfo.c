#include <stdio.h>

int main(){

    printf("Desafio Super Trunfo \n");
    // Carta 1 
    char estado1[100];
    char codigo1[5];
    char nome1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade_populacional1, pib_per_capita1, superpoder1;

    // Carta 2
    char estado2[100];
    char codigo2[5];
    char nome2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib_per_capita2, superpoder2;

    // entrada e saida de dados Carta 1
    printf("Carta 1: \n");

    printf("Estado (A-H): \n");
    scanf("%s", estado1);
    printf("Codigo da Carta (A1): \n");
    scanf("%s", codigo1);
    printf("Nome da Cidade: \n");
    scanf("%s", nome1);
    printf("Populacao: \n");
    scanf("%d", &populacao1);
    printf("Pontos Turisticos: \n");
    scanf("%d", &pontos_turisticos1);
    printf("Area: \n");
    scanf("%f", &area1);
    printf("PIB: \n");
    scanf("%f", &pib1);

    // Calculo carta 1
    densidade_populacional1 = (float) populacao1 / area1;
    pib_per_capita1 = (float) pib1 / populacao1;
    superpoder1 = populacao1 + pontos_turisticos1 + pib_per_capita1 + area1 + pib1 + (1.0 / densidade_populacional1);
    // Entrada e saida de dados Carta 2
    printf("Carta 2: \n");
    printf("Estado (A-H): \n");
    scanf("%s", estado2);
    printf("Codigo da Carta (A1): \n");
    scanf("%s", codigo2);
    printf("Nome da Cidade: \n");
    scanf("%s", nome2);
    printf("Populacao: \n");
    scanf("%d", &populacao2);
    printf("Pontos Turisticos: \n");
    scanf("%d", &pontos_turisticos2);
    printf("Area: \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);

    // Calculo carta 2
    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita2 = (float) pib2 / populacao2;
    superpoder2 = populacao2 + pontos_turisticos2 + pib_per_capita2 + area2 + pib2 + (1.0 / densidade_populacional2);

    // if condição verdadeira
    // else condição falsa
    if(populacao1 > populacao2){
        printf("População: Carta 1 venceu! \n");
    } else{
        printf("População: Carta 2 venceu! \n");
    }
    if (area1 > area2){
        printf("Area: Carta 1 venceu! \n");
    } else{
        printf("Area: Carta 2 venceu! \n");
    }
    if (pib1 > pib2){
        printf("PIB: Carta 1 venceu! \n");
    } else{
        printf("PIB: Carta 2 venceu! \n");
    }
    if (pontos_turisticos1 > pontos_turisticos2){
        printf("Pontos Turisticos: Carta 1 venceu! \n");
    } else{
        printf("Pontos Turisticos: Carta 2 venceu! \n");
    }
    if (densidade_populacional1 < densidade_populacional2){
        printf("Densidade Populacional: Carta 1 venceu! \n");
    } else{
        printf("Densidade Populacional: Carta 2 venceu! \n");
    }
    if (pib_per_capita1 > pib_per_capita2){
        printf("PIB Per Capita: Carta 1 venceu! \n");    
    } else{
        printf("PIB Per Capita: Carta 2 venceu! \n");
    }
    if (superpoder1 > superpoder2){
        printf("Super Poder: Carta 1 venceu! \n");
    } else{
        printf("Super Poder: Carta 2 venceu! \n");
    };
    return 0;
}