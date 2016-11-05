#include<stdio.h>
#include<stdlib.h>

#define NMAX 20

void menu(void);// as funcoes menu irao ser removidas do codigo final, so estao aki a proposito de testes, assim como todos os printf//
void menu2(void);

int main(void)
{
    int button = 0; //variavel sinaliza o status do botao, 1(numeros normais) ele esta apertado e 0(pin) o outro botao esta apertado//
    int i;
    int c; //reflete o botao correto a se apertar//

    do
    {
        for(i=1;i<=NMAX;i++)
        {
            menu();
            scanf("%d",&button);
            if(i%4==0 || i%7==0)
                c=0;
            else
                c=1;
            if(c==button)//compara para ver se o usuario precionou o botao certo//
                printf("\n%d\n",i);
            else
            {
                printf("voce errou\n");
                break;
            }
        }
        printf("Voce terminou o jogo!\n");

        menu2();
        scanf("%d",&button);
    }
    while(button==0);

    return EXIT_SUCCESS;
}

void menu(void)
{
    printf("O proximo numero eh:\n");
    printf("0.Pin\n");
    printf("1.Normal\n");

    return;
}

void menu2(void)
{
    printf("voce quer jogar denovo?\n");
    printf("0.Sim\n");
    printf("1.Nao\n");

    return;
}
