#include <stdio.h>
int main(){
    int carta_1;
    int carta_2;
    char estado_1;
    char estado_2;
    char codigo_1[20];
    char codigo_2[20];
    char nome_cidade_1[50];
    char nome_cidade_2[50];
    float area_1;
    float area_2;
    float PIB_1;
    float PIB_2;
    int pontos_turisticos_1; 
    int pontos_turisticos_2; 
    printf("Digite sua carta_1: \n");
    scanf(" %d", &carta_1);

    printf("Digite o seu Estado_1: \n");
    scanf(" %s", &estado_1);

    printf("Digite seu codigo_1: \n");
    scanf(" %s", &codigo_1);

    printf("Digite o nome_da_cidade_1: \n");
    scanf(" %s", &nome_cidade_1);

    printf("Digite sua area_1: \n");
    scanf(" %f", &area_1);

    printf("Digite seu PIB_1: \n");
    scanf(" %f", &PIB_1);

    printf("Digite seu numero_de_pontos_turísticos_1: \n");
    scanf(" %d", &pontos_turisticos_1);

    printf("Digite sua carta_2: \n");
    scanf(" %d", &carta_2);

    printf("Digite o seu Estado_2: \n");
    scanf(" %s", &estado_2);

    printf("Digite seu codigo_2: \n");
    scanf(" %s", &codigo_2);

    printf("Digite o nome_da_cidade_2: \n");
    scanf(" %s", &nome_cidade_2);

    printf("Digite sua area_2: \n");
    scanf(" %f", &area_2);

    printf("Digite seu PIB_2: \n");
    scanf(" %f", &PIB_2);

    printf("Digite seu numero_de_pontos_turísticos_2: \n");
    scanf(" %d", &pontos_turisticos_2);


return 0;

}