#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float compras[3];
    float comprasx[3];
    float pagar[3] = {0, 0, 0};
    float total;
    float valor;
    int i;
    int t;
    int v;
    
    for(i = 0; i < 3; i++) //define quanto cada pessoa pagou nas compras//
    {
        printf("quanto a pessoa %d gastou?\n", i + 1);
        scanf("%f", &compras[i]);
        comprasx[i] = compras[i];
    }



    for(i = 0; i < 3; i++) //define quanto cada pessoa gastou em compras individuais//
    {
        for(t = 0; t < 3; t++)
        {
            printf("compras que a pessoa %d comprou para a pessoa %d\n", i + 1, t + 1);
            scanf("%f", &valor);
            compras[i] -= valor;
            pagar[t] += valor;
        }
    }


    for(i = 0; i < 3; i++)
    {
        for(t = 0; t < 3; t++)
        {
            for(v = 0; v < 3; v++)
            {
                if(v < t)
                    continue;
                if(t == v)
                    continue;
                printf("compras que a pessoa %d pagou para as pessoas %d e %d\n", i + 1, t + 1, v + 1);
                scanf("%f", &valor);
                compras[i] -= valor;
                valor /= 2.0;
                pagar[t] += valor;
                pagar[v] += valor;
            }
        }
    }

    for(i = 0; i < 3; i++)
        total += compras[i];
    total /= 3.0;
    for(i = 0; i < 3; i++)
    {
        comprasx[i] -= total;
        comprasx[i] -= pagar[i];
    }

    printf("\n------------DADOS------------\n");

    for(i = 0; i < 3; i++)
    {
        if(comprasx[i] > 0)
            printf("a pessoa %d esta com credito de R$%.2f\n", i + 1, comprasx[i]);
        if(comprasx[i] < 0)
            printf("a pessoa %d esta com debito de R$%.2f\n", i + 1, comprasx[i] * (-1));
        if(comprasx[i] == 0)
            printf("a pessoa %d nao esta devendo nada\n", i + 1);
    }

    return EXIT_SUCCESS;
}


