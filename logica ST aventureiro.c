#include <stdio.h>

int main()
{

    char estado, cidade;
    int pop, pt, atributo;
    float area, pib, ddem;

    printf("Nome do seu estado é:\n");
    scanf("%c", &estado);
    printf("Nome da cidade é:\n");
    scanf("%c", &cidade);
    printf("População da sua cidade: ");
    scanf("%i", &pop);
    printf("Área da sua cidade: ");
    scanf("%f", &area);
    printf("Produto interno bruto da sua cidade: ");
    scanf("%f", &pib);
    printf("Números de pontos turisticos da sua cidade: ");
    scanf("%i", &pt);
    printf(".........................\n");
    ddem = (float)pop / area;

    char estado2, cidade2;
    int pop2, pt2;
    float area2, pib2, ddem2;

    printf("Nome do estado é:\n");
    scanf("%c", &estado2);
    printf("Nome da cidade é:\n");
    scanf("%c", &cidade2);
    printf("População da sua cidade: ");
    scanf("%i", &pop2);
    printf("Área da sua cidade: ");
    scanf("%f", &area2);
    printf("Produto interno bruto da sua cidade: ");
    scanf("%f", &pib2);
    printf("Números de pontos turisticos da sua cidade: ");
    scanf("%i", &pt2);

    ddem2 = (float)pop2 / area2;

    printf("Qual Atributo quer usar?\n População\n Área\n PIB\n PIB Per Capita\n Pontos turísticos\n");
    scanf("%i", &atributo);
    switch (atributo)
    {
    case 1: // População
        printf(".........................\n");
        printf("Atributo utilizado (População)\n");

        if (pop = pop2)
        {
            printf("Empate");
        }
        if (pop > pop2)
        {
            printf("População: Carta 1 venceu\n");
        }
        else
        {
            printf("População: Carta 2 venceu\n");
        }

        break;
    case 2: // Área
        printf(".........................\n");
        printf("Atributo utilizado (Área)\n");

        if (area = area2)
        {
            printf("Empate");
        }

        if (area > area2)
        {
            printf("Area: Carta 1 venceu\n");
        }
        else
        {
            printf("Area: Carta 2 venceu\n");
        }
        break;
    case 3: // pib
        printf(".........................\n");
        printf("Atributo utilizado (PIB)\n");

        if (pib = pib2)
        {
            printf("Empate");
        }
        if (pib > pib2)
        {
            printf("PIB: Carta 1 venceu\n");
        }
        else
        {
            printf("PIB: Carta 2 venceu\n");
        }
        break;
    case 4:
        printf(".........................\n");
        printf("Atributo utilizado (Pontos turisticos)\n");

        if (pt = pt2)
        {
            printf("Empate");
        }

        if (pt > pt2) // pontos turisticos
        {
            printf("Pontos turístico: Carta 1 venceu\n");
        }
        else
        {
            printf("Pontos turisticos: Carta 2 venceu\n");
        }

        break;
    case 5:
        printf(".........................\n");
        printf("Atributo utilizado (Densidade demográfica)\n");

        if (ddem = ddem2)
        {
            printf("Empate");
        }
        if (ddem < ddem2)
        {
            printf("Densidade demografica: Carta 1 venceu\n");
        }
        else
        {
            printf("Densidade demográfica: Carta 2 venceu\n");
        }
        break;
    default:
        printf("Número de atributo não encontrado");
        break;
    }

    return 0;
}
