#include <stdio.h>
#include <windows.h>

void counting()
{
    for (int i = 3; i > 0; i--)
    {
        printf("%d...\n", i);
        Sleep(1000);
    }
}
int main()
{
    int populacao[2], pturistico[2];
    float area[2], pib[2];
    char nome1[20], nome2[20], estado1[2], estado2[2];

    printf("SUPER TRUNFO\n CIDADES !\n \n \n Pressione enter_");
    getchar();     // função de pausa para checagem do input
    system("cls"); // limpeza da tela
    counting();    // timer

    printf("###########################\n");
    printf("Digite os dados de sua carta 1\n");
    printf("Nome: ");
    scanf("%s", nome1);
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Populacao: ");
    scanf("%d", &populacao[1]);
    printf("Pontos turisticos: ");
    scanf("%d", &pturistico[1]);
    printf("Area: ");
    scanf("%f", &area[1]);
    printf("Pib: ");
    scanf("%f", &pib[1]);

    counting();    // timer
    system("cls"); // limpeza da tela
    printf("Pressione enter para registrar a carta 2");
    getchar(); // função de pausa para checagem do input

    printf("###########################\n");
    printf("Digite os dados de sua carta 2\n");
    printf("Nome: ");
    scanf("%s", nome2);
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Populacao: ");
    scanf("%d", &populacao[2]);
    printf("Pontos turisticos: ");
    scanf("%d", &pturistico[2]);
    printf("Area: ");
    scanf("%f", &area[2]);
    printf("Pib: ");
    scanf("%f", &pib[2]);
    system("cls"); // limpeza da tela
    counting();    // timer

    printf("###########################\n");
    printf("Dados de sua carta 1\n");
    printf("\nNome: %s", nome1);
    printf("\nEstado: %s", estado1);
    printf("\nPopulacao: %d", populacao[1]);
    printf("\nPontos turisticos: %d", pturistico[1]);
    printf("\nArea: %f km", area[1]);
    printf("\nPopulacao: %f", pib[1]);

    printf("\n\n###########################\n");
    printf("Dados de sua carta 2\n");
    printf("\nNome: %s", nome2);
    printf("\nEstado: %s", estado2);
    printf("\nPopulacao: %d", populacao[2]);
    printf("\nPontos turisticos: %d", pturistico[2]);
    printf("\nArea: %f km", area[2]);
    printf("\nPopulacao: %f", pib[2]);

    return 0;
}