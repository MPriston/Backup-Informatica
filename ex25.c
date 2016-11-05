#include <stdio.h>
#include <math.h>

int main(void)
{
    float vprod,vpago,troco,a,valores[6] = {1.0, 0.5, 0.25, 0.1, 0.05, 0.01};
    int moedas[6],i;
    
    printf("Digite o valor do produto desejado:\n");
    scanf("%f", &vprod);
    printf("Digite o valor pago:\n");
    scanf("%f", &vpago);

    troco = vpago - vprod;

    for(i=0;i<6;i++)
    {
        a = fmod(troco, valores[i]);
        moedas[i] = troco / valores[i];
        troco = a;
    }

    printf("\n---------TROCO---------\n");
    printf("%d moedas de 1 Real\n", moedas[0]);
    printf("%d moedas de 50 Centavos\n", moedas[1]);
    printf("%d moedas de 25 Centavos\n", moedas[2]);
    printf("%d moedas de 10 Centavos\n", moedas[3]);
    printf("%d moedas de 5 Centavos\n", moedas[4]);
    printf("%d moedas de 1 Centavo\n", moedas[5]);

    return 0;
}
