#include <stdio.h>
//nivel mestre
int main()
{
    int pop2, pt2;
    float area2, pib2, ddem2;
    int pop, pt;
    float area, pib, ddem;
    int atributo1, atributo2;

    printf("......SUPER TRUNFO......\n");
    printf("Escolha o atributo para a comparação:\n");
    printf(" População(1)\n Área(2)\n PIB(3)\n Pontos turisticos(4)\n Densidade demográfica(5)\n");
    scanf("%i", &atributo1);

    printf("Carta 1 - Rio de Janeiro\n");
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

    printf("Carta 2 - Manaus\n");
    printf("População da sua cidade: ");
    scanf("%i", &pop2);
    printf("Área da sua cidade: ");
    scanf("%f", &area2);
    printf("Produto interno bruto da sua cidade: ");
    scanf("%f", &pib2);
    printf("Números de pontos turisticos da sua cidade: ");
    scanf("%i", &pt2);

    ddem2 = (float)pop2 / area2;

    switch (atributo1)
    {
    case 1:

        printf(".........................\n");
        printf("Atributo utilizado (População)\n");

        if (pop == pop2)
        {
            printf("Empate");
        }
        else if (pop > pop2)
        {
            printf("População: Carta 1 venceu\n");
        }
        else
        {
            printf("População: Carta 2 venceu\n");
        }

        break;
    case 2:
        printf(".........................\n");
        printf("Atributo utilizado (Área)\n");

        if (area == area2)
        {
            printf("Empate");
        }
        else if (area > area2)
        {
            printf("Area: Carta 1 venceu\n");
        }
        else
        {
            printf("Area: Carta 2 venceu\n");
        }

        break;
    case 3:

        printf(".........................\n");
        printf("Atributo utilizado (PIB)\n");

        if (pib == pib2)
        {
            printf("Empate");
        }
        else if (pib > pib2)
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

        if (pt == pt2)
        {
            printf("Empate");
        }
        else if (pt > pt2) // pontos turisticos
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

        if (ddem == ddem2)
        {
            printf("Empate\n");
        }
        else if (ddem < ddem2)
        {
            printf("Densidade demografica: Carta 1 venceu\n");
        }
        else
        {
            printf("Densidade demográfica: Carta 2 venceu\n");
        }
        break;

    default:
        printf("Atributo não encontrado");
        break;
    }

    printf("Escolha seu segundo atributo para comparar:\n");
    scanf("%i", &atributo2);

    if (atributo1 == atributo2)
    {
        printf("Voce escolheu o mesmo atributo");
    }
    else
    {
        switch (atributo2)
        {
        case 1:

            printf(".........................\n");
            printf("Atributo utilizado (População)\n");

            if (pop == pop2)
            {
                printf("Empate");
            }
            else if (pop > pop2)
            {
                printf("População: Carta 1 venceu\n");
            }
            else
            {
                printf("População: Carta 2 venceu\n");
            }

            break;
        case 2:
            printf(".........................\n");
            printf("Atributo utilizado (Área)\n");

            if (area == area2)
            {
                printf("Empate");
            }
            else if (area > area2)
            {
                printf("Area: Carta 1 venceu\n");
            }
            else
            {
                printf("Area: Carta 2 venceu\n");
            }

            break;
        case 3:

            printf(".........................\n");
            printf("Atributo utilizado (PIB)\n");

            if (pib == pib2)
            {
                printf("Empate");
            }
            else if (pib > pib2)
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

            if (pt == pt2)
            {
                printf("Empate");
            }
            else if (pt > pt2) // pontos turisticos
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

            if (ddem == ddem2)
            {
                printf("Empate");
            }
            else if (ddem < ddem2)
            {
                printf("Densidade demografica: Carta 1 venceu\n");
            }
            else
            {
                printf("Densidade demográfica: Carta 2 venceu\n");
            }
            break;

        default:
            printf("Atributo não encontrado");
            break;
        }
    }
    return 0;
}
