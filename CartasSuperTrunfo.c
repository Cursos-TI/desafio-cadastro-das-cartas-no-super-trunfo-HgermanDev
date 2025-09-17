#include <stdio.h>
#include <windows.h>
#include <string.h>

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
    int pturistico[2], cod[2];
    float area[2], pib[2], populacao[2], DP[2], PPC[2];
    char nome1[20], nome2[20], estado1[5], estado2[5];

    printf("SUPER TRUNFO\n CIDADES !\n \n \n Pressione enter_");
    getchar();     // função de pausa para checagem do input
    system("cls"); // limpeza da tela
    counting();    // timer

    printf("###########################\n");
    printf("Digite os dados de sua carta 1\n");
    printf("Nome: ");
    scanf("%s", &nome1);
    printf("Estado:(APENAS SIGLA)");
    scanf("%s", &estado1);
    printf("Populacao: ");
    scanf("%f", &populacao[1]);
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
    scanf("%s", &nome2);
    printf("Estado: (APENAS SIGLA)");
    scanf("%s", &estado2);
    printf("Populacao: ");
    scanf("%f", &populacao[2]);
    printf("Pontos turisticos: ");
    scanf("%d", &pturistico[2]);
    printf("Area: ");
    scanf("%f", &area[2]);
    printf("Pib: ");
    scanf("%f", &pib[2]);
    system("cls"); // limpeza da tela
    counting();    // timer

    if (estado1 == estado2) // Automatizador de código
    {
        cod[1] = 01;
        cod[2] = 02; // mesma sigla estadual - Cartas tem o código final alterado.
    }
    else
    {
        cod[1], cod[2] = 01; // Sigla estadual diferente, cartas com código final iguais.
    }

    DP[1] = populacao[1] / area[1];//cálculo da densidade populacional
    DP[2] = populacao[2] / area[2];
    PPC[1] = pib[1] / populacao[1];//cálculo do PIB per capta
    PPC[2] = pib[2] / populacao[2];

    printf("###########################\n");
    printf("Dados de sua carta 1\n");
    printf("Código: %.2s,%s,%d", nome1, estado1, cod[1]);
    printf("\nNome: %s", nome1);
    printf("\nEstado: %s", estado1);
    printf("\nPopulacao: %f", populacao[1]);
    printf("\nDensidade populacional: %f", DP[1]);
    printf("\nPontos turisticos: %d", pturistico[1]);
    printf("\nArea: %f km", area[1]);
    printf("\nPIB: %f R$", pib[1]);
    printf("\nPIB per capta: %f R$", PPC[1]);

    printf("\n\n###########################\n");
    printf("Dados de sua carta 2\n");
    printf("Código: %.2s %s %d", nome2, estado2, cod[1]);
    printf("\nNome: %s", nome2);
    printf("\nEstado: %s", estado2);
    printf("\nPopulacao: %d", populacao[2]);
    printf("\nDensidade populacional: %f", DP[2]);
    printf("\nPontos turisticos: %d", pturistico[2]);
    printf("\nArea: %f km", area[2]);
    printf("\nPIB: %f R$", pib[2]);
    printf("\nPIB per capta: %f R$", PPC[2]);

    return 0;
}