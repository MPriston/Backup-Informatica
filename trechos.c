#include<stdio.h>

#define TREMAX 5

int main(void)
{
    int i,trechos,infot[TREMAX],h,m,tempo;
    float t,v,d;

    printf("Insira o numero de trechos(não mais que 5):\n");
    scanf("%d",&trechos);
    printf("Insira a hora e os minutos inicias da prova\n");
    scanf("%d %d",&h,&m);

    for(i=0;i<trechos;i++)
    {
        printf("Que informacoes voce possui do trecho %d:\n",i+1);
        printf("1. Velocidade e Tempo\n");
        printf("2. Velocidade e Distancia\n");
        printf("3. Tempo e Distancia\n");
        scanf("%d",&infot[i]);
    }

    for(i=0;i<trechos;i++)
    {
        if(infot[i]==1)
        {
            printf("Digite a velocidade media do percurso %d:\n",i+1);
            scanf("%f",&v);
            printf("Digite em quando tempo voce deve estar no final do trecho %d:\n",i+1);
            scanf("%f",&t);

            d=v*(t/60);
            tempo=(h*60)+m+t;
            h=tempo/60;
            m=tempo%60;

            printf("Voce deve percorrer %.1f kilometros no trecho %d\n",d,i+1);
            printf("Voce deve estar no final do percurso as %d horas e %d minutos\n",h,m);
        }

        if(infot[i]==2)
        {
            printf("Digite a velocidade media do percurso %d:\n",i+1);
            scanf("%f",&v);
            printf("Digite a quantos quilometros esta o fim do trecho %d:\n",i+1);
            scanf("%f",&d);

            t=(d/v)*60;
            tempo=(h*60)+m+t;
            h=tempo/60;
            m=tempo%60;

            printf("Voce deve estar no final do percurso %d em %.0f minutos\n",i+1,t);
            printf("Voce deve estar no final do percurso as %d horas e %d minutos\n",h,m);
        }

        if(infot[i]==3)
        {
            printf("Digite em quando tempo voce deve estar no final do trecho %d:\n",i+1);
            scanf("%f",&t);
            printf("Digite a quantos quilometros esta o fim do trecho %d:\n",i+1);
            scanf("%f",&d);
            
            v=d/(t/60);
            tempo=(h*60)+m+t;
            h=tempo/60;
            m=tempo%60;

            printf("Voce deve ir a %.1f kilometros por hora no trecho %d\n",v,i+1);
            printf("Voce deve estar no final do percurso as %d horas e %d minutos\n",h,m);
        }
    }

    return 0;
}

